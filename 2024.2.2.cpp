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
//		name = "����";
//		age = 20;
//		car = "benz";
//		money = 9999999;
//	}
//};
//int main()
//{
//	people p1;
//	p1.name = "����";
//	p1.age = 20;
//	p1.car = "benz";
//	p1.money = 9999999;
//	cout << p1.name << "  " << p1.age << "   " << p1.car << "  " << p1.money;
//	return 0;
//}


//����Ȩ��
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
//	p1.name = "����";
//	p1.set_age(18);
//	p1.set_money(99999999);
//	cout << p1.name << "    " << p1.getage() << "    " << p1.getmoney();
//	return 0;
//}


//struct��class������
//structĬ��Ȩ����public;
//classĬ��Ȩ����private


//struct people
//{
//	//Ĭ��Ȩ��__public;
//	int a;
//};
//
//class people2
//{
//	//Ĭ��Ȩ��__private;
//	int a;
//};
//
//
//int main()
//{
//	people p1;
//	people2 p2;
//	p1.a = 100;//��struct�е�a���Խ��г�ʼ�����ɼ���Ȩ����public
//	p2.a = 200;//��class�е�a�����Խ��г�ʼ�����ɼ���Ȩ����private
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
//		cout << "���";
//	}
//	else
//	{
//		cout << "����";
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


//�жϵ��Բ��λ�ù�ϵ
//Բ��

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
////����
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
//	//����Բ�͵�
//	circle c1;
//	point p1;
//	cout << "������Բ�İ뾶��Բ��"<<endl;
//	cin >> c1.r >> c1.x0 >> c1.y0;
//	cout << "������������" << endl;
//	cin >> p1.x >> p1.y;
//	double l = sqrt(pow((c1.x0 - p1.x),2) + pow((c1.y0 - p1.y),2));
//	int ret = check(l, c1.r);
//	if (ret == -1)
//	{
//		cout << "��Բ��";
//	}
//	else if (ret == 0)
//	{
//		cout << "��Բ��";
//	}
//	else
//	{
//		cout << "��Բ��";
//	}
//	return 0;
//}

//���캯������������
//��class�У�����Ҫ�й������������������Լ���д�����������ṩ

//class people
//{
//public:
//	people()
//	{
//		cout << "���캯���ĵ���"<<endl;
//	}
//	int a;
//	~people()
//	{
//		cout << "���������ĵ���";
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



//��������

//int����
//void func(int a)
//{
//	cout << "����int";
//}
//
////float����
//void func(float a)
//{
//	cout << "����float";
//}
//
//int main()
//{
//	func(1.1f);
//	return 0;
//}

//void func(string a)
//{
//	cout << "����char";
//}
//
////float����
//void func(float a)
//{
//	cout << "����float";
//}
//
//int main()
//{
//	func("asdas");
//	return 0;
//}


//˳��ͬ������

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

//����ռλ��


//void func(int a, int)
//{
//	cout << "ռλ�ɹ�";
//}
//
//int main()
//{
//	func(10, 2);
//	return 0;
//}
