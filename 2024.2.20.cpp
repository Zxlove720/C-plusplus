#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

//运算符重载
//class people
//{
//public:
//	string name;
//	string sex;
//	int age;
//
//
//};
//
//
//int main()
//{
//	people p1;
//	p1.name = "张三";
//	p1.sex = "男";
//	p1.age = 18;
//	cout << p1.name << " " << p1.sex << " " << p1.age;
//	return 0;
//}


//class AGE
//{
//public:
//	int age;
//	AGE(int num)
//	{
//		age = num;
//	}
//	AGE operator+(AGE num1)
//	{
//		age += num1.age;
//		return age;
//	}
//};
//
//int main()
//{
//	AGE p1(20);
//	AGE p2(10);
//	AGE p3 = p1 + p2;
//	cout << p3.age;
//	return 0;
//}

//继承
class base
{
public:
	void head(void)
	{
		cout << "登录 注册 ……";
	}
	void foot(void)
	{
		cout << "关于 联系 ……";
	}
	void left(void)
	{
		cout << "Java python c++";
	}
};

class java :public base
{
	void comment(void)
	{
		cout << "这是Java";
	}
};

class python :public base
{
	void comment(void)
	{
		cout << "这是python";
	}
};

class c :public base
{
	void comment(void)
	{
		cout << "这是c";
	}
};

int main()
{
	java j;
	python p;
	c cpp;
	j.head();
	j.foot();
	j.left();
	p.head();
	p.foot();
	p.left();
	return 0;
}
