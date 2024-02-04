#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;



//class people
//{
//public:
//	people()
//	{
//		cout << "无参构造函数的调用" << endl;
//	}
//
//	people(string a,int b)
//	{
//		name = a;
//		age = b;
//		cout << "有参构造函数的调用" << endl;
//	}
//
//	people(const people& p)
//	{
//		cout << "拷贝构造函数的调用" << endl;
//		name = p.name;
//		age = p.age;
//	}
//
//	~people()
//	{
//		cout << "析构函数的调用" << endl;
//	}
//
//	string name;
//	int age;
//};
//
//void test01(void)
//{
//	people p1("张三", 20);
//	people p2(p1);
//	cout << p1.name << "  " << p1.age << endl;
//	cout << p2.name << "  " << p2.age << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}

//class people
//{
//public:
//	/*people()
//	{
//		cout << "无参构造函数的调用" << endl;
//	}
//
//	people(string a, int b)
//	{
//		name = a;
//		age = b;
//		cout << "有参构造函数的调用" << endl;
//	}*/
//
//	people(const people& p)
//	{
//		cout << "拷贝构造函数的调用" << endl;
//		name = p.name;
//		age = p.age;
//	}
//
//	~people()
//	{
//		cout << "析构函数的调用" << endl;
//	}
//
//	string name;
//	int age;
//};
//
//void test01(void)
//{
//	people p1("张三", 20);//当拷贝构造函数出现时，默认的构造函数就不能使用了
//	people p2(p1);
//	cout << p1.name << "  " << p1.age << endl;
//	cout << p2.name << "  " << p2.age << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}


//深拷贝和浅拷贝


//class people
//{
//public:
//	people()
//	{
//		cout << "无参构造函数的调用" << endl;
//	}
//
//	people(string a, int b)
//	{
//		name = a;
//		age = b;
//		cout << "有参构造函数的调用" << endl;
//	}
//
//	people(const people& p)
//	{
//		cout << "拷贝构造函数的调用" << endl;
//		name = p.name;
//		age = p.age;
//	}
//
//	~people()
//	{
//		cout << "析构函数的调用" << endl;
//	}
//
//	string name;
//	int age;
//};
//
//void test01(void)
//{
//	people p1("张三", 20);
//	people p2(p1);
//	cout << p1.name << "  " << p1.age << endl;
//	cout << p2.name << "  " << p2.age << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}