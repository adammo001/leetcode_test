#include<iostream>
#include<string>
#if 0
using namespace std;
//��̬��̬   ����ʱȷ��   �������� ��������� 
//��̬��̬   ����ʱȷ��   
class Animal{
public:
	virtual void speak(){
		cout << "������˵��" << endl;
	}
};
class Cat:public Animal{
public:
	void speak(){
		cout << "Сè��˵��" << endl;
	}
};
void doSpeak(Animal &animal){   // ��������˭����ȥ˭���麯������ȥ�ң��ҵ���˭���麯����
	animal.speak();
}
void test()
{
	Cat cat;//��ַ���  �����н׶ΰ�
	doSpeak(cat);
}
//  �麯�����ַ��      ���⺯����
//  �����е��麯����д������  �麯������
void main()
{
	test();
	system("pause");
}
#endif