#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

//�̳�

//�̳з�ʽ��
//�����˽��Ȩ�ޣ������޷����ʣ�����Ȼ��̳�
//��public��ʽ���̳У������е�publicΪpublic��protectedΪprotected
//��protected��ʽ�̳У���Ϊprotected
//��private��ʽ�̳У���Ϊprivate

//class base
//{
//public:
//	string name;
//protected:
//	string num;
//private:
//	string sex;
//};
//
//class son : public base
//{
//public:
//	int a;
//
//};


//int main()
//{
//	son s1;
//	s1.name = "����";
//	s1.num = "123";//protected��Ȩ�ޣ�����˵�޷��̳�
//	s1.sex = "nan";//private��Ȩ�ޣ��޷��̳�
//	s1.a = 123;
//	cout << s1.name;
//	return 0;
//}
//
//class base
//{
//public:
//	string name;
//protected:
//	string num;
//private:
//	string sex;
//};
//
//class son : protected base
//{
//public:
//	int a;
//};
//
//int main()
//{
//	son s1;
//	s1.name = "lisi";//��protected��ʽ�̳У������е�publicҲ�޷�����
//
//}


//�̳��еĶ���ģ��

//class base
//{
//public:
//	int name;
//protected:
//	int num;
//private:
//	int sex;
//};
//
//class son : public base
//{
//public:
//	int a;
//
//
//};
//
//int main()
//{
//	cout << sizeof(son);
//	return 0;
//}

//�̳��еĹ��������������˳��
//class base
//{
//public:
//	int a;
//	int b;
//	base()
//	{
//		cout << "����Ĺ���" << endl;
//
//	}
//	~base()
//	{
//		cout << "���������" << endl;
//	}
//};
//
//class son :public base
//{
//public:
//	son()
//	{
//		cout << "����Ĺ��캯��"<<endl;
//
//	}
//	~son()
//	{
//		cout << "�������������"<<endl;
//	}
//};
//
//int main()
//{
//	son s1;
//	return 0;
//}

//�����ȹ������������
//�����������������������Ϊ������һֱ�ڡ�ʹ�á�����ģ�

//class base
//{
//public:
//	int a=50;
//	int b=50;
//};
//
//class son : public base
//{
//public:
//	int a;
//	int b;
//
//
//};
//
//
//int main()
//{
//	son s;
//	s.a = 100;
//	s.b = 100;
//	cout << s.a << " " << s.b;
//	cout << s.base::a << " " << s.base::b;
//
//	return 0;
//}

//����ͬ���Զ���Ϊ׼������ͬ��

//class base
//{
//public:
//	int a = 50;
//	int b = 50;
//	void func()
//	{
//		cout << "���Ǹ���ĺ�������";
//	}
//};
//
//class son : public base
//{
//public:
//	int a;
//	int b;
//	void func()
//	{
//		cout << "��������ĺ�������";
//	}
//};
//
//int main()
//{
//	son s1;
//	s1.func();
//	s1.base::func();
//	return 0;
//}


//class base
//{
//public:
//	static int a;
//	static int b;
//};
//
//int base::a = 50;
//int base::b = 50;
//
//
//class son : public base
//{
//public:
//	static int a;
//	static int b;
//};
//
//int son::a = 100;
//int son::b = 100;
//
//int main()
//{
//
//	son s;
//	cout << s.a << s.b;
//	cout << s.base::a << s.base::b;
//}


//����̳�
//class base
//{
//public:
//	int a;
//
//};
//
//class base2
//{
//public:
//	int b;
//};
//
//class son :public base,public base2
//{
//public:
//	int c;
//};
//
//int main()
//{
//	son s;
//	s.a = 100;
//	s.b = 200;
//	s.c = 300;
//	cout << sizeof(son) << endl;
//	cout << s.a << s.b << s.c;
//}

//���μ̳�
class animal
{
public:
	int age;
};

class sheep : virtual public animal
{

};

class tuo : virtual public animal
{

};

class sheeptuo : public sheep, public tuo
{

};

int main()
{
	sheeptuo st;
	st.age = 100;
	cout << st.age;
	return 0;
}