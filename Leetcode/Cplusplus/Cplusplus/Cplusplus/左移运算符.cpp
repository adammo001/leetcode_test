#include<iostream>
#include<string>
#if 0
using namespace std;
// <<   ���������

class Person{
public:
	Person(){}
	// ��Ա��������
	Person operator+(Person &other){
		Person temp;
		temp.m_a = this->m_a + other.m_a;
		temp.m_b = this->m_b + other.m_b;
		return temp;
	}
	bool operator< (Person &other){
		return this->m_a < other.m_a;
	}

	int m_a;
	int m_b;
};
//�޷�ʹ�ó�Ա��������ֻ࣬������ȫ�ֺ�������<<���������
//��׼�����  ȫ�ֺ�����Ϊ��Ԫ����
ostream& operator<<(ostream &os, Person &p){
	os << "m_a = " << p.m_a << " m_b = " << p.m_b ;
	return os;
}

class MyInteger
{
	friend ostream& operator<<(ostream &os, MyInteger myint);
public:
	MyInteger()
	{
		m_Num = 0;
	}
	//ǰ�õ���
	MyInteger& operator++(){
		m_Num++;
		return *this;
	}
	//���õ���
	MyInteger operator++(int ){ //ռλ����
		// �ȼ�¼��ʱ�Ľ��
		MyInteger temp = *this;
		//�����
		m_Num++;
		//��󽫼�¼�Ľ������
		return temp;
	}
private:
	int m_Num;
};
ostream& operator<<(ostream &os, MyInteger myint){
	os << "a = " << myint.m_Num;
	return os;
}
//ǰ��++�ǺϷ��ģ���������++���Ϸ�
void test02()
{
	MyInteger myint;
	int a = 0;
	cout << ++(++a) << endl;  //���ʽ�ȼ�  ������
	cout << ++myint << endl;
	cout << myint << endl;
	cout << myint++<< endl;
	cout << myint << endl;
}
void test01()
{
	Person p1;
	p1.m_a = 10;
	p1.m_b = 100;
	Person p2;
	p2.m_a = 22;
	p2.m_b = 100;
	bool b1 = p1 < p2;
	cout << p1 << endl;
	cout << "����:" << b1 << endl;
}

void main()
{
	test02();
	system("pause");
}

#endif