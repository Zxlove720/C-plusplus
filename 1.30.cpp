#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//int* fun(void)
//{
//	int* p = new int(10);
//
//	return p;
//}
//int main()
//{
//	int a = 10;
//	int* p = fun();
//	cout << a << endl;
//	cout << *p << endl;
//	cout << (int) & a << endl;
//	cout << (int) & p << endl;
//
//
//	return 0;
//}

//int* fun(void)
//{
//	int* p = new int(10);
//	return p;
//}
//
//void test(void)
//{
//	int* p = fun();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	delete p;
//	cout << *p << endl;
//
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}

//int* fun(void)
//{
//	int* p = new int[10];
//	return p;
//}
//
//void test(void)
//{
//	int* p = fun();
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		cin >> p[i];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		cout << p[i] << " ";
//	}
//	delete[] p;
//	for (i = 0; i < 10; i++)
//	{
//		cout << p[i] << " ";
//	}
//}
//int main()
//{
//	test();
//
//
//	return 0;
//}

//C++中引用
//int main()
//{
//	int a = 10;
//	int& b = a;
//	b = 20;
//	cout << a << endl;
//	printf("%d", a);
//	a = 30;
//	printf("\n%d", b);
//	return 0;
//}


//函数的传址调用交换两个数字的值
//void swap(int* a, int* b)
//{
//	int temp = *b;
//	*b = *a;
//	*a = temp;
//}
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	swap(&a, &b);
//	cout << a << "   " << b << endl;
//	system("pause");
//	return 0;
//}

//引用修改两个数字的值
//void swap(int& a, int& b)
//{
//	int temp = b;
//	b = a;
//	a = temp;
//
//}
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	swap(a, b);
//	cout << a << "   " << b << endl;
//	return 0;
//}
//引用的效果和传址调用效果一样（几乎），但语法更加的简介（没有用到指针）；


//函数返回引用

/*int& fun(void)
{
	int a = 10;
	return a;
}

//这种写法是错误的，不能返回局部变量（栈区内存释放了）或临时变量的地址

int main()
{
	int& b = fun();
	cout << b << endl;

	return 0;
}*/

//int& fun(void)
//{
//	static int a = 10;
//	return a;
//}
//
//int main()
//{
//	int& b = fun();
//	cout << b << endl;
//	cout << b << endl;
//	cout << b << endl;
//	cout << b << endl;
//
//
//	return 0;
//}
//为了避免返回局部变量或者临时变量，用static关键字来进行修饰；

//int& fun(void)
//{
//	static int a = 100;
//	return a;
//}
//
//int main()
//{
//	int& b = fun();
//	cout << b << endl;
//	cout << b << endl;
//	cout << b << endl;
//	cout << b << endl;
//	//函数可以作为左值
//	fun() = 200;
//	cout << b << endl;
//	cout << b << endl;
//
//	return 0;
//}


//int& fun(void)
//{
//	int* p = new int(10);
//	return *p;
//}
//
//int main()
//{
//	int& b = fun();
//	cout << b << endl;
//	cout << b << endl;
//	cout << b << endl;
//	fun() = 100;
//	cout << b << endl;
//	cout << b << endl;
//	cout << b << endl;
//
//
//	return 0;
//}
//用new在堆区上面申请的空间好像不能作为左值修改


//int main()
//{
//	int a = 10;
//	int& b = a;
//	b = 20;
//	cout << a << endl;
//
//	return 0;
//}

//int& fun(const int& a)
//{
//	a = 100;
//	//因为有const修饰，所以说无法修改
//}
////为了防止一些误操作，有时需要使用const来修饰
//int main()
//{
//	int a = 10;
//	fun(a);
//	return 0;
//}


//通过引用的方式进行值的修改、交换等
//void fun(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	fun(a,b);
//	cout << a << "  " << b;
//	return 0;
//}

//引用的本质
//int main()
//{
//	int a = 10;
//	int* b = &a;
//	*b = 20;
//	cout << a << endl;
//	cout << *b;
//
//	return 0;
//}

int main()
{
	int* p = new int(10);
	cout << p << endl;
	cout << *p << endl;

	return 0;
}