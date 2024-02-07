#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;


//成员函数实现运算符重载
//class person
//{
//public:
//	int a;
//	int b;
//
//	person operator*(person& p)
//	{
//		person temp;
//		temp.a = a + p.a;
//		temp.b = b + p.b;
//		return temp;
//	}
//};
//
//void test01(void)
//{
//	person p1;
//	p1.a = 10;
//	p1.b = 10;
//
//	person p2;
//	p2.a = 10;
//	p2.b = 10;
//
//	person p3 = p1 + p2;
//	cout << "p3.a=" << p3.a << " p3.b=" << p3.b << endl;
//}
//
// 本质:  p3=p1.operator+(p2);
// 
//int main()
//{
//	test01();
//	return 0;
//}

//全局函数实现运算符重载

//class person
//{
//public:
//	int a;
//	int b;
//	
//};
//
//person operator+(person p1,person p2)
//{
//	person temp;
//	temp.a = p1.a + p2.a;
//	temp.b = p2.a + p2.b;
//	return temp;
//}
//
//void test01(void)
//{
//	person p1;
//	p1.a = 10;
//	p1.b = 10;
//
//	person p2;
//	p2.a = 10;
//	p2.b = 10;
//
//	//person p3 = p1 + p2;
//	//本质
//	person p3=operator+(p1, p2);
//	cout << "p3.a=" << p3.a << " p3.b=" << p3.b << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//重载左移运算符

//class people
//{
//	friend ostream& operator<<(ostream& cout, people p);
//public:
//	people(int x, int y)
//	{
//		a = x;
//		b = y;
//
//	}
//private:
//	int a;
//	int b;
//};
//
//ostream& operator<<(ostream& cout, people p)
//{
//	cout << p.a << " " << p.b;
//	return cout;
//}
//
//void test01(void)
//{
//	people p(10, 20);
//	cout << p;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//class people
//{
//	friend ostream& operator<<(ostream& cout, people p);
//		
//public:
//	people(int x, int y)
//	{
//		a = x;
//		b = y;
//	}
//
//private:
//	int a;
//	int b;
//};
//
//ostream& operator<<(ostream& cout, people p)
//{
//	cout << p.a << " " << p.b;
//	return cout;
//}
//
//
//void test01(void)
//{
//	people p1(10, 20);
//	cout << p1 << " zxl" << " hello world";
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//递增运算符重载

//class myint
//{
//	friend ostream& operator<<(ostream& cout, myint number);
//
//public:
//	myint(int a)
//	{
//		num = a;
//	}
//	int num;
//
//	myint& operator++()
//	{
//		num++;
//		return *this;
//	}
//	myint operator++(int)
//	{
//		myint temp = *this;
//		num++;
//		return temp;
//	}
//};
//
//ostream& operator<<(ostream& cout, myint number)
//{
//	cout <<number.num;
//	return cout;
//}
//
//
//
//void test()
//{
//	myint number(0);
//	//cout << ++(++number);
//	cout << (number)++;
//	cout << number;
//
//
//}
//
//
//int main()
//{
//	test();
//	return 0;
//}


//赋值运算符重载
//class people
//{
//public:
//	people(int a)
//	{
//		num = a;
//	}
//	int num;
//};
//
//void test()
//{
//	people p1(10);
//	people p2(20);
//	people p3(100);
//	p3 = p2;//编译器自带一种简单的赋值运算符重载，但会出现类似于深浅拷贝的重复释放内存空间的问题；
//	cout << p3.num;
//
//}
//
//
//int main()
//{
//
//	test();
//	return 0;
//}

//class people
//{
//public:
//	people(int a)
//	{
//		num = new int(a);
//	}
//
//	~people()
//	{
//		if (num != NULL)
//		{
//			delete num;
//			num = NULL;
//		}
//	}
//	int* num;
//
//	people& operator=(people &p)
//	{
//		if (num != NULL)
//		{
//			delete num;
//			num = NULL;
//		}
//		num = new int(*p.num);
//		return *this;
//	}
//};
//
//void test()
//{
//	people p1(10);
//	people p2(20);
//	people p3(100);
//	p3 = p2;
//	p2 = p1;
//	cout << *p3.num;
//	cout << *p2.num;
//}
//
//
//int main()
//{
//	test();
//	return 0;
//} 

//重载关系运算符
//class people
//{
//public:
//	people(string _name, int _height)
//	{
//		name = _name;
//		height = _height;
//	}
//	bool operator==(people p1)
//	{
//		if (name == p1.name && height == p1.height)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator!=(people p1)
//	{
//		if (name == p1.name && height == p1.height)
//		{
//			return false;
//		}
//		return true;
//	}
//	string name;
//	int height;
//};
//
//void test()
//{
//	people p1("张三", 180);
//	people p2("张三", 180);
//	if (p1 == p2)
//	{
//		cout << "p1==p2";
//	}
//	else
//	{
//		cout << "no";
//	}
//}
//
//
//int main()
//{
//	test();
//
//	return 0;
//}


class people
{
public:
	people(int a)
	{
		name = a;
	}
	int name;
	people operator+(people p)
	{
		people temp(100);
		temp.name = name + p.name;
		return temp;
	}

	
};

ostream& operator<<(ostream& cout,people p)
{
	cout <<	p.name;
	return cout;
}

void test()
{
	people p1(10);
	people p2(20);
	people p3 = p1 + p2;
	cout << p3;
}

int main()
{
	test();
	return 0;
}
