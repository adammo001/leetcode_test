#include<iostream>
#include<string>
using namespace std;
#if 0
class Java{
public:
	void header(){
		cout << "��ҳ�������Σ���¼��ע��" << endl;
	}
	void footer(){
		cout << "�������ģ�����������վ�ڵ�ͼ" << endl;
	}
	void left(){
		cout << "Java Python" << endl;
	}
	void contetn(){
		cout << "Java��Ƶ��ѧ" << endl;
	}
};
class Cplus{
public:
	void header(){
		cout << "��ҳ�������Σ���¼��ע��" << endl;
	}
	void footer(){
		cout << "�������ģ�����������վ�ڵ�ͼ" << endl;
	}
	void left(){
		cout << "Cplus Python" << endl;
	}
	void contetn(){
		cout << "Cplus��Ƶ��ѧ" << endl;
	}
};
void test01(){
	Java ja;
	ja.header();
	ja.contetn();
	ja.footer();
	ja.left();
	cout << ".........................................." << endl;
}
void test02(){
	Cplus c;
	c.header();
	c.contetn();
	c.footer();
	c.left();
	cout << ".........................................." << endl;
}
class Base{
public:
	Base(string name, string age) :name(name), age(age){
	
	}
	void showname()
	{
		cout << "���֣�" << this->name << "   ����" << this->age << endl;
	}
	string  name;
	string  age;
};
class Derived :public Base{
public:
	Derived(string name, string age) :Base(name, age){	
	}

};
void main()
{
	//test01();
	//test02();
	Derived d1("alpha","11");
	d1.showname();
	system("pause");
}
//�̳������ǹ��ԣ��Լ���ӵ��Ǹ���
#endif

