#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

//int main()
//{
//	cout << "love lin" << endl;
//	int a;
//	int b;
//	scanf("%d%d", &a, &b);
//	cout << "" << a + b;
//	return 0;
//}

//#define day 7
//int main()
//{
//	/*int i = 7;
//	cout << "һ����" << i << "��" << endl;
//	printf("%d\n", day);
//	cout << "һ����" << day << "��" << endl;*/
//	cout << "int:" << sizeof(int) << endl;
//	cout << "short:" << sizeof(short) << endl;
//	cout << "long:" << sizeof(long) << endl;
//	cout << "long long:" << sizeof(long long) << endl;
//	cout << "cahr:" << sizeof(char) << endl;
//	cout << "float:" << sizeof(float) << endl;
//	cout << "double:" << sizeof(double) << endl;
//	char a = '\n';
//	cout << (int)a << endl;
//	return 0;
//}


#include <iostream>
using namespace std;

int main() {

    double weight;
    double height;
    cin >> weight;
    cin >> height;
    // write your code here......
    double BMI = weight / (height * height);
    if (BMI < 18.5)
    {
        cout << "����";
    }
    else if (BMI > 24.9)
    {
        cout << "ƫ��";
    }
    else {
        cout << "����";
    }
    return 0;
}