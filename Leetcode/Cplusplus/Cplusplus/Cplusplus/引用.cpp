#include<iostream>
using namespace std;
// ��ֵ   ��ַ  ������
// �����ڶ���ʱ�������ʼ�����Һ������ɸ���
void function1()
{
	int a = 10;
	int &b = a; // int * const b = &a;  bָ���ָ�򲻿ɸ���
	b = 20;
	int &c = b;
	cout << " b = " << b << endl;
	cout << " a = " << a << endl;
	cout << " c = " << c << endl;
}
void main001()
{
	function1();
	
	system("pause");
}