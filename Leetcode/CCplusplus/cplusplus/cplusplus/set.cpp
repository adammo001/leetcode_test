#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<queue>
#include<list>
#include<set>  //Ԫ������  ָ���������   mulset֧�ֶ��key
#include<map>
#include<unordered_set>
#include<unordered_map>
#include<algorithm>
#include<stack>
#if 0
using namespace std;
//����ͨ���������޸���ֵ��Ҫ�ı䣬��ɾ��Ȼ���ڲ���
void printSet(set<int> &set1)
{
	for (set<int>::iterator it = set1.begin(); it != set1.end(); it++){
		cout << *it << "  ";
	}
	cout << endl;
}
void test01()
{
	set<int> set1;//ƽ�������  RB - tree
	for (int index = 0; index < 20; index++){
		set1.insert(index);//���뱣֤�����Ԫ��Ҫ�����򣬷���Ҫ�Զ����������
	}
	printSet(set1);                       //Ĭ�ϴ�С��������
	set<int>::iterator it = set1.find(8);
	set1.erase(10); // ����elementɾ��.���ܰ��յ�����ɾ��
	set1.erase(set1.begin());
	cout << "*it = "<<*it << endl;
	cout << "size = " << set1.size() << endl;
	cout << "empty = " << set1.empty()<< endl;
	printSet(set1);// ������� ������� �������
	//��θı�Ĭ������
}
void test02()
{
	set<int> s1;//ƽ�������  RB - tree
	for (int index = 0; index < 20; index++){
		s1.insert(index);//���뱣֤�����Ԫ��Ҫ�����򣬷���Ҫ�Զ����������
	}
	printSet(s1);
	set<int>::iterator it = s1.find(10);
	if (s1.end() != it){
		cout << "*s1 = " << *it << endl;
	}
	else{
		cout << "not found" << endl;
	}
	it = s1.lower_bound(2); //���ص�һ��>=2��ֵ
	cout << "lower_bound = " << *it << endl;
	it = s1.upper_bound(2); //���ص�һ��>2��ֵ
	cout << "upper_bound = " << *it << endl;
	pair<set<int>::iterator, set<int>::iterator> it1;
	it1 = s1.equal_range(2); //���ص�һ��>2��ֵ
	if (it1.first == s1.end()){
		cout << "1û�ҵ�" << endl;
	}
	else
	{
		cout << "1�ҵ���" << *it1.first << endl;
	}
	if (it1.second == s1.end()){
		cout << "2û�ҵ�" << endl;
	}
	else
	{
		cout << "2�ҵ���" << *it1.second << endl;
	}

}

void main()
{
	test02();
	//test01();
	system("pause");
}
#endif