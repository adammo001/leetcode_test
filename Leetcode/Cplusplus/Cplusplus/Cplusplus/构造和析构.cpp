#include<iostream>
#include<string>
using namespace std;
#if 0
class Base{
public:
	Base(){
		cout << "Base���캯��" << endl;
	}
	~Base(){
		cout << "Base��������" << endl;
	}

};
class Derived :public Base{
public:
	Derived(){	
		cout << "Derived���캯��" << endl;
	}
	~Derived(){
		cout << "Derived��������" << endl;
	}

};
//���캯������������  ˳���෴
void main()
{
	//Base b;
	Derived d;
	system("pause");
}
#endif