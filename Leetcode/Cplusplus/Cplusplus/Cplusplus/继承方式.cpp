#include<iostream>
#include<string>
#if 0
class Base{
public:
	int a;
protected:
	int b;
private:
	int c;
};
class Derived1 :public Base{  //�����븸��
public:
	void func(){
		a = 10;       //�����еĹ���Ȩ�޳�Ա��Ȼ�ǹ���Ȩ��
		b = 100;      //�����еı�����Ա����������Ȼ�Ǳ���Ȩ��
		//c = 1000;   //����˽�в��ɷ���
	}
};
void test01(){
	Derived1 d1;
	d1.a = 100;// �����һ�ֹ�ϵ
}
class Derived2 :protected Base{ // ����ȫ����������
public:
	void func(){
		a = 10;     //�����еĹ���Ȩ�޳�Ա��Ȼ�ǹ���Ȩ��
		b = 100;    //�����еı�����Ա����������Ȼ�Ǳ���Ȩ��
		//c = 1000; //����˽�в��ɷ���
	}
};
void test02(){
	Derived2 d2;
	//d2.a = 100;   // �����һ�ֹ�ϵ  ֻҪ�����ˣ������ⲻ�ɷ���
}
class Derived3 :private Base{
public:
	void func(){
		a = 10;    
		b = 100;    
		//c = 1000; 
	}
};
void test03(){
	Derived3 d3;
	//d3.a = 100;   // �����һ�ֹ�ϵ  ֻҪ�����ˣ������ⲻ�ɷ���
}
void main()
{
	// �̳иı���Ǹ����ڻ����еĳ�ԱȨ��   
	
	system("pause");
}
#endif