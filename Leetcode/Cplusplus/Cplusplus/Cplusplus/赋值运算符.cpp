#include<iostream>
using namespace std;
//��ֵ�����
#if 0
class Person
{
public:
	Person(int age)
	{
		p_age = new int(age);
	}
	~Person(){
		if (p_age!=NULL)
		{
			delete p_age;
			p_age = NULL;
		}
	}
	//�о���memcpy����
	Person& operator = (Person&p){
		// ���ж��Լ��Ķ����Ƿ������ݣ��������ô���ͷŸɾ�
		if (p_age != NULL)
		{
			delete p_age;
			p_age = NULL;
		}
		p_age = new int(*p.p_age);//������ԭ����
		return *this;
	}
	int *p_age;// ������
};
void test01()
{
	Person p1(18);
	Person p2(20);
	Person p3(19);
	p3 = p1 = p2; // �������ò�����������
	cout << "����Ϊ:" << *p1.p_age << endl;
	cout << "����Ϊ:" << *p2.p_age << endl;
	cout << "����Ϊ:" << *p3.p_age << endl;
}
void main()
{
	test01();

	system("pause");
}
#endif