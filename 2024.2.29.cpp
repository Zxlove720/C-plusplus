//C++���������ϰ
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

//��������
class people
{
//˽��Ȩ��
private:
	string name;
	int age;
public:
	int rank;
//���캯��
	people()
	{
		cout << "�����޲ι��캯��";
	}
	people(string name, int age, int rank);

//��Ա����
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

//��������
	~people()
	{
		cout << "������������" << endl;
	}
	
};
people::people(string name, int age, int rank)
{
	cout << "�����вι��캯��" << endl;
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