#include<iostream>
#include<string>
using namespace std;
/*
class Ĭ��˽��
struct Ĭ�Ϲ���
*/
#if 0
class C1{
	string name;
};
struct C2{
	string name;
};
int main()
{
	C1 c1;
	//c1. û�пɷ�������
	C2 c2;
	c2.name = "alpha";
	cout << c2.name << endl;
	system("pause");
}
#endif