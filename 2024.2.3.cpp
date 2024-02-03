#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;


////创建一个类
//class people
//{
////公开权限的类
//public:
//	string name;
//
////保护权限的类
//protected:
//	string age;
//
////通过函数来初始化内容
//public:
//	void set_imformation(string name1,string age1)
//	{
//		name = name1;
//		age = age1;
//	}
//
//	void get_imformation()
//	{
//		cout << name << "   " << age << endl;
//	}
//	~people()
//	{
//		cout << "析构函数的调用";
//	}
//};
//int main()
//{
//	people p1;
//	//通过函数来初始化
//	string name1, age1;
//	cin >> name1 >> age1;
//	p1.set_imformation(name1,age1);
//	
//	//通过函数来得到类的内容
//	p1.get_imformation();
//
//	return 0;
//}


//构造和析构函数练习
//每个类都必须有构造函数和析构函数（如果不写则编译器提供）

//class people
//{
////自己写构造函数
//public:
//	people()
//	{
//		cout << "构造函数调用"<<endl;
//	}
//
//public:
//	string name;
//
////自己写析构函数
//	~people()
//	{
//		cout << "析构函数调用" << endl;
//	}
//};
//
//
//int main()
//{
//	people p1;
//
//	return 0;
//}


//构造函数的调用方法

//class people
//{
//public:
//	//默认（无参构造函数）;
//	people()
//	{
//		cout << "默认构造函数" << endl;
//	}
//	//有参构造函数
//	people(int a)
//	{
//		cout << "有参构造函数" << endl;
//	}
//	//拷贝构造函数（拷贝其它同类的所有属性）
//	people(const people& p1)
//	{
//		cout << "拷贝构造函数" << endl;
//	}
//
//	~people()
//	{
//		cout << "析构函数" << endl;
//	}
//	
//};
//
//int main()
//{
//	//默认构造函数的调用
//	people p1;
//
//	//有参构造函数的调用
//	people p2(10);
//
//	//拷贝构造函数的调用
//	people p3(p2);
//
//	return 0;
//}


//class people
//{
//public:
//	//默认（无参构造函数）;
//	people()
//	{
//		cout << "默认构造函数" << endl;
//	}
//	//有参构造函数
//	people(int a)
//	{
//		cout << "有参构造函数" << endl;
//		num = a;
//	}
//	//拷贝构造函数（拷贝其它同类的所有属性）
//	people(const people& p1)
//	{
//		num = p1.num;
//		cout << "拷贝构造函数" << endl;
//	}
//
//	~people()
//	{
//		cout << "析构函数" << endl;
//	}
//	int num;
//};
//
//int main()
//{
//	//默认构造函数的调用
//	people p1;
//	cout << p1.num << endl;
//	//有参构造函数的调用
//	int n;
//	cin >> n;
//	people p2(n);
//	cout << p2.num << endl;
//	//拷贝构造函数的调用
//	people p3(p2);
//	cout << p3.num << endl;
//	return 0;
//}

//构造函数的顺序
//class people
//{
//public:
//	people(int a)
//	{
//		cout << "有参构造函数调用" << endl;
//	}
//	~people()
//	{
//		cout << "析构函数调用" << endl;
//	}
//
//	int name;
//};
//
//int main()
//{
//	people p1;//报错：没有合适的构造函数用
//	//因为当有参构造函数存在时，编译器自带的无参构造函数就不能使用了；
//
//
//	return 0;
//}

//class people
//{
//public:
//	people(const people& p1)
//	{
//		cout << "拷贝构造函数调用" << endl;
//	}
//	~people()
//	{
//		cout << "析构函数调用" << endl;
//	}
//
//	int name;
//};
//
//int main()
//{
//
//	people p1;//报错，因为当拷贝构造函数存在时，编译器自带的构造函数都不能使用了，必须要用拷贝的方式调用函数；
//	people p2(p1);//这里就不报错了，但是因为p1构造失败了，所以说程序还是无法通过编译；
//
//	return 0;
//}

//class people
//{
//public:
//	people(int a)
//	{
//		cout << "有参构造函数调用" << endl;
//	}
//	~people()
//	{
//		cout << "析构函数调用" << endl;
//	}
//
//	int name;
//};
//
//int main()
//{
//	people p0;
//	people p1(p0);//虽然当类中有有参构造时，编译器提供的无参构造函数不能使用，但默认的拷贝构造函数还是可以使用的；
//
//
//	return 0;
//}

/*编译器默认有：无参构造函数，默认拷贝函数，默认析构函数
编译器不会默认有参构造函数，因为它不知道用户需要的参数类型*/


//void func()
//{
//	int* p = new int[40];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		cin >> *(p + i);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		cout << *(p + i) << " ";
//	}
//
//	delete[]p;
//}
//
//int main()
//{
//	func();
//	return 0;
//}