#include<iostream>
#include<string>
#if 0
using namespace std;
// ���麯�� ������
// ���������д����Ĵ��麯��������ҲΪ������
class Animal{
public:
	virtual void speak() = 0;
	virtual ~ Animal() = 0;
};
Animal:: ~Animal(){
	cout << "���麯������" << endl;
}
class Cat : public Animal{
public:
	Cat(string name){
		m_Name = new string(name);
		cout << "���캯������" << endl;
	}
	// ��������������ò���������
	virtual~Cat(){ // ����������ͷŻ���ָ���ͷŲ��ɾ�������
		if (m_Name != NULL)
		{
			delete m_Name;
			m_Name = NULL;
		}
		cout << "��������������" << endl;
	}
	virtual void speak() {
		cout << *m_Name <<  " Cat:speak" << endl;
	}
	string *m_Name;
};
void main()
{
	Animal *ab = new  Cat("tom"); // �����ָ��������ʱ��������������е���������
	ab->speak();
	delete ab;
	system("pause");
}
#endif