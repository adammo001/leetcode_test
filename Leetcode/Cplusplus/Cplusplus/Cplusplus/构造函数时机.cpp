#include<iostream>
using namespace std;
#if 0
//Ĭ�Ϲ��캯��   �޲���
//��������       
//�������캯��   ָ����
class Person
{
public:
	Person(){                               //�޲ι��캯��
		cout << "�޲������캯�� " << endl;
	}
	Person(int age){                       // �вι��캯��
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
		cout << " =���캯�� " << endl;
	}
	int age;
};
void test01()
{
	Person p;
	p.age = 100;
	Person p2(p);
	cout << "p2�����䣺" << p2.age << endl;
}
void main()
{
	test01();
	system("pause");
}
#endif