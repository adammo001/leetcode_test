#include<iostream>
#include<string>
#if 0
using namespace std;
// ���캯��  �в��� �޲���  
// ��ͨ���캯��   �������캯��
// ��ʾ����  ��ʽ����
class Person
{
public:
	Person(){                     //�޲ι��캯��
		cout << "�޲������캯�� " << endl;
	}
	Person(string name,int age){  // �вι��캯��
		this->name = name;
		this->age = age;
		cout << "�вι��캯�� "<< endl;
	}
	~Person()
	{
		cout << "�����캯�� " << endl;
	}
	Person(const Person &other){             //�������캯��    ���ԵĿ��� ���ɸı�ԭ����
		if (this == &other) //��ֹ����ѭ������
			return;
		this->name = other.name;
		this->age = other.age;
		cout << "�������캯�� " << endl;
	}
	Person& operator=(const Person &other){  //�������캯��
		cout << "=���캯�� " << endl;
	}
	string name;
	int age;

};
//ע�⣺  �ڵ���Ĭ�Ϲ��첻Ҫ��дС����
void test01()
{
	//1.���ŷ�
	// Person p1();   ����������Ϊ����Ǻ�������
	// void func();
	Person p1;
	Person p2("alpha", 100);
	Person p3(p2);

	Person p4 = Person("spider", 100); //�ұ����������������ִ�������������������µ�����p4�����ϻᱻ�ͷŵ�
	//Person(p3); ��Ҫ�ÿ������캯����ʼ����������
	//2.��ʾ����
	
	//3.��ʽת��   ������Ե�����������������������
	//Person p5 = 10;
}
void main()
{
	test01();


	system("pause");
}
#endif
