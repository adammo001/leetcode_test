#include<iostream>
#include<string>
using namespace std;
#if 0
/********************************************************
1   ʹ��һ���Ѿ���ʼ����ɵĶ����ʼ����һ������
2   ֵ���ݷ�ʽ������������
3   ֵ��ʽ���ؾֲ�����
*********************************************************/
class Person
{
public:
	Person(){                               //�޲ι��캯��
		cout << "�޲������캯�� " << endl;
	}
	Person( int age){                       // �вι��캯��
		this->age = age;
		cout << "�вι��캯�� " << endl;
	}
	~Person()
	{
		cout << "�����캯�� " << endl;
	}
	Person(const Person &other){             //  �������캯��    ���ԵĿ��� ���ɸı�ԭ����
		if (this == &other)                  //  ��ֹ����ѭ������
			return;
		this->age = other.age;
		cout << "�������캯�� " << endl;
	}
	Person& operator=(const Person &other){  //�������캯��
		cout << "=���캯�� " << endl;
	}
	int age;
};
void test01()
{
	Person p1(20); //�в�������
	Person p2(p1); //��������
}

void do_work(Person p)   //�������� ��ʱ����
{
	
}
void test02()
{
	Person p(10);
	do_work(p);       //2. ������Ϊ�������ݣ��´������
}

Person do_work2()     //��������
{
	Person p2;
	cout << (int*)&p2 << endl;
	return p2;
}
void test03(){

	Person p3 = do_work2();
	cout << (int*)&p3 << endl;
}

void main()
{
	//test01();
	//test02();
	test03();
	system("pause");
}
#endif









