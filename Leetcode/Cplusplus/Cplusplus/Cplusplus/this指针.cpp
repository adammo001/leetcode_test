#include<iostream>
#include<string>
using namespace std;
#if 0
// thisָ��  ������ÿһ����Ա������
// ������ֳ�ͻ�������������
class Person
{
public:
	Person(int  age) {
		this->m_age = age;
	}
	Person& PersonAddAge(const Person&other)
	{	
		this->m_age = other.m_age + this->m_age;
		return *this;
	}
	int  m_age;
  
};
void test()
{
	Person p1(10);                // thisָ��ָ����õĳ�Ա���������Ķ���
	cout << "p1.m_age = " << p1.m_age << endl;
	Person p2(100);  //thisָ��ָ����ǵ��øó�Ա�����Ķ��� ��ʽ��̷���
	p2.PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2������Ϊ:" << p2.m_age << endl;
}
void main()
{
	test();
	system("pause");
}
#endif