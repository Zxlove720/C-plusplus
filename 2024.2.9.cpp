#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

//成员变量和成员函数分开存储

//为了区分不同的成员不同的内存，所以说即使是空的类，也会占用1字节

//class people
//{
//public:
//
//
//};
//
//int main()
//{
//	people p;
//	cout << sizeof(p);//1
//
//	return 0;
//}

//成员变量占用的内存空间

//class people
//{
//public:
//	int name;
//	double sex;
//};
//
//void test01(void)
//{
//	people p1;
//	cout << sizeof(people);// 4 // 这里就是看类中有什么成员变量，不像结构体一样考虑内存对齐
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//int main()
//{
//	cout << sizeof(double);
//	return 0;
//}

//class people
//{
//public:
//	int a;
//	void func()
//	{
//		;
//	}
//	static int b;
//	static void func2()
//	{
//		;
//	}
//};
//
//int main()
//{
//	people p1;
//	cout << sizeof(p1);//还是4，类中静态成员变量、函数、静态函数都不算是在类的空间内
//
//	return 0;
//}

//class people
//{
//public:
//	int name;
//	people(int a)
//	{
//		name = a;
//	}
//	static int num;
//};
//
//int people::num = 40;
//
//int main()
//{
//	people p1(60);
//	cout << p1.num << " " << p1.name;
//	return 0;
//}1


//class people
//{
//public:
//	static string name;
//	static string sex;
//};
//
//string people::name = "zxl";
//string people::sex = "nv";
//
//int main()
//{
//	people p1;
//	cout << p1.name <<"  " << p1.sex;
//	return 0;
//}

//深浅拷贝

//浅拷贝

//class people
//{
//public:
//	people():name(123)
//	{
//		;
//	}
//	people(const people& p)
//	{
//		name = p.name;
//		sex = p.sex;
//	}
//	int name;
//	int sex;
//};
//
//
//int main()
//{
//	people p1;
//	p1.sex = 1;
//	people p2(p1);
//	cout << p1.name << " " << p1.sex << endl;
//	cout << p2.name << " " << p2.sex << endl;
//
//	return 0;
//}


//深拷贝
//class people
//{
//public:
//	people(int b) :name(123)
//	{
//		sex = new int(b);
//	}
//	people(const people& p)
//	{
//		name = p.name;
//		sex = p.sex;
//	}
//
//	~people()
//	{
//		if (sex != null)
//		{
//			delete sex;
//			sex = null;
//		}
//
//	}
//	int name;
//	int* sex;
//};
//
//
//int main()
//{
//	people p1(2);
//	people p2(p1);
//	cout << p1.name << " " << *p1.sex << endl;
//	cout << p2.name << " " << *p2.sex << endl;
//
//	return 0;
//}


//深拷贝的用法
//class people
//{
//public:
//	people(int b) :name(123)
//	{
//		sex = new int(b);
//	}
//	people(const people& p)
//	{
//		name = p.name;
//		sex = new int(*p.sex);
//	}
//
//	~people()
//	{
//		if (sex != NULL)
//		{
//			delete sex;
//			sex = NULL;
//		}
//
//	}
//	int name;
//	int* sex;
//};
//
//
//int main()
//{
//	people p1(2);
//	people p2(p1);
//	cout << p1.name << " " << *p1.sex << endl;
//	cout << p2.name << " " << *p2.sex << endl;
//
//	return 0;
//}

//this指针的使用,//错误的赋值，因为名称冲突

//class people
//{
//public:
//	int age;
//	people(int age)
//	{
//		age = age;
//	}
//};
//
//
//int main()
//{
//	people p(20);
//	cout << p.age;
//	return 0;
//}

//用this指针避免名称冲突

//class people
//{
//public:
//	int age;
//	people(int age)
//	{
//		this->age = age;
//	}
//};
//
//
//int main()
//{
//	people p(20);
//	cout << p.age;
//	return 0;
//}


//this指针作为返回值

//class people
//{
//public:
//	int age;
//	people(int age)
//	{
//		this->age = age;
//	}
//
//	people& ageadd(people p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//};
//
//
//int main()
//{
//	people p(20);
//	people p1(10);
//	p1.ageadd(p).ageadd(p).ageadd(p);
//	cout << p1.age;
//	return 0;
//}

//常函数和常对象
//class people
//{
//public:
//	int name;
//
//	void funcname(int a) const
//	{
//		name = a;//成员函数用const修饰，无法改变
//	}
//};

//class people
//{
//public:
//	mutable int name;
//
//	void funcname(int a) const
//	{
//		name = a;//成员函数用const修饰，但因为变量name用mutable修饰，则可以改变；
//	}
//};
//
//int main()
//{
//	people p;
//	p.funcname(123);
//	cout << p.name;
//	return 0;
//}

//class people
//{
//public:
//	mutable int name;
//	int sex;
//	void funcname(int a) const
//	{
//		name = a;//成员函数用const修饰，无法改变
//	}
//
//	void func(void)
//	{
//		sex = 2;
//	}
//};
//
//int main()
//{
//	people p1;
//	const people p2;
//	p1.func();//一般对象
//	p2.func();//常对象只能调用常函数
//	//但是用mutable修饰的属性，常对象可以修改
//	p2.name = 123;
//	return 0;
//}

//友元

//全局函数作友元

//class people
//{
//public:
//	string name;
//private:
//	string sex;
//
//public:
//	people()
//	{
//		name = "张三";
//		sex = "男";
//	}
//};
//
//void func(void)
//{
//	people p;
//	cout << p.name << "  " << p.sex;//因为sex是private权限下的，所以说无法访问；
//}

//class people
//{
//	friend void func(void);//关键字friend可以使函数成为其友元
//
//public:
//	string name;
//private:
//	string sex;
//
//public:
//	people()
//	{
//		name = "张三";
//		sex = "男";
//	}
//};
//
//void func(void)
//{
//	people p;
//	cout << p.name << "  " << p.sex;//因为func全局函数是people类的友元，所以说一切权限下的属性，都可以访问
//}

//类作友元

//class people
//{
//	friend class boy;
//
//public:
//	string name;
//private:
//	string sex;
//
//public:
//	people();
//
//};
//
//people::people()
//{
//	name = "张三";
//	sex = "男";
//}
//
//class boy
//{
//public:
//	void check();
//
//};
//
//void boy::check()
//{
//	people p;
//	cout << p.name << " " << p.sex;//boy类是people类的友元，所以说可以访问
//}
//
//int main()
//{
//	boy boys;
//	boys.check();
//	return 0;
//}

