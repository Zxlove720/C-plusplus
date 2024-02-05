#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;


//class people
//{
//public:
//
//	people()
//	{
//		cout << "people的无参构造函数调用" << endl;
//	}
//
//	people(string _NAME,string _SEX,int _MONEY)
//	{
//		cout << "people的有参构造函数函数调用" << endl;
//		name = _NAME;
//		sex = _SEX;
//		money = _MONEY;
//	}
//
//	people(const people& p)
//	{
//		cout << "people的拷贝构造函数调用" << endl;
//		name = p.name;
//		sex = p.sex;
//		money = p.money;
//	}
//
//	~people()
//	{
//		cout << "people的析构函数调用" << endl;
//	}
//
//public:
//	string name;
//protected:
//	string sex;
//private:
//	int money;
//
//public:
//
//	string sexout()
//	{
//		return sex;
//	}
//
//	int moneyout()
//	{
//		return money;
//	}
//};
//
//void test01(void)
//{
//	string name;
//	string sex;
//	int money;
//	cin >> name >> sex >> money;
//	people p1(name, sex, money);
//	people p2(p1);
//	cout << p1.name << " " << p1.sexout() << " " << p1.moneyout() << endl;
//	cout << p2.name << " " << p2.sexout() << " " << p2.moneyout() << endl;
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//class people
//{
//public:
//
//	people()
//	{
//		cout << "people的无参构造函数调用" << endl;
//	}
//
//	people(string _NAME, string _SEX, int _MONEY)
//	{
//		cout << "people的有参构造函数函数调用" << endl;
//		name = _NAME;
//		sex = _SEX;
//		money = _MONEY;
//	}
//
//	people(const people& p)
//	{
//		cout << "people的拷贝构造函数调用" << endl;
//		name = p.name;
//		sex = p.sex;
//		money = p.money;
//	}
//
//	~people()
//	{
//		cout << "people的析构函数调用" << endl;
//	}
//
//public:
//	string name;
//protected:
//	string sex;
//private:
//	int money;
//
//public:
//
//	string sexout()
//	{
//		return sex;
//	}
//
//	int moneyout()
//	{
//		return money;
//	}
//};

/*void test01(void)
{
	string name;
	string sex;
	int money;
	cin >> name >> sex >> money;
	people p1(name, sex, money);
	people p2(p1);
	cout << p1.name << " " << p1.sexout() << " " << p1.moneyout() << endl;
	cout << p2.name << " " << p2.sexout() << " " << p2.moneyout() << endl;

}*/

//通过拷贝构造函数进行函数值传递

//void test02(people p)
//{
//	;
//}
//
//void test01()
//{
//	people p1;
//	test02(p1);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//拷贝构造函数——浅拷贝和深拷贝
//浅拷贝的错误

//class people
//{
//public:
//
//	people()
//	{
//		cout << "people的无参构造函数调用" << endl;
//	}
//
//	people(int m_weight,int m_height)
//	{
//		cout << "people的有参构造函数函数调用" << endl;
//		weight = m_weight;
//		height = new int(m_height);
//	}
//
//	~people()
//	{
//		cout << "people的析构函数调用" << endl;
//	}
//
//public:
//	int weight;
//	int* height;
//};
//
//
//void test01(void)
//{
//	people p1(70, 180);
//	people p2(p1);
//	cout << p1.weight << "  " << *p1.height << endl;//看似每错，但实际上没有释放堆区申请的内存，所以说试一下释放数据——
//	cout << p2.weight << "  " << *p2.height << endl;
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}



//在析构函数中释放从堆区申请的数据程序就会崩溃，是因为每一个对象都释放的是同一块内存区域，所以说多次重复释放，程序崩溃；
//所以说需要自己写拷贝构造函数，帮助每个对象创建的时候都在堆区申请新的空间，每个对象的堆区空间都不同，但其内容相同；

//class people
//{
//public:
//
//	people()
//	{
//		cout << "people的无参构造函数调用" << endl;
//	}
//
//	people(int m_weight, int m_height)
//	{
//		cout << "people的有参构造函数函数调用" << endl;
//		weight = m_weight;
//		height = new int(m_height);
//	}
//
//	//自己写的拷贝构造函数
//	people(const people& p)
//	{
//		weight = p.weight;
//		height = new int(*p.height);
//	}
//
//	~people()
//	{
//		if (height != NULL)
//		{
//			delete height;
//			height = NULL;
//		}
//		cout << "people的析构函数调用" << endl;
//	}
//
//public:
//	int weight;
//	int* height;
//};
//
//
//void test01(void)
//{
//	people p1(70, 180);
//	people p2(p1);
//	cout << p1.weight << "  " << *p1.height << endl;
//	cout << p2.weight << "  " << *p2.height << endl;
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//初始化列表

//class people
//{
//public:
//	people():weight(70),height(180)
//	{
//		;
//	}
//
//	int weight;
//	int height;
//};
//
//int main()
//{
//	people p1;
//	cout << p1.height << p1.weight;
//	return 0;
//}


//静态成员
//静态成员需要类内声明，类外初始化

class people
{
public:
	people():weight(70)
	{
		;
	}

	int weight;
	static int height;
};

int people::height = 180;

int main()
{
	/*people p1;
	cout << p1.height << p1.weight;*/
	cout << people::height << endl;//静态成员不需要创建对象就可以访问
	return 0;
}