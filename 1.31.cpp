#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//复习引用
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

//通过引用的方式调换两个数的值

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


//函数返回引用


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

//常量引用

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


//函数的默认参数
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

//以上代码是一个简单的、正确的代码

//int func(int a, int b, int c)
//{
//
//
//	return a + b + c;
//}
//
//int main()
//{
//	int sum = func(10, 20);//这个代码就是错误的代码，因为传递给函数的参数太少，所以说无法通过编译；
//	cout << sum << " " << endl;
//	return 0;
//}



//这个代码就是正确的代码，虽然传递给函数的参数仍然不够，但是函数本来就有默认参数
//int func(int a, int b, int c=30)//函数的默认参数，c=30；
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


//注意：当函数默认参数第一次出现时，以后的每一个变量都需要默认参数，不然会报错
//int func(int a, int b=20, int c=30)//相当于如果当b拥有默认参数，后面的所有都需要默认参数（c，d，e……）；
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


//如果函数有默认参数，但是调用函数时又传递了参数，以传递的参数为准；
//int func(int a = 10, int b = 20, int c = 30)//如果按照默认参数，函数会返回60；
//{
//	return a + b + c;
//}
//
//int main()
//{
//	int sum = func(50, 50, 50);//传递了3个50；
//	cout << sum << " " << endl;//实际上返回的是传递的参数，所以说返回了150；
//	return 0;
//}




//函数的占位参数

//这是一个没有语法错误的代码，形参和实参相对应，并且输出提示表示函数调用成功；

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


//这就是错误的代码了，传递了太多的参数，函数无法接收
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


//当这么写，就是正确的代码了，用了一个占位符来接收参数
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

//函数重载
//函数重载的实现
//1.在同一个作用域
//2.函数名字相同
//3.函数参数类型不同、个数不同、顺序不同
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

//注意事项，函数重载最好不和函数默认参数一起出现
//举个例子

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
//这两个函数都可以调用，所以说带有默认值的函数最好别和函数重载一起出现



//类和对象 封装 属性 行为
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


//封装的行为
const double pai = 3.14;

class circle
{
public:
	int r;
	double c()//这里不能有参数
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