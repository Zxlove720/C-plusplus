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
//		cout << "people���޲ι��캯������" << endl;
//	}
//
//	people(string _NAME,string _SEX,int _MONEY)
//	{
//		cout << "people���вι��캯����������" << endl;
//		name = _NAME;
//		sex = _SEX;
//		money = _MONEY;
//	}
//
//	people(const people& p)
//	{
//		cout << "people�Ŀ������캯������" << endl;
//		name = p.name;
//		sex = p.sex;
//		money = p.money;
//	}
//
//	~people()
//	{
//		cout << "people��������������" << endl;
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
//		cout << "people���޲ι��캯������" << endl;
//	}
//
//	people(string _NAME, string _SEX, int _MONEY)
//	{
//		cout << "people���вι��캯����������" << endl;
//		name = _NAME;
//		sex = _SEX;
//		money = _MONEY;
//	}
//
//	people(const people& p)
//	{
//		cout << "people�Ŀ������캯������" << endl;
//		name = p.name;
//		sex = p.sex;
//		money = p.money;
//	}
//
//	~people()
//	{
//		cout << "people��������������" << endl;
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

//ͨ���������캯�����к���ֵ����

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


//�������캯������ǳ���������
//ǳ�����Ĵ���

//class people
//{
//public:
//
//	people()
//	{
//		cout << "people���޲ι��캯������" << endl;
//	}
//
//	people(int m_weight,int m_height)
//	{
//		cout << "people���вι��캯����������" << endl;
//		weight = m_weight;
//		height = new int(m_height);
//	}
//
//	~people()
//	{
//		cout << "people��������������" << endl;
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
//	cout << p1.weight << "  " << *p1.height << endl;//����ÿ����ʵ����û���ͷŶ���������ڴ棬����˵��һ���ͷ����ݡ���
//	cout << p2.weight << "  " << *p2.height << endl;
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}



//�������������ͷŴӶ�����������ݳ���ͻ����������Ϊÿһ�������ͷŵ���ͬһ���ڴ���������˵����ظ��ͷţ����������
//����˵��Ҫ�Լ�д�������캯��������ÿ�����󴴽���ʱ���ڶ��������µĿռ䣬ÿ������Ķ����ռ䶼��ͬ������������ͬ��

//class people
//{
//public:
//
//	people()
//	{
//		cout << "people���޲ι��캯������" << endl;
//	}
//
//	people(int m_weight, int m_height)
//	{
//		cout << "people���вι��캯����������" << endl;
//		weight = m_weight;
//		height = new int(m_height);
//	}
//
//	//�Լ�д�Ŀ������캯��
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
//		cout << "people��������������" << endl;
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

//��ʼ���б�

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


//��̬��Ա
//��̬��Ա��Ҫ���������������ʼ��

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
	cout << people::height << endl;//��̬��Ա����Ҫ��������Ϳ��Է���
	return 0;
}