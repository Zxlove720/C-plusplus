#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

//��Ա�����ͳ�Ա�����ֿ��洢

//Ϊ�����ֲ�ͬ�ĳ�Ա��ͬ���ڴ棬����˵��ʹ�ǿյ��࣬Ҳ��ռ��1�ֽ�

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

//��Ա����ռ�õ��ڴ�ռ�

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
//	cout << sizeof(people);// 4 // ������ǿ�������ʲô��Ա����������ṹ��һ�������ڴ����
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
//	cout << sizeof(p1);//����4�����о�̬��Ա��������������̬����������������Ŀռ���
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

//��ǳ����

//ǳ����

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


//���
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


//������÷�
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

//thisָ���ʹ��,//����ĸ�ֵ����Ϊ���Ƴ�ͻ

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

//��thisָ��������Ƴ�ͻ

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


//thisָ����Ϊ����ֵ

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

//�������ͳ�����
//class people
//{
//public:
//	int name;
//
//	void funcname(int a) const
//	{
//		name = a;//��Ա������const���Σ��޷��ı�
//	}
//};

//class people
//{
//public:
//	mutable int name;
//
//	void funcname(int a) const
//	{
//		name = a;//��Ա������const���Σ�����Ϊ����name��mutable���Σ�����Ըı䣻
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
//		name = a;//��Ա������const���Σ��޷��ı�
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
//	p1.func();//һ�����
//	p2.func();//������ֻ�ܵ��ó�����
//	//������mutable���ε����ԣ�����������޸�
//	p2.name = 123;
//	return 0;
//}

//��Ԫ

//ȫ�ֺ�������Ԫ

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
//		name = "����";
//		sex = "��";
//	}
//};
//
//void func(void)
//{
//	people p;
//	cout << p.name << "  " << p.sex;//��Ϊsex��privateȨ���µģ�����˵�޷����ʣ�
//}

//class people
//{
//	friend void func(void);//�ؼ���friend����ʹ������Ϊ����Ԫ
//
//public:
//	string name;
//private:
//	string sex;
//
//public:
//	people()
//	{
//		name = "����";
//		sex = "��";
//	}
//};
//
//void func(void)
//{
//	people p;
//	cout << p.name << "  " << p.sex;//��Ϊfuncȫ�ֺ�����people�����Ԫ������˵һ��Ȩ���µ����ԣ������Է���
//}

//������Ԫ

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
//	name = "����";
//	sex = "��";
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
//	cout << p.name << " " << p.sex;//boy����people�����Ԫ������˵���Է���
//}
//
//int main()
//{
//	boy boys;
//	boys.check();
//	return 0;
//}

