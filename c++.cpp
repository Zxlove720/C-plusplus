#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
//int main()
//{
//	///*string a;
//	//cin >> a;
//	//cout << a << endl;
//	//return 0;*/
//	//int a, b;
//	//cin >> a >> b;
//	//cout << a + b << endl;
//	//return 0;
//	/*srand((unsigned int)time(NULL));
//	int r = rand() % 100 + 1;
//	cout << r << endl;*/
//	/*int i = 1;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
//		{
//			cout << "敲桌子" << endl;
//			continue;
//		}
//		cout << i << endl;
//		
//	}*/
//	/*int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			cout << j << "*" << i << "=" << i * j << "\t";
//
//		}
//		cout << endl;
//	}*/
//	
//}

//数组逆置
//int main()
//{
//	int arr[100];
//	int n;
//	cin >> n;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	int left = 0;
//	int right = n - 1;
//	for (i = 0; i < n; i++)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//		if (left == right)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
//}

//数组练习
//int main()
//{
//	int arr[10000];
//	int n;
//	cin >> n;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	//sort
//	int j;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	int left = 0;
//	int right = n - 1;
//	cout <<endl<< "请输入要查找的值-->" << endl;
//	int search;
//	cin >> search;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > search)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < search)//12345
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			cout << "找到了是第" << mid + 1 << "个数" << endl;
//			break;
//		}
//	}
//	if (left > right)
//	{
//		cout << "找不到" << endl;
//	}
//	Sleep(500);
//	for (i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}


//int main()
//{
//	///*char* a="asdasd";
//	//
//	//cout << a << endl;
//	//*/
//	/*char a[20] = "sadasd";
//	cout << a << endl;*/
//	
//}

//int main()
//{
//	/*string a[3] = {"语文","数学","英语"};
//	cout << a << endl;*/
//	cout << "\t张三" << "\t李四" << "\t王五"<<endl;
//	string a[3] = { "语文","数学","英语" };
//	int i = 0;
//	int j = 0;
//	int arr[3][3] = { {100,90,80},{80,90,100},{90,90,90} };
//	for (i = 0; i < 3; i++)
//	{
//		cout << a[i]<<"\t";
//		for (j = 0; j < 3; j++)
//		{
//			cout << arr[i][j]<<"\t";
//		}
//		cout << endl;
//	}
//	return 0;
//}


//分离数字
//倒序
//int main()
//{
//	int n;
//	cin >> n;
//	while (n)
//	{
//		cout << n % 10 << " ";
//		n /= 10;
//	}
//	return 0;
//}

//正序
//int main()
//{
//	int n;
//	cin >> n;
//	int temp=0;
//	while (n)
//	{
//		temp = temp * 10 + (n % 10);
//		n /= 10;
//	}
//	while (temp)
//	{
//		cout << temp % 10 << " ";
//		temp /= 10;
//	}
//	return 0;
//}


//最大公约数，最小公倍数（暴力解法）

//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int i = 0;
//	int temp = a * b;
//	for (i = (a > b ? a : b); i >= 0; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			cout << "最大公约数是" << i << endl;
//			cout << "最小公倍数是" << temp / i << endl;
//			return 0;
//		}
//	}
//	return 0;
//}


//辗转相除法
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int temp = a * b;
//	while (a % b)
//	{
//		int c = a % b;
//		a = b;
//		b = c;
//	}
//	cout << "最大公约数是" << b << endl;
//	cout << "最小公倍数是" << temp / b;
//	return 0;
//}

//int main()
//{
//	string a;
//	int zm, sz, kg, qt;
//	zm = 0;
//	sz = 0;
//	kg = 0;
//	qt = 0;
//	while (1)
//	{
//		a = getchar();
//		if (a == "\n")
//		{
//			break;
//		}
//		if (a >= "a" && a <= "z" || a >= "A" && a <= "Z")
//		{
//			zm++;
//		}
//		else if (a >= "0" && a <= "9")
//		{
//			sz++;
//		}
//		else if (a == " ")
//		{
//			kg++;
//		}
//		else
//			qt++;
//
//	}
//	cout << "zm=" << zm << "sz=" << sz << "kg=" << kg << "qt=" << qt;
//
//
//	return 0;
//}


//int main()
//{
//	int n;
//	cin >> n;
//	int i = 1;
//	int e = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		e *= i;
//		sum += e;
//	}
//	cout << e << endl;
//	cout << sum;
//
//}

//int main()
//{
//	int n;
//	int x;
//	cin >> n >> x;
//	int i = 1;
//	int temp = 0;
//	int sum = 0;
//	for (i = 1; i <= x; i++)
//	{
//		temp = temp * 10 + n;
//		sum += temp;
//	}
//	cout << sum;
//	return 0;
//}

//删除最大值
//int main()
//{
//	int arr[100];
//	int n;
//	cin >> n;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	int max = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > arr[max])
//		{
//			max = i;
//		}
//	}
//	for (i = max; i <= n - 1; i++)
//	{
//		arr[i] = arr[i + 1];
//	}
//	n--;
//	for (i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//
//}

