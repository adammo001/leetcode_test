#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<unordered_set>
#include<unordered_map>
#include<algorithm>
using namespace std;
#if 0
// �㷨      ����    ������   ���ݽṹ�㷨����
// �߿���    ������  ��ƽ̨   ��������Ƕ������
// ��������  ��������    ������(����Ԫ��)    �㷨(ͨ�����޲����־�������)
//  ����  ɾ��  �޸�   ����   �滻
int countNum(int *start,int *end,int val)
{
	int num = 0;
	while (start != end)
	{
		if (*start == val)
		{
			num++;
		}
		start++;
	}
	return num;
}
void test01()
{
	int arry[10] = { 1, 2, 3, 4, 5, 6, 7 };
	int *begin = arry;
	int *end = &(arry[sizeof(arry) / sizeof(int)]);
	cout << countNum(begin, end, 3) << endl;
}
void printV(int v)
{
	cout << v << " " ;
}
// �����㷨������
void test02()
{// ��β�����Ԫ�أ�������������ʱ�����ж�̬����
	vector<int> vector1;
	vector1.push_back(10);
	vector1.push_back(20);
	vector<int>::iterator pBegin = vector1.begin();
	vector<int>::iterator pEnd = vector1.end();
	for_each(pBegin, pEnd, printV);
}
class Person{
public:
	Person(int age, int id) :age(age), id(id){}
	int age;
	int id;
};
void test03(){
	vector<Person>vector1;
	Person p1(10, 20);
	Person p2(10, 30);
	Person p3(10, 40);
	vector1.push_back(p1);
	vector1.push_back(p2);
	vector1.push_back(p3);
	for (vector<Person>::iterator it = vector1.begin(); it != vector1.end(); it++){
		cout << "(*it).age: " << (*it).age << " (*it).id " << (*it).id << endl;
	}
}
void main(){	
	//test02();
	test03();
	system("pause");
}
#endif
