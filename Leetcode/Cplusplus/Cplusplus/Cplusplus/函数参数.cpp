#include<iostream>
using namespace std;
#if 0
//������Ĭ�ϲ���
//����ʱ������ʾʹ�þ�ʹ��Ĭ�� ������ʼλ�ú��涼�������Ĭ�ϲ���
int  func(int a,int b,int c = 10)
{
	return a + b + c;
}
//�����������������Ĭ�ϲ�������ôʵ�־Ͳ�����Ĭ�ϲ�����
int funcd(int a, int b, int c = 100);
int funcd(int a,int b)
{
	return 0;
}
void main()
{
	cout << "func:" << func(1, 2) << endl;  // �����ˣ�����Ĭ�ϵ�
	cout << "func:" << func(1,2,3) << endl;

	system("pause");
}
#endif