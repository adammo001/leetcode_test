#include<iostream>
#include<string>
using namespace std;
//�����Ա
#if 0
//���ж�����һ����̬��Ա����
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class Person
{
public:
	static void func()  //�޷�������ͨ��Ա���������ĸ�����Ķ���
	{
		cout << "��̬��Ա����" << endl;
	}
	static int a ;   //��̬��Ա����  ��������  ���ⶨ��
private:
	static void fund()  //�����޷�����˽�о�̬��Ա����
	{
		cout << "��̬��Ա����" << endl;
	}
};
int Person::a = 100;
void test01()
{
	Person p1;
	p1.func(); // ͨ���������
	Person::func();  //ͨ����������
	p1.a = 1000;
}
void  main()
{
	test01();
	system("pause");
}

#endif