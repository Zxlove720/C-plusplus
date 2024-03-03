#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;


//面向对象练习

class Student
{
public:
	string name;
	string gander;
	string number;
	static int a;
	string getid(void)
	{
		return id;
	}
private:
	string id;
public:
	Student()
	{
		cout << "这是学生的无参构造函数" << endl;
	}
	Student(string name, string gander, string number, string id)
	{
		cout << "这是学生的有参构造函数" << endl;
		this->name = name;
		this->gander = gander;
		this->number = number;
		this->id = id;
	}
	Student(Student* s1)
	{
		this->name = s1->name;
		this->gander = s1->gander;
		this->number = s1->number;
		this->id = s1->id;
	}
	~Student()
	{
		cout << "这是学生的析构函数" << endl;
	}

};

int Student::a = 123;

void test01(void)
{
	cout << "请输入学生的姓名、性别、学号、身份证-->" << endl;
	string name, gander, number, id;
	cin >> name >> gander >> number >> id;
	Student s1(name, gander, number, id);
	cout << s1.name << " " << s1.gander << " " << s1.number << " " << s1.getid() << " " << s1.a << endl;
	Student s2(s1);
	cout << s2.name << " " << s2.gander << " " << s2.number << " " << s2.getid() << " " << s2.a << endl;
}

//友元练习




//class Room
//{
//	friend void test02(void);
//	friend class Friend;
//	friend void Friend::func();
//		
//
//public:
//	void Sittingroom()
//	{
//		cout << "正在访问Sittingroom" << endl;
//	}
//private:
//	void Bedroom()
//	{
//		cout << "正在访问Bedroom" << endl;
//	}
//};
////全局函数作友元
//void test02(void)
//{
//	Room r1;
//	r1.Sittingroom();
//	r1.Bedroom();
//}
//
////友元类
//class Friend
//{
//public:
//	void func()
//	{
//		Room r1;
//		r1.Bedroom();
//	}
//};
//
//void test03(void)
//{
//	Friend f1;
//	f1.func();
//}



//继承练习
class Father
{
public:
	string money;
};

class Son :public Father
{
public:
	string name;
	string id;
	string age;
};

void test04()
{
	string money;
	cin >> money;
	Father f1;
	f1.money = money;
	Son s1;
	s1.money = money;
	cout << s1.money;
}
int main()
{
	test04();
	return 0;
}