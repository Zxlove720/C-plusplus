#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//int* func(void)
//{
//	int* p = new int(10);
//	return p;
//}
//int main()
//{
//	int* a = func();
//	cout << *a << endl;
//	cout << *a << endl;
//	cout << *a << endl;
//	cout << *a << endl;
//
//
//
//}

//int* func(void)
//{
//	int p = 10;
//	return &p;
//}
//
//
//int main()
//{
//	int* a = func();
//	cout << *a << endl;
//	cout << *a << endl;
//	
//	return 0;
//}

int* func(void)
{
	int* p = (int*)malloc(4);
	*p = 10;
	return p;
}

int main()
{
	int* a = func();
	cout << *a << endl;
	return 0;
}