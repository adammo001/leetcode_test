#include<iostream>
#include<string>
#include<vector>
using namespace std;
#if 0
void MySwap(int &a,int &b){
	int temp = a;
	a = b;
	b = temp;
}
void MySwap(double &a, double &b){
	int temp = a;
	a = b;
	b = temp;
}
#elif 0
//ģ�弼�������Ͳ�����
//ģ�岻���������Զ�ת��  ���Ͳ�����
template<class T> //template<typename T>
void MySwap(T &a, T&b)
{ //���ͻ��Զ��Ƶ�
	T temp = a;
	a = b;
	b = temp;
}
//��ͨ�������Զ����ͽ����Զ�ת��
int Myadd(int a,char b)
{
	return a + b;
}
//�������ͱ����ϸ�ƥ��
template <typename T> 
T Myadd(T a, T b)
{
	return a + b;
}
//�������ͱ����ϸ�ƥ��
template <typename T>
T Myadd(T a, T b��T c)
{
	return a + b + c;
}
void test02()
{
	int a = 10;
	int b = 100;
	char c = 'a';
	char d = 'b';
	Myadd(a,b);

}
void test01()
{
	int a = 1;
	int b = 2;
	MySwap<int>(a, b);
	cout << "a= " << a << "  b = " << b << endl;

	double d1 = 1.4;
	double d3 = 2.4;
	MySwap<double>(d1, d3);
	cout << "d1= " << d1 << "  d3 = " << d3 << endl;
	// ��ʾ����
	Myadd<int>(a,b);
	//ģ�����ϸ������ƥ��
}
// ����ģ���������ͨ��������������
// 
void main()
{

	test02();
	system("pause");
}

#endif