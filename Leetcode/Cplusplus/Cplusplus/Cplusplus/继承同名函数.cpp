#include<iostream>
#include<string>
#if 0
using namespace std;
class Base{
public:
	Base(){
		m_a = 200;
	}
	void func(){
		cout << "Base:func" << endl;
	}
	static void fund(){
		cout << "Base:fund" << endl;
	}
	int m_a;
};
class Derived :public Base{
public:
	Derived(){
		m_a = 100;
	}
	void func(){
		cout << "Derived:func" << endl;
	}
	static void fund(){
		cout << "Derived:fund" << endl;
	}
	int m_a;
};
void main()
{
	Derived d; // ��������ȥ������ȥѰַ��Ȼ���ȡ��ֵ
	cout << " Base : m_a " << d.Base::m_a << endl;
	cout << " Derived : m_a " << d.m_a << endl;
	d.func();
	d.Base::func();   // ����ͬ���ģ�thisָ��˭���ã���ָ��˭
	// ����Ḳ�ǵ������ͬ����Ա��������Ҫ����������ܷ���
	d.Base::fund();
	d.fund();

	system("pause");
}
#endif




