#include<iostream>
#include<string>
#include<string>
using namespace std;
#if 0
class MyPrint{
public:
	void operator()(string test){
		cout << "string test" << endl;
	}
};
class Myadd{
public:
	int operator()(int num1,int num2){
		return num1 + num2;
	}
};
void main()
{
	MyPrint my;
	my("hello");  //ʹ�������ǳ��������º���
	Myadd a1;
	cout << "���Ϊ:"<< a1(11, 22)<<endl;
	cout << "���Ϊ:" << Myadd()(22, 33) << endl; //��������
	system("pause");
}
#endif