#include<iostream>
#include<string>
using namespace std;
#if 0
class Animal{
public:
	int m_age;
};
class Sheep:virtual public Animal{
public:

};
class Tuo :virtual public Animal{
public:

};
class SheepTuo :public Sheep, public Tuo{
public:

};
//������̳п��Խ����Դ�˷�����
void test01(){
	SheepTuo st;
	st.Sheep::m_age = 19;
	st.Tuo::m_age = 20;             //���μ̳в������������ݣ���Դ�˷�
	cout << " st.Sheep::m_age"<< st.Sheep::m_age << endl;
	cout << " st.Tuo::m_age  "<< st.Tuo::m_age << endl;
	cout << " st.m_age  " << st.m_age << endl;
}
void main()
{
	test01();
	system("pause");
}
#endif