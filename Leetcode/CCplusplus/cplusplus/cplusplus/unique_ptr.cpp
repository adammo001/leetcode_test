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
#include<memory>
using namespace std;
// ������̬��������
#if 0
struct Person
{
public:
	~Person(){
		cout << "���캯��" << endl;
	}
	string name;
};
//��ջ������ָ���ֵ����һ��
unique_ptr<Person> test()
{
	return  unique_ptr<Person>(new Person);
}
void test01()
{
	//string * str(new string("hello"));
	//delete str;
	unique_ptr<Person> pointer = test();
	pointer->name = "alpha";
	cout << pointer->name << endl;
	unique_ptr<Person>p2 = move(pointer);
	if (p2){
		cout << "p2ӵ�ж�������Ȩ" << endl;
	}
	if (!pointer)
	{
		cout << "pointer is null" << endl;
	}
	p2.reset(new Person);//�����µĶ����ͷ���һ�ι���Ķ���
}
//������һ��ָ��ӵ�иö��������Ȩ
void test02()
{
	auto ptr = make_unique<Person>();
	ptr->name = "word";
}
template<typename T>
struct Node
{
	T data;
	unique_ptr<Node<T>> next;
	~Node(){
		cout << "Node��������" << endl;
	}
};
template <typename T>
class Link{
public:
	void front(const T &data){
		auto node = make_unique<Node<T>>();
		node->data = data;
		node->next = move(head_.next);
		head_.next = move(node);
	}
	void print(){
		Node<T>*node = head_.next.get(); //��ȡ����ָ��
		while (node){
			cout << node->data << ' ' ;
			node = node->next.get();
		}
	}
private:
	Node<T> head_;
};
void test03()
{
	Link<int>lk;
	for (int val : {1, 2, 3, 4, 5})
	{
		lk.front(val);
	}
	lk.print();
}
void test04()
{
	shared_ptr<string > p1(new string("shared_ptr"));
	cout << "p1���ü���;" << p1.use_count() << endl;
	shared_ptr<string > p2 = p1;
	cout << "p2���ü���;" << p2.use_count() << endl;

}

void main()
{

	//test01();
	//test02();
	test04();
	system("pause");
}
#elif 0
struct Task {
	int mId;
	Task(int id) :mId(id) {
		std::cout << "Task::Constructor" << std::endl;
	}
	~Task() {
		std::cout << "Task::Destructor" << std::endl;
	}
};

int main()
{
	// �ն��� unique_ptr
	std::unique_ptr<int> ptr1;

	// ��� ptr1 �Ƿ�Ϊ��
	if (!ptr1)
		std::cout << "ptr1 is empty" << std::endl;

	// ��� ptr1 �Ƿ�Ϊ��
	if (ptr1 == nullptr)
		std::cout << "ptr1 is empty" << std::endl;

	// ����ͨ����ֵ��ʼ��unique_ptr
	// std::unique_ptr<Task> taskPtr2 = new Task(); // Compile Error

	// ͨ��ԭʼָ�봴�� unique_ptr
	std::unique_ptr<Task> taskPtr(new Task(23));

	// ��� taskPtr �Ƿ�Ϊ��
	if (taskPtr != nullptr)
		std::cout << "taskPtr is  not empty" << std::endl;

	// ���� unique_ptr����ָ��ĳ�Ա
	std::cout << taskPtr->mId << std::endl;

	std::cout << "Reset the taskPtr" << std::endl;
	// ���� unique_ptr Ϊ�գ���ɾ��������ԭʼָ��
	taskPtr.reset();

	// ����Ƿ�Ϊ�� / �����û�й�����ԭʼָ��
	if (taskPtr == nullptr)
		std::cout << "taskPtr is  empty" << std::endl;

	// ͨ��ԭʼָ�봴�� unique_ptr
	std::unique_ptr<Task> taskPtr2(new Task(55));

	if (taskPtr2 != nullptr)
		std::cout << "taskPtr2 is  not empty" << std::endl;

	// unique_ptr �����ܸ���
	//taskPtr = taskPtr2; //compile error
	//std::unique_ptr<Task> taskPtr3 = taskPtr2;

	{
		// ת������Ȩ����unique_ptr�е�ָ��ת�Ƶ���һ��unique_ptr�У�
		std::unique_ptr<Task> taskPtr4 = std::move(taskPtr2);
		// ת�ƺ�Ϊ��
		if (taskPtr2 == nullptr)
			std::cout << "taskPtr2 is  empty" << std::endl;
		// ת������ǿ�
		if (taskPtr4 != nullptr)
			std::cout << "taskPtr4 is not empty" << std::endl;

		std::cout << taskPtr4->mId << std::endl;

		//taskPtr4 ��������������ŵ������ڽ�delete�������ָ��
	}

	std::unique_ptr<Task> taskPtr5(new Task(66));

	if (taskPtr5 != nullptr)
		std::cout << "taskPtr5 is not empty" << std::endl;

	// �ͷ�����Ȩ   �ͷŸö��������Ȩ�����䷵�ظ���ָͨ�룬��ָͨ�뽫���û������ͷ�
	Task * ptr = taskPtr5.release();

	if (taskPtr5 == nullptr)
		std::cout << "taskPtr5 is empty" << std::endl;

	std::cout << ptr->mId << std::endl;

	delete ptr;
	
	return 0;
}
#endif