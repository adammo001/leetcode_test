#include<iostream>
#include<string>
#if 0
using namespace std;
const double PI = 3.14;
// ���ӹ�ϵ   
//����Ȩ�� public     ���ڿ��Է���  ������Է���
//����Ȩ�� protected  ���ڿ��Է���  ���ⲻ���Է���
//˽��Ȩ�� private    ���ڿ��Է���  ���ⲻ���Է���
class Person{
public:      //���ں�������ɷ���
	void func()
	{
		this->m_mame = "alpha";
		this->m_car = "������";
		this->m_passwd = 123456;
	}
	string m_mame;
protected:   // ���ڿɷ��ʣ����ⲻ�ɷ��ʲ���ͨ������.��Ա����
	string m_car;
private:
	int m_passwd;
};

class Son{
public:
protected:
private:
};

void main()
{
	Person p1;
	p1.m_mame = "spider";   //����ɷ��ʹ���
	//p1.m_car = "baoshijie"; //���ⲻ�ɷ��� ����
	//p1.m_passwd = 1234;     //���ⲻ�ɷ��� ˽��
	
	
	
	system("pause");
}
#endif