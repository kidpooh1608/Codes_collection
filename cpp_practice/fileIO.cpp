#include <iostream>
#include <fstream>
#include <pthread.h>
#include <mutex>

 void write_file();
 void read_file();
 void *read_write_file(void * write);

 using namespace std;

mutex mux;

 int main(void)
 {
	 pthread_t threads[100];
	 char w = 0x00;
	 for (int i =0; i < 100; i++)
	 {
		 w ^= 0x01;
		 pthread_create(&threads[i], NULL, read_write_file, (void*) w);
		 pthread_join(threads[i],NULL);
	 }
	 return 0;
 }

 void *read_write_file(void* write)
 {
	 long w = (long) write;
	 cout << w << endl;
	 if(w)
	 {
		 write_file();
	 }
	 else
	 {
		 read_file();
	 }
 }

 void read_file()
 {
	 mux.lock();
	 ifstream in("tmp.txt");
	 char c;
	 while(in.get(c))
	 {
		 cout << c;
		 if (in.eof())
		 {
			 break;
		 }
	 }
	 in.close();
	 mux.unlock();
 }

 void write_file()
 {
	 static int i = 0;
	 ofstream out;

	 mux.lock();
	 out.open("tmp.txt", ofstream::out|ofstream::app);
	 out << "write_file: " << ++i << endl;
	 out.close();
	 mux.unlock();
 }
