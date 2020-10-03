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
//   vector �ǵ�������   vector ʵ��������Ķ�̬���������ռ䲻��ʱ
//   ����������һ���ڴ�ռ䣬�������¿ռ䲢�ͷžɿռ������
//   ����Ԫ�أ���Ԫ�ػ���������β������������洢�ռ�ʱ�������·����µĿռ䲢������ݵĿ���
void test01()
{
	vector<int>vector1(10, 2);
	vector1.push_back(10);

	int arr[] = {1,2,3,4,5,6,7};
	vector<int>vector2(arr, arr+ sizeof(arr) / sizeof(int)); //ʹ��ĳһ��ַ�ռ��ֵ����ʼ��
	vector<int>vector3(vector2.begin(), vector2.end());
	vector<int>vector4(vector3);
	vector<int>::iterator it = vector1.begin();
	vector1.insert(it, 20);   // ɾ��Ԫ��ʱ������Ԫ�صĵ�������ʧЧ
	//������ʧЧ
	it = vector1.begin();
	for (; it != vector1.end(); it++){
		cout << *it << " " ;
	}
}
void test02()
{
	vector<int>vector1(10, 2);
	vector<int>vector2(10, 3); //���캯����ʼ��
	vector1 = vector2;    //����=�Ÿ�ֵ
	swap(vector1,vector2);   // ����
	vector2.assign(vector1.begin(),vector1.end());
}
int fun1(int num)
{
	cout << "num = " << num << endl;
	if (num <= 0)
		return 1;
	return fun1(num - 1) + fun1(num - 2);
}
//vector<int> ��С����
//size()  ����������Ԫ�صĸ���
//empty() �ж������Ƿ�Ϊ��
//resize() ����ָ�������ĳ���  ����䳤 ��Ĭ��ֵ���   �����  ��β������Ԫ�ؽ��ᱻɾ��
//capacity()  ��������������
//reserve(len)   Ԥ��len��Ԫ�أ�����ʼ�����ɷ���
void test03() //�����ĸ���
{
	vector<int> vector1;
	vector1.push_back(10);
	cout << "vector1.size()" << vector1.size()<<endl;
	cout << "vector1.capacity()" << vector1.capacity() << endl;
	cout << "vector1.empty()" << vector1.empty() << endl;
	vector1.resize(10);
	vector1.reserve(2);	
}
void test04()
{
	//���ݴ�ȡ����at��ȫ
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	vector<int>vector2(arr, arr + sizeof(arr) / sizeof(int)); //ʹ��ĳһ��ַ�ռ��ֵ����ʼ��
	for (int i = 0; i < vector2.size(); i++){
		cout << vector2[i] << " ";
	}
	cout << "---------------------" << endl;
	for (int i = 0; i < vector2.size(); i++){
		cout << vector2.at(i) << " ";
	}
	cout << "---------------------" << endl;
	cout << "vector2.front()" << vector2.front() << " vector.back()= " << vector2.back()<<endl;
	// �����ɾ��  erase  ������ɾ��
	vector2.pop_back();
	cout << "---------------------" << endl;
	for (int i = 0; i < vector2.size(); i++){
		cout << vector2.at(i) << " ";
	}
	cout << endl;
	vector2.insert(vector2.begin(),30);
	vector2.insert(vector2.begin()+2, 300);    //֧��������ʿ�������+2
	for (int i = 0; i < vector2.size(); i++){
		cout << vector2.at(i) << " ";
	}
	vector2.erase(vector2.begin()+1,vector2.end());//ɾ������
	vector2.clear();//���Ԫ��
	vector2.reserve(10);//Ԥ���ռ�

	vector<int> vectest;
	int num_test = 0;
	int *address = NULL;
	vectest.reserve(100000);// ��ǰ���뱣�����Ŀռ�
	for (int i = 0; i < 100000; i++){
		vectest.push_back(i);
		if (address != &(vectest[0])){
			address = &(vectest[0]);
			num_test++;
		}
	}
	cout << "num_test = " << num_test << endl;
}

void main()
{
	//test01();
	//cout << fun1(1);
	//test02();
	//test03();
	test04();
	system("pause");
}


#endif