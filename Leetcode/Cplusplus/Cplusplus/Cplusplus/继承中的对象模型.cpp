#include<iostream>
#include<string>
using namespace std;
#if 0
class Base{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;   //���ص����ݱ������ˣ�������ȷʵ���ڵ�

};
class Derived :public Base{
public:
	int m_d;
};
// ����ģ��   �Ǿ�̬��Ա���ᱻ����̳���ȥ
void main()
{
	cout << "sizeof(Base)" << sizeof(Base) << endl;
	cout << "sizeof(Derived)" << sizeof(Derived) << endl;
	system("pause");
}
#endif