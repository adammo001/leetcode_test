#include<iostream>
using namespace std;
#if 0
int g_a = 10;
int g_b = 100;
const int c_g_a = 10;
const int c_g_b = 10;
void  main01()
{
	// ȫ����
	// ȫ�ֱ�������̬����������

	// ������ͨ�ֲ�����
	int a = 10;
	int b = 100;
	static int s_a = 10;
	static int s_b = 100;
	// ����        �ַ�������      const���ε�ȫ�ֳ���
	cout << "�ַ����ĵ�ַ��" << &("string1") << endl;

	cout << "ȫ�ֱ��� g_a = " << &g_a << endl;
	cout << "ȫ�ֱ��� g_b = " << &g_b << endl;
	cout << "�ֲ����� a = " << &a << endl;
	cout << "�ֲ����� b = " << &b << endl;
	cout << "��̬���� s_a = " << &s_a << endl;
	cout << "��̬���� s_b = " << &s_b << endl;

	cout << "��̬���� c_g_a = " << &c_g_a << endl;
	cout << "��̬���� c_g_b = " << &c_g_b << endl;
	system("pause");
}
#elif 0
//��Ҫ����ջ�ϵĵ�ַ
int *function() // �β�Ҳ����ջ�Ͽ��ٿռ�
{
	int a = 10;
	return &a;
}
void main()
{
	//ջ������Ҫ���ؾֲ������ĵ�ַ
	int * p = function();
	cout << "p = " << *p << endl;
	cout << "p = " << *p << endl;
	system("pause");
}
#elif 0
int *function()
{
	int *p = new int(10);   //����������

	delete p;
	return p;
}
void main()
{
	int * p = function();
	cout << "p = " << *p << endl;
	cout << "p = " << *p << endl;

	system("pause");
}

#endif