#include<iostream>
#include<string>
using namespace std;
//�����Ա
#if 0
class Phone{
public:
	Phone(string p_name){
		this->p_name = p_name;
		cout << "�ֻ�����" << endl;
	}
	~Phone()
	{
		cout << "�ֻ�����" << endl;
	}
	string p_name;
};
class  Person{         //��������������Χ����
public:
	Person(string name, string phone) :m_phone(phone){
		this->name = name;
		cout << "�˹���" << endl;
	}
	~Person(){
		cout << "������" << endl;
	}
	string name;
	Phone m_phone; //�ȹ����Ա
};

void test01()
{
	Person p("alpha","apple");
	cout << p.name << "  has  " << p.m_phone.p_name << endl;

}

void  main()
{
	test01();
	system("pause");
}
#endif
