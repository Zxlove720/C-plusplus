#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//int* fun(void)
//{
//	int* p = new int(10);
//
//	return p;
//}
//int main()
//{
//	int a = 10;
//	int* p = fun();
//	cout << a << endl;
//	cout << *p << endl;
//	cout << (int) & a << endl;
//	cout << (int) & p << endl;
//
//
//	return 0;
//}

//int* fun(void)
//{
//	int* p = new int(10);
//	return p;
//}
//
//void test(void)
//{
//	int* p = fun();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	delete p;
//	cout << *p << endl;
//
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}

//int* fun(void)
//{
//	int* p = new int[10];
//	return p;
//}
//
//void test(void)
//{
//	int* p = fun();
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		cin >> p[i];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		cout << p[i] << " ";
//	}
//	delete[] p;
//	for (i = 0; i < 10; i++)
//	{
//		cout << p[i] << " ";
//	}
//}
//int main()
//{
//	test();
//
//
//	return 0;
//}

//C++������
//int main()
//{
//	int a = 10;
//	int& b = a;
//	b = 20;
//	cout << a << endl;
//	printf("%d", a);
//	a = 30;
//	printf("\n%d", b);
//	return 0;
//}


//�����Ĵ�ַ���ý����������ֵ�ֵ
//void swap(int* a, int* b)
//{
//	int temp = *b;
//	*b = *a;
//	*a = temp;
//}
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	swap(&a, &b);
//	cout << a << "   " << b << endl;
//	system("pause");
//	return 0;
//}

//�����޸��������ֵ�ֵ
//void swap(int& a, int& b)
//{
//	int temp = b;
//	b = a;
//	a = temp;
//
//}
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	swap(a, b);
//	cout << a << "   " << b << endl;
//	return 0;
//}
//���õ�Ч���ʹ�ַ����Ч��һ���������������﷨���ӵļ�飨û���õ�ָ�룩��


//������������

/*int& fun(void)
{
	int a = 10;
	return a;
}

//����д���Ǵ���ģ����ܷ��ؾֲ�������ջ���ڴ��ͷ��ˣ�����ʱ�����ĵ�ַ

int main()
{
	int& b = fun();
	cout << b << endl;

	return 0;
}*/

//int& fun(void)
//{
//	static int a = 10;
//	return a;
//}
//
//int main()
//{
//	int& b = fun();
//	cout << b << endl;
//	cout << b << endl;
//	cout << b << endl;
//	cout << b << endl;
//
//
//	return 0;
//}
//Ϊ�˱��ⷵ�ؾֲ�����������ʱ��������static�ؼ������������Σ�

//int& fun(void)
//{
//	static int a = 100;
//	return a;
//}
//
//int main()
//{
//	int& b = fun();
//	cout << b << endl;
//	cout << b << endl;
//	cout << b << endl;
//	cout << b << endl;
//	//����������Ϊ��ֵ
//	fun() = 200;
//	cout << b << endl;
//	cout << b << endl;
//
//	return 0;
//}


//int& fun(void)
//{
//	int* p = new int(10);
//	return *p;
//}
//
//int main()
//{
//	int& b = fun();
//	cout << b << endl;
//	cout << b << endl;
//	cout << b << endl;
//	fun() = 100;
//	cout << b << endl;
//	cout << b << endl;
//	cout << b << endl;
//
//
//	return 0;
//}
//��new�ڶ�����������Ŀռ��������Ϊ��ֵ�޸�


//int main()
//{
//	int a = 10;
//	int& b = a;
//	b = 20;
//	cout << a << endl;
//
//	return 0;
//}

//int& fun(const int& a)
//{
//	a = 100;
//	//��Ϊ��const���Σ�����˵�޷��޸�
//}
////Ϊ�˷�ֹһЩ���������ʱ��Ҫʹ��const������
//int main()
//{
//	int a = 10;
//	fun(a);
//	return 0;
//}


//ͨ�����õķ�ʽ����ֵ���޸ġ�������
//void fun(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	fun(a,b);
//	cout << a << "  " << b;
//	return 0;
//}

//���õı���
//int main()
//{
//	int a = 10;
//	int* b = &a;
//	*b = 20;
//	cout << a << endl;
//	cout << *b;
//
//	return 0;
//}

int main()
{
	int* p = new int(10);
	cout << p << endl;
	cout << *p << endl;

	return 0;
}