#include<iostream>
#include<string>
#if 0
using namespace std;
//ȫ�ֺ�������Ԫ
//������Ԫ
//��ĳ�Ա��������Ԫ
class Building {
	friend void vister2(Building&bulid);
public:
	Building()
	{
		m_SittingRoom = "����";
		m_bedroom = "����";
	}
	string m_SittingRoom;
private:
	string m_bedroom;
};
void vister1(Building&bulid)
{
	cout << "�û������ڷ��ʣ�" << bulid.m_SittingRoom << endl;
}
void vister2(Building&bulid)
{
	cout << "�û������ڷ��ʣ�" << bulid.m_bedroom << endl;
}
void test02()
{
	Building build;
	vister1(build);
	vister2(build);
}
void main()
{
	test02();
	system("pause");
}
#endif


