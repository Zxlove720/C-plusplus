#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;


////����һ����
//class people
//{
////����Ȩ�޵���
//public:
//	string name;
//
////����Ȩ�޵���
//protected:
//	string age;
//
////ͨ����������ʼ������
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
//		cout << "���������ĵ���";
//	}
//};
//int main()
//{
//	people p1;
//	//ͨ����������ʼ��
//	string name1, age1;
//	cin >> name1 >> age1;
//	p1.set_imformation(name1,age1);
//	
//	//ͨ���������õ��������
//	p1.get_imformation();
//
//	return 0;
//}


//���������������ϰ
//ÿ���඼�����й��캯�������������������д��������ṩ��

//class people
//{
////�Լ�д���캯��
//public:
//	people()
//	{
//		cout << "���캯������"<<endl;
//	}
//
//public:
//	string name;
//
////�Լ�д��������
//	~people()
//	{
//		cout << "������������" << endl;
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


//���캯���ĵ��÷���

//class people
//{
//public:
//	//Ĭ�ϣ��޲ι��캯����;
//	people()
//	{
//		cout << "Ĭ�Ϲ��캯��" << endl;
//	}
//	//�вι��캯��
//	people(int a)
//	{
//		cout << "�вι��캯��" << endl;
//	}
//	//�������캯������������ͬ����������ԣ�
//	people(const people& p1)
//	{
//		cout << "�������캯��" << endl;
//	}
//
//	~people()
//	{
//		cout << "��������" << endl;
//	}
//	
//};
//
//int main()
//{
//	//Ĭ�Ϲ��캯���ĵ���
//	people p1;
//
//	//�вι��캯���ĵ���
//	people p2(10);
//
//	//�������캯���ĵ���
//	people p3(p2);
//
//	return 0;
//}


//class people
//{
//public:
//	//Ĭ�ϣ��޲ι��캯����;
//	people()
//	{
//		cout << "Ĭ�Ϲ��캯��" << endl;
//	}
//	//�вι��캯��
//	people(int a)
//	{
//		cout << "�вι��캯��" << endl;
//		num = a;
//	}
//	//�������캯������������ͬ����������ԣ�
//	people(const people& p1)
//	{
//		num = p1.num;
//		cout << "�������캯��" << endl;
//	}
//
//	~people()
//	{
//		cout << "��������" << endl;
//	}
//	int num;
//};
//
//int main()
//{
//	//Ĭ�Ϲ��캯���ĵ���
//	people p1;
//	cout << p1.num << endl;
//	//�вι��캯���ĵ���
//	int n;
//	cin >> n;
//	people p2(n);
//	cout << p2.num << endl;
//	//�������캯���ĵ���
//	people p3(p2);
//	cout << p3.num << endl;
//	return 0;
//}

//���캯����˳��
//class people
//{
//public:
//	people(int a)
//	{
//		cout << "�вι��캯������" << endl;
//	}
//	~people()
//	{
//		cout << "������������" << endl;
//	}
//
//	int name;
//};
//
//int main()
//{
//	people p1;//����û�к��ʵĹ��캯����
//	//��Ϊ���вι��캯������ʱ���������Դ����޲ι��캯���Ͳ���ʹ���ˣ�
//
//
//	return 0;
//}

//class people
//{
//public:
//	people(const people& p1)
//	{
//		cout << "�������캯������" << endl;
//	}
//	~people()
//	{
//		cout << "������������" << endl;
//	}
//
//	int name;
//};
//
//int main()
//{
//
//	people p1;//������Ϊ���������캯������ʱ���������Դ��Ĺ��캯��������ʹ���ˣ�����Ҫ�ÿ����ķ�ʽ���ú�����
//	people p2(p1);//����Ͳ������ˣ�������Ϊp1����ʧ���ˣ�����˵�������޷�ͨ�����룻
//
//	return 0;
//}

//class people
//{
//public:
//	people(int a)
//	{
//		cout << "�вι��캯������" << endl;
//	}
//	~people()
//	{
//		cout << "������������" << endl;
//	}
//
//	int name;
//};
//
//int main()
//{
//	people p0;
//	people p1(p0);//��Ȼ���������вι���ʱ���������ṩ���޲ι��캯������ʹ�ã���Ĭ�ϵĿ������캯�����ǿ���ʹ�õģ�
//
//
//	return 0;
//}

/*������Ĭ���У��޲ι��캯����Ĭ�Ͽ���������Ĭ����������
����������Ĭ���вι��캯������Ϊ����֪���û���Ҫ�Ĳ�������*/


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