#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

//继承

//继承方式；
//父类的私有权限，子类无法访问，但依然会继承
//用public方式来继承，父类中的public为public，protected为protected
//用protected方式继承，都为protected
//用private方式继承，都为private

//class base
//{
//public:
//	string name;
//protected:
//	string num;
//private:
//	string sex;
//};
//
//class son : public base
//{
//public:
//	int a;
//
//};


//int main()
//{
//	son s1;
//	s1.name = "李四";
//	s1.num = "123";//protected的权限，所以说无法继承
//	s1.sex = "nan";//private的权限，无法继承
//	s1.a = 123;
//	cout << s1.name;
//	return 0;
//}
//
//class base
//{
//public:
//	string name;
//protected:
//	string num;
//private:
//	string sex;
//};
//
//class son : protected base
//{
//public:
//	int a;
//};
//
//int main()
//{
//	son s1;
//	s1.name = "lisi";//用protected方式继承，父类中的public也无法访问
//
//}


//继承中的对象模型

//class base
//{
//public:
//	int name;
//protected:
//	int num;
//private:
//	int sex;
//};
//
//class son : public base
//{
//public:
//	int a;
//
//
//};
//
//int main()
//{
//	cout << sizeof(son);
//	return 0;
//}

//继承中的构造和析构函数的顺序
//class base
//{
//public:
//	int a;
//	int b;
//	base()
//	{
//		cout << "父类的构造" << endl;
//
//	}
//	~base()
//	{
//		cout << "父类的析构" << endl;
//	}
//};
//
//class son :public base
//{
//public:
//	son()
//	{
//		cout << "子类的构造函数"<<endl;
//
//	}
//	~son()
//	{
//		cout << "子类的析构函数"<<endl;
//	}
//};
//
//int main()
//{
//	son s1;
//	return 0;
//}

//父类先构造才能有子类
//子类先析构父类才析构（因为子类是一直在“使用”父类的）

//class base
//{
//public:
//	int a=50;
//	int b=50;
//};
//
//class son : public base
//{
//public:
//	int a;
//	int b;
//
//
//};
//
//
//int main()
//{
//	son s;
//	s.a = 100;
//	s.b = 100;
//	cout << s.a << " " << s.b;
//	cout << s.base::a << " " << s.base::b;
//
//	return 0;
//}

//这种同名以儿子为准，函数同理

//class base
//{
//public:
//	int a = 50;
//	int b = 50;
//	void func()
//	{
//		cout << "这是父类的函数调用";
//	}
//};
//
//class son : public base
//{
//public:
//	int a;
//	int b;
//	void func()
//	{
//		cout << "这是子类的函数调用";
//	}
//};
//
//int main()
//{
//	son s1;
//	s1.func();
//	s1.base::func();
//	return 0;
//}


//class base
//{
//public:
//	static int a;
//	static int b;
//};
//
//int base::a = 50;
//int base::b = 50;
//
//
//class son : public base
//{
//public:
//	static int a;
//	static int b;
//};
//
//int son::a = 100;
//int son::b = 100;
//
//int main()
//{
//
//	son s;
//	cout << s.a << s.b;
//	cout << s.base::a << s.base::b;
//}


//多个继承
//class base
//{
//public:
//	int a;
//
//};
//
//class base2
//{
//public:
//	int b;
//};
//
//class son :public base,public base2
//{
//public:
//	int c;
//};
//
//int main()
//{
//	son s;
//	s.a = 100;
//	s.b = 200;
//	s.c = 300;
//	cout << sizeof(son) << endl;
//	cout << s.a << s.b << s.c;
//}

//菱形继承
class animal
{
public:
	int age;
};

class sheep : virtual public animal
{

};

class tuo : virtual public animal
{

};

class sheeptuo : public sheep, public tuo
{

};

int main()
{
	sheeptuo st;
	st.age = 100;
	cout << st.age;
	return 0;
}