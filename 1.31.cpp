#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//��ϰ����
//int main()
//{
//	int a = 10;
//	int& b = a;
//	b = 20;
//	cout<<a<<endl;
//
//
//	return 0;
//}

//ͨ�����õķ�ʽ������������ֵ

//void func(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	func(a, b);
//	cout << a << "  " << b;
//
//
//	return 0;
//}


//������������


//int& func(void)
//{
//	static int a = 10;
//	return a;
//}
//
//int main()
//{
//	int& b = func();
//	cout << b << endl;
//	cout << b << endl;
//	func() = 20;
//	cout << b << endl;
//	cout << b << endl;
//
//	return 0;
//}

//��������

//void func(const int& a)
//{
//	//a = 100;
//	cout << a << endl;
//}
//
//int main()
//{
//	int a = 10;
//	func(a);
//	return 0;
//}


//������Ĭ�ϲ���
//

//int func(int a, int b, int c)
//{
//
//
//	return a + b + c;
//}
//
//int main()
//{
//	int sum = func(10,20,30);
//	cout << sum << " " << endl;
//	return 0;
//}

//���ϴ�����һ���򵥵ġ���ȷ�Ĵ���

//int func(int a, int b, int c)
//{
//
//
//	return a + b + c;
//}
//
//int main()
//{
//	int sum = func(10, 20);//���������Ǵ���Ĵ��룬��Ϊ���ݸ������Ĳ���̫�٣�����˵�޷�ͨ�����룻
//	cout << sum << " " << endl;
//	return 0;
//}



//������������ȷ�Ĵ��룬��Ȼ���ݸ������Ĳ�����Ȼ���������Ǻ�����������Ĭ�ϲ���
//int func(int a, int b, int c=30)//������Ĭ�ϲ�����c=30��
//{
//	return a + b + c;
//}
//
//int main()
//{
//	int sum = func(10, 20);
//	cout << sum << " " << endl;
//	return 0;
//}


//ע�⣺������Ĭ�ϲ�����һ�γ���ʱ���Ժ��ÿһ����������ҪĬ�ϲ�������Ȼ�ᱨ��
//int func(int a, int b=20, int c=30)//�൱�������bӵ��Ĭ�ϲ�������������ж���ҪĬ�ϲ�����c��d��e��������
//{
//	return a + b + c;
//}
//
//int main()
//{
//	int sum = func(10, 20, 30);
//	cout << sum << " " << endl;
//	return 0;
//}


//���������Ĭ�ϲ��������ǵ��ú���ʱ�ִ����˲������Դ��ݵĲ���Ϊ׼��
//int func(int a = 10, int b = 20, int c = 30)//�������Ĭ�ϲ����������᷵��60��
//{
//	return a + b + c;
//}
//
//int main()
//{
//	int sum = func(50, 50, 50);//������3��50��
//	cout << sum << " " << endl;//ʵ���Ϸ��ص��Ǵ��ݵĲ���������˵������150��
//	return 0;
//}




//������ռλ����

//����һ��û���﷨����Ĵ��룬�βκ�ʵ�����Ӧ�����������ʾ��ʾ�������óɹ���

//void func(int a)
//{
//	cout << "this is func";
//}
//
//int main()
//{
//	func(10);
//	return 0;
//}


//����Ǵ���Ĵ����ˣ�������̫��Ĳ����������޷�����
//void func(int a)
//{
//	cout << "this is func";
//}
//
//int main()
//{
//	func(10,20);
//	return 0;
//}


//����ôд��������ȷ�Ĵ����ˣ�����һ��ռλ�������ղ���
//void func(int a, int)
//{
//	cout << "this is func";
//}
//
//int main()
//{
//	func(10, 20);
//	return 0;
//}

//��������
//�������ص�ʵ��
//1.��ͬһ��������
//2.����������ͬ
//3.�����������Ͳ�ͬ��������ͬ��˳��ͬ
//void func(int a, int b)
//{
//	cout << "this is func";
//}
//
//void func(double a, int b)
//{
//	cout << "this is func!!!!!";
//}
//
//int main()
//{
//	func(10, 20);
//
//
//	return 0;
//}

//ע���������������ò��ͺ���Ĭ�ϲ���һ�����
//�ٸ�����

//void func(int a, int b = 10)
//{
//	cout << "ok";
//}
//
//void func(int a)
//{
//	cout << "no";
//}
//
//int main()
//{
//	func(10);
//
//	return 0;
//}
//���������������Ե��ã�����˵����Ĭ��ֵ�ĺ�����ñ�ͺ�������һ�����



//��Ͷ��� ��װ ���� ��Ϊ
//class student
//{
//public:
//	int num;
//	char name[10];
//	char sex[5];
//};
//
//int main()
//{
//	student s1;
//	cin >> s1.num;
//	cin >> s1.name;
//	cin >> s1.sex;
//	cout << s1.num << "  " << s1.name << "  " << s1.sex;
//	return 0;
//}


//��װ����Ϊ
const double pai = 3.14;

class circle
{
public:
	int r;
	double c()//���ﲻ���в���
	{
		return 2 * pai * r;
	}
};

int main()
{
	circle c1;
	cin >> c1.r;
	cout << c1.c();//
}