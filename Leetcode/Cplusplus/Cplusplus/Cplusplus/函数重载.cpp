#include<iostream>
using namespace std;
#if 0
// �������� ����������ͬ�������������Ͳ�ͬ���߸�������˳��ͬ
// ͦ�ߴ���ĸ�����
void func(int a, int b, int  c)
{
	cout << "func:a+b+c" << endl;
}
void func(int a,int b)
{
	cout <<"func:a+b" << endl;
}
//1.������Ϊ������������
void funcd(int& a )  //�ɶ���д������
{
	cout << "funcd��int& a " << endl;
}
void funcd(const int& a)// ����ֻ��
{
	cout << "funcd��const int& a " << endl;
}
//2.��������������������  ����Ĭ�ϲ��������뺯������
void funce(int a, int b = 100)
{
	cout << "funce�� " << endl;
}
void funce(int a)
{
	cout << "funce�� " << endl;
}
void  main()
{
	//funce(10);
	func(1,2,3);
	func(1,2);
	int a = 10;
	//int &c = 10;//���ñ�������һ���Ϸ��ĵ�ַ���ѻ�ջ 10�ڳ�����
	//cont int &c = 10;//������м����
	const int b = 100;
	funcd(a);
	funcd(b);
	system("pause");
}
#endif