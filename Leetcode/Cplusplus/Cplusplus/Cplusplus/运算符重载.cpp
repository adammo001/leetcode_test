#include<iostream>
#include<string>
using namespace std;
//+���������
//��Ա��������
//ȫ�ֺ�������
//���õ��������Ͳ����Ը���
#if 0
class Person{
public:
	Person(){}
// ��Ա��������
#if 0
	Person operator+(Person &other){
		Person temp;
		temp.m_a = this->m_a+other.m_a;
		temp.m_b = this->m_b+other.m_b;
		return temp;
	}
#endif
	int m_a;
	int m_b;
};

//ȫ�ֺ�������
Person operator+(Person &p1, Person &p2){
	Person temp;
	temp.m_a = p1.m_a + p2.m_a;
	temp.m_b = p1.m_b + p2.m_b;
	return temp;
}
void main()
{
	Person p1;
	p1.m_a = 1;
	p1.m_b = 2;
	Person p2;
	p2.m_a = 1;
	p2.m_b = 2;
	Person p3 = p1 + p2; //p1.operator+(p2);
	cout << p3.m_a << " " << p3.m_b <<  endl;
	system("pause");
}
#endif



