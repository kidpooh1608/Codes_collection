#include <map>
#include <unordered_map>
#include <bits/stdc++.h>
#include <pthread.h>
#include <mutex>
#include <fstream>
#include <cstdint>
#include <unistd.h>

using namespace std;
void *write_file(void* s);
pthread_mutex_t m;
pthread_barrier_t our_barrier;
int checkAnagrams(string s1, string s2);
int checkBalanced(string s);
int binarySearch(int array[], int l, int r, int item);
string removeDuplicate(string s);

int main(void)
{
//	map<int, int> my_map;
//	my_map[1] = 10;
//	my_map[-1] = 100;
//	my_map[2] = 20;
//	my_map[3] = 30;
//	my_map.insert(pair <int, int> (1, 10));
//	my_map.insert(pair <int, int> (3, 30));
//	my_map.insert(pair <int, int> (-1, 100));
//	my_map.insert(pair <int, int> (2, 20));

	//map<int, int>:: iterator it;
//	for (auto it: my_map)
//	{
//		cout  <<  '\t' << it.first
//				<<  '\t' << it.second << '\n';
//	}
//	cout << endl;
//
//	unordered_map<string, string> hashtb;
//	hashtb["key3"] = "3";
//	hashtb["key1"] = "1";
//	hashtb["key2"] = "2";
//	hashtb.insert(make_pair("key1", "1"));
//	hashtb.insert(make_pair("key2", "2"));
//	hashtb.insert(make_pair("key3", "3"));
//	hashtb.insert(make_pair("key4", "4"));
//
//	cout << hashtb["key3"] << endl;
//
//	set<int> s1;
//
//	s1.insert(-1);
//	s1.insert(2);
//	s1.insert(4);
//	s1.insert(3);
//
//	for (auto it:s1)
//	{
//		cout << it << endl;
//	}

	int number_thread = 4;
	pthread_t  threads[number_thread];
	pthread_barrier_init(&our_barrier,NULL,4);
	for(int i = 0; i < number_thread; i++)
	{
		pthread_create(&threads[i], NULL, write_file, (void *)i);
		pthread_join(threads[i],NULL);
	}
//
//	pthread_barrier_destroy(&our_barrier);
//	cout << "finished";
//	child *c = new child();
//	delete c ;
//	cout << checkBalanced("(((()") << endl;
//	cout << checkBalanced("()()()()") << endl;
//	cout << checkBalanced("()())(") << endl;
//	cout << checkBalanced("(((())))") << endl;
//	int array[7] = {1, 2, 4 , 7, 9, 10, 11};
//
//	cout << binarySearch(array, 0, sizeof(array)/sizeof(int)-1, 2);
	cout << removeDuplicate("kktdtijkhtml") << endl;

	return 0;
}
string removeDuplicate(string s)
{
	unordered_map<char, int> map_check;
	string result;

	for (int i = 0; i < s.length(); i++)
	{
		if( map_check[s[i]] != 1)
		{
			map_check[s[i]] = 1;
			result += s[i];
		}
	}
	return result;
}


int binarySearch(int array[], int l, int r, int item)
{
	int mid = 0;
	if (r > l)
	{
		mid = 1+ (r-l)/2;
		if (array[mid] == item)
		{
			return mid;
		}
		else
		{
			if (array[mid] < item)
				return binarySearch(array, mid + 1, r, item);
			else
				return binarySearch(array, l , mid -1 , item);
		}
	}

	return -1;
}
int checkBalanced(string s)
{
	stack<char> mystack;
	int isBalanced = 1;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
		{
			mystack.push(s[i]);
		}
		else
		{
			if(mystack.empty())
			{
				isBalanced = 0;
			}
			else
			{
				mystack.pop();
			}
		}
	}

	if (isBalanced && mystack.empty())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int checkAnagrams(string s1, string s2)
{
	unordered_map<char, int> map_string;

	if (s1.length() != s2.length())
	{
		return 0;
	}
	for(int i = 0; i < s1.length(); i++)
	{
		map_string[s1[i]] = 1;
	}

	int is_ok = 1;
	for (int i = 0; i < s2.length(); i++)
	{
		if (map_string[s2[i]] != 1)
		{
			is_ok = 0;
			break;
		}
	}
	return is_ok;
}

void *write_file(void * s)
{
	ofstream myFile;
	long is = (long)s;
	cout << "sleeping 2..." << is;
	pthread_barrier_wait(&our_barrier);
	sleep(2);
	cout << "wrting file..." << is;
	pthread_mutex_lock(&m);
	myFile.open("tmp.txt", ofstream::out|ofstream::app);
	cout << "printing line " << s << endl;
	myFile << "line " << is << endl;
	myFile.close();
	pthread_mutex_unlock(&m);
}

int countUpper(string s)
{
	unsigned int count = 0;
	for (unsigned int i = 0; i < s.length(); i++)
	{
		if (((int)s[i] >= (int)'A') && ((int)s[i] <= (int)'Z'))
		{
			count += 1;
		}
	}

	cout << "Number of uppercase is " << count << endl;
	return count;
}

char getFirstSee(string s)
{
	string temp;

	for (int i  = 0; i < s.length(); i++)
	{
		if (temp.find(s[i]) == -1)
		{
			temp += s[i];
		}
		else
		{
			return s[i];
		}
	}
	return '\0';
}
