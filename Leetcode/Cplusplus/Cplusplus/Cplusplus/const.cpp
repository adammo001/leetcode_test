#include<iostream>
#include<string>
#if 0
using namespace std;
// ������  ����Ա����
class Person{
public: // ������ÿ����Ա�ж�����һ��thisָ��    ָ�볣�� ָ���ָ���ǲ������޸ĵ�
	void showclassname() const//��û�з���thisָ��
	{// const Person *const this;
		cout << "this is Person" << endl;
	}
	void showage()    
	{
		if (this == NULL)
			return;
		cout << "age is " << age << endl; //Ĭ�ϻ�����һ��thisָ��
	}
	mutable int age;
};
void test02(){
	const Person p2;
	p2.age = 100;//mutable int age;���벻�ӵ�����
}
// ������ֻ�ܵ��ó�����
// thisָ��˭���þ�ָ����øö���
void main()
{
	test02();
	system("pause");
}
#endif

