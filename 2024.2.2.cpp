#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


//class people
//{
//public:
//	string name;
//public:
//	int age;
//	string car;
//public:
//	long money;
//public:
//	void func()
//	{
//		name = "张三";
//		age = 20;
//		car = "benz";
//		money = 9999999;
//	}
//};
//int main()
//{
//	people p1;
//	p1.name = "张三";
//	p1.age = 20;
//	p1.car = "benz";
//	p1.money = 9999999;
//	cout << p1.name << "  " << p1.age << "   " << p1.car << "  " << p1.money;
//	return 0;
//}


//访问权限
//class people
//{
//public:
//	void set_age(int _age)
//	{
//		age = _age;
//	}
//	int getage()
//	{
//		return age;
//	}
//	void set_money(long long _money)
//	{
//		money = _money;
//	}
//	long long getmoney()
//	{
//		return money;
//	}
//public:
//	string name;
//private:
//	int age;
//private:
//	long long money;
//};
//
//int main()
//{
//	people p1;
//	p1.name = "张三";
//	p1.set_age(18);
//	p1.set_money(99999999);
//	cout << p1.name << "    " << p1.getage() << "    " << p1.getmoney();
//	return 0;
//}


//struct与class的区别
//struct默认权限是public;
//class默认权限是private


//struct people
//{
//	//默认权限__public;
//	int a;
//};
//
//class people2
//{
//	//默认权限__private;
//	int a;
//};
//
//
//int main()
//{
//	people p1;
//	people2 p2;
//	p1.a = 100;//对struct中的a可以进行初始化，可见其权限是public
//	p2.a = 200;//对class中的a不可以进行初始化，可见其权限是private
//	return 0;
//}


//class cube
//{
//public:
//	int a;
//
//	int sqrue()
//	{
//		return a * a * 6;
//	}
//	int v()
//	{
//		return a * a * a;
//	}
//	int check(int b)
//	{
//		if (a == b)
//		{
//			return 1;
//		}
//		return -1;
//	}
//};
//
//
//int check(int a, int a2)
//{
//	if (a == a2)
//	{
//		return 1;
//	}
//	return -1;
//}
//
//int main()
//{
//	cube c1;
//	cube c2;
//	cin >> c1.a;
//	cin >> c2.a;
//	/*int ret = check(c1.a, c2.a);
//	if (ret == 1)
//	{
//		cout << "相等";
//	}
//	else
//	{
//		cout << "不等";
//	}*/
//	int ret = c1.check(c2.a);
//	if (ret == 1)
//	{
//		cout << "yes";
//	}
//	else
//		cout << "no";
//	return 0;
//}


//判断点和圆的位置关系
//圆类

//#include<math.h>
//
//class circle
//{
//public:
//	int r;
//	int x0, y0;
//
//};
//
////点类
//class point
//{
//public:
//	int x, y;
//};
//
//
//int check(int l, int r)
//{
//	if (l < r)
//	{
//		return -1;
//	}
//	else if (l == r)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	//创建圆和点
//	circle c1;
//	point p1;
//	cout << "请输入圆的半径和圆心"<<endl;
//	cin >> c1.r >> c1.x0 >> c1.y0;
//	cout << "请输入点的坐标" << endl;
//	cin >> p1.x >> p1.y;
//	double l = sqrt(pow((c1.x0 - p1.x),2) + pow((c1.y0 - p1.y),2));
//	int ret = check(l, c1.r);
//	if (ret == -1)
//	{
//		cout << "在圆内";
//	}
//	else if (ret == 0)
//	{
//		cout << "在圆上";
//	}
//	else
//	{
//		cout << "在圆外";
//	}
//	return 0;
//}

//构造函数和析构函数
//在class中，必须要有构造和析构函数，如果自己不写，编译器会提供

//class people
//{
//public:
//	people()
//	{
//		cout << "构造函数的调用"<<endl;
//	}
//	int a;
//	~people()
//	{
//		cout << "析构函数的调用";
//	}
//};
//
//int main()
//{
//	people p1;
//	system("pause");
//	return 0;
//}

//int& func()
//{
//	static int a = 10;
//	return a;
//}
//
//int main()
//{
//	int& a = func();
//	cout << a;
//	cout << a;
//	func() = 20;
//	cout << a;
//	cout << a;
//	return 0;
//}



//函数重载

//int函数
//void func(int a)
//{
//	cout << "这是int";
//}
//
////float函数
//void func(float a)
//{
//	cout << "这是float";
//}
//
//int main()
//{
//	func(1.1f);
//	return 0;
//}

//void func(string a)
//{
//	cout << "这是char";
//}
//
////float函数
//void func(float a)
//{
//	cout << "这是float";
//}
//
//int main()
//{
//	func("asdas");
//	return 0;
//}


//顺序不同的重载

//void func(int a, float b, char c)
//{
//	cout << "!";
//}
//void func(float a, int b, char c)
//{
//	cout << "?";
//}
//
//int main()
//{
//	func(1, 2.1f, 'a');
//
//	return 0;
//}

//函数占位符


//void func(int a, int)
//{
//	cout << "占位成功";
//}
//
//int main()
//{
//	func(10, 2);
//	return 0;
//}
