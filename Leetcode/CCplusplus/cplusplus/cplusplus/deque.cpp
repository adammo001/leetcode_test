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
//˫������
void test1()
{
	deque<int>deq1;
	deque<int>deq2(10,5);
	deque<int>deq3(deq2.begin(), deq2.end());
	deque<int>deq4(deq3);

	deq1.push_front(10);
	deq1.push_back(20);
	for (deque<int>::iterator it = deq1.begin(); it != deq1.end(); it++){
		cout << (*it) << " ";
	}

	//deq1.pop_front();
	//deq1.pop_back();//Ԫ��Ϊ��
	//deq1.clear();
	for (deque<int>::iterator it = deq1.begin(); it != deq1.end(); it++){
		cout << (*it) << " "; 
	}
}
void test02()
{
	deque<int>d1;
	deque<int>d2;
	deque<int>d3;
	d1.assign(10,3);
	d2.assign(d1.begin(),d1.end());
	d3 = d2;
	d1.swap(d2); //������������
	cout << "d1.size()" << d1.size() << endl;
	cout << "d1.empty()" << d1.empty() << endl;

	//�����ɾ��
	d1.push_back(10);
	d1.push_front(20);
	d1.insert(d1.begin(),10);
	d1.erase(d1.begin());

	d1.front();//ȡ����
	d1.pop_front();// ɾ��ͷ
	d1.back();     //ȡ��β
	d1.pop_back(); // ɾ��β
}
void main()
{
	//test1();
	test02();
	system("pause");
}
#endif