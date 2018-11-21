#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <bits/stdc++.h>
#include <exception>

//#include "virtual_function.hh"
//
//using namespace std;
//
////class Student
////{
////public:
////    int scores[5];
////
////    Student()
////    {
////    	//emty
////    }
////    void input()
////    {
////    	for (int i =0; i<5; i++)
////    	{
////    		cin >> this->scores[i];
////    	}
////    }
////
////    int calculateTotalScore()
////    {
////        int sum = 0;
////        for (int i = 0; i < 5; i++)
////        {
////            sum += this->scores[i];
////            cout <<  this->scores[i] << endl;
////        }
////        return sum;
////    }
////};
////
////class Box
////{
////public:
////	int l, b, h;
////
////	Box(int l,int b, int h)
////	{
////		this->l = l;
////		this->b = b;
////		this->h = h;
////	}
////	int getLength()
////	{
////		return this->l;
////	}
////	int getBreadth()
////	{
////		return this->b;
////	}
////
////	int getHeight()
////	{
////		return this-> h;
////	}
////	bool operator<(Box& b)
////	{
////		if (this->l < b.getLength())
////		{
////			return true;
////		}
////		else
////		{
////			if (this->l == b.getLength() && this->b < b.getBreadth())
////			{
////				return true;
////			}
////			else if(this->l == b.getLength() && this->b == b.getBreadth() && this->h < b.getHeight())
////			{
////				return true;
////			}
////		}
////		return false;
////	}
////	ostream& operator<<(ostream& out, Box& B)
////	{
////		out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
////		return out;
////	}
////};
//int main(void)
//{
//	int n;
//	cin >> n;
////
////	Student *s = new Student[n];
////
////	for (int i = 0; i< n; i++)
////	{
////		s[i].input();
////		for(int j = 0; j < 5; j++)
////		{
////			cout << s[i].scores[j];
////		}
////		cout << endl;
////	}
//
//	Person *p[n];
//	int t;
//	for (int i = 0; i< n; i++)
//	{
//		cin >> t;
//		p[i] = new Student;
//		p[i]->getdata();
//	}
//
//	for (int i = 0; i< n; i++)
//	{
//		p[i]->putdata();
//	}
//
////	for (int i = 0; i < n; i++)
////	{
////		for(int j = 0; j<5; j++)
////		{
////			cout << s[i].scores[j];
////		}
////		cout << endl;
////	}
//
////	int kr = s[0].calculateTotalScore();
////	cout << kr << endl;
////
////	int count = 0;
////
////	for (int i = 1; i< n; i++)
////	{
////		int total = s[i].calculateTotalScore();
////		if (total > kr)
////		{
////			count++;
////		}
////	}
//
//	//cout << count << endl;
//	return 0;
//}
#include <iostream>
#include "test.hh"
//#include "main.hh"
using namespace std;
//static int a = 10;

int main(void)
{
	StackV1 st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);

	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;


	return 0;
}
