#include<iostream>
#include<string>
using namespace std;
#if 0
//  ��Ա���� ��Ա����   �ֿ��洢
//  ֻ�зǾ�̬�ĳ�Ա����  ��������Ķ����
//c++���������ÿ���ն������һ���ֽڿռ� ÿ������Ӧ����һ����һ�޶��ĵ�ַ
class PersonA{
};
class Person
{
public:
	Person(int  age) :age(age){}
	int  age;
	int  bb;            //��Ķ�����ֻ�洢����
    int show1(){}
	static int show(){}   //��Ա������ռ�ÿռ�
};

void main()
{
	Person p(10);
	cout << "sizeof(PersonA) = " << sizeof(PersonA) << endl;
	cout << "sizeof(Person) = " << sizeof(Person) << endl;
	system("pause");
}
#endif