#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<queue>
#include<list>
#include<set>
#include<map>
#include<unordered_set>
#include<unordered_map>
#include<algorithm>
#include<stack>
#if 0
using namespace std;
void printList( list<int> &mlist4)
{
	for (list<int>::iterator it = mlist4.begin(); it != mlist4.end(); it++){
		cout << *it << "  ";
	}
	cout << endl;
}
void test01()
{
	//��ʼ��
	list<int> mlist1;
	list<int>mlist2(10,10);
	list<int>mlist3(mlist2);
	list<int>mlist4(mlist2.begin(),mlist2.end());
	printList(mlist4);
	//mlist4.clear();
	printList(mlist4);
	// ����Ԫ��
	mlist4.push_back(100);
	mlist4.push_front(200);
	mlist4.insert(mlist4.begin(),400);
	mlist4.insert(mlist4.end(), 400);
	printList(mlist4);
	// ɾ��Ԫ��
	mlist4.pop_back();
	mlist4.pop_front();
	printList(mlist4);
	//mlist4.erase(mlist4.begin(),mlist4.end());
	mlist4.remove(10);
	mlist4.sort(mlist1); //sort�㷨����֧�ֿ�������ʵ�
	printList(mlist4);
	//��С����
}
void main()
{
	test01();
	system("pause");
}
#endif