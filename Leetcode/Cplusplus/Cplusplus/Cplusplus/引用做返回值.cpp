#include<iostream>
using namespace std;
#if 0
//��Ҫ���ؾֲ�����������
//��������Ϊ���ÿ�����Ϊ��ֵ
int &function_ref()
{
	static int a = 10; //��̬���� ȫ����
	return a;          // ʹ�õı��������ʸõ�ַ
}

void main()
{
	int & ref = function_ref() ;
	cout << "ref = " << ref <<  endl;
	function_ref() = 1000;
	cout << "ref = " << ref <<  endl;

	system("pause");
}
#elif 0
void showref(/*const*/ int &value)
{
	value = 100;
	cout << "value = " << value << endl;
}
void main()
{
	int a = 10;
	const int & ref = 10;//int temp 10. const int &ref  = temp;
	cout << "a = " << a << endl;
	showref(a);
	system("pause");
}
#endif