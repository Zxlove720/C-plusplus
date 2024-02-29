//C++面向对象练习
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

//创建人类
class people
{
//私有权限
private:
	string name;
	int age;
public:
	int rank;
//构造函数
	people()
	{
		cout << "这是无参构造函数";
	}
	people(string name, int age, int rank);

//成员函数
	string nameback(void)
	{
		return name;
	}
	int ageback(void)
	{
		return age;
	}
	int rankback(void)
	{
		return rank;
	}

//析构函数
	~people()
	{
		cout << "这是析构函数" << endl;
	}
	
};
people::people(string name, int age, int rank)
{
	cout << "这是有参构造函数" << endl;
	this->name = name;
	this->age = age;
	this->rank = rank;
}
class son : public people
{

public:
	int number;
	
};
void test(void)
{
	string name;
	int age;
	int rank;
	cin >> name >> age >> rank;
	people p1(name, age, rank);
	cout << p1.nameback() << " " << p1.ageback() << " " << p1.rankback() << endl;
	son s1;

	
	cout << s1.rank << s1.number << s1.nameback() << s1.ageback();
}

int main()
{
	test();
	return 0;
}