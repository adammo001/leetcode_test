#include<iostream>
#include<string>
using namespace std;
#if 0
class Person{
public:
	void showclassname()//��û�з���thisָ��
	{
		cout << "this is Person" << endl;
	}
	void showage()
	{
		if (this == NULL)
			return;
		cout << "age is " << age << endl; //Ĭ�ϻ�����һ��thisָ��
	}
	int age;
};

void test()
{
	Person  *p = NULL;
	p->showage();
	p->showclassname();
}
void main()
{
	test();
	system("pause");
}
#endif