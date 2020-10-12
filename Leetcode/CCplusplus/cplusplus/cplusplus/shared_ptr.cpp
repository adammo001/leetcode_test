#include<iostream>
#include<memory>
#include<string>
using namespace std;
#if 0
struct Person:enable_shared_from_this<Person>
{
public:
	~Person(){
		cout << "��������" << endl;
	}
	void show()
	{
		cout << str << endl;
	}
	shared_ptr<Person> getShare(){
		return shared_from_this(); //�������󷵻س�ȥ
	}
	string str;
};

void main()
{
	{
		shared_ptr<Person> ptr2;
		shared_ptr<Person> ptr(new Person);
		ptr->str = "hello";
		cout << ptr.use_count() << endl;
		ptr2 = ptr->getShare(); //ptrָ���˸ö���Ȼ��ֵ��ptr2,����ptr2�ļ���û��+1
		ptr2->show();
	}

	system("pause");
}
#elif 0
struct Good : std::enable_shared_from_this<Good> // ע�⣺�̳�
{
public:
	std::shared_ptr<Good> getptr() {
		return shared_from_this();
	}
	~Good() { std::cout << "Good::~Good() called" << std::endl; }
};

int main()
{
	// ����������������������������ָ�������system("pause")֮ǰ����
	{
		std::shared_ptr<Good> gp1(new Good());
		std::shared_ptr<Good> gp2 = gp1->getptr();
		// ��ӡgp1��gp2�����ü���
		std::cout << "gp1.use_count() = " << gp1.use_count() << std::endl;
		std::cout << "gp2.use_count() = " << gp2.use_count() << std::endl;
	}
	system("pause");
}
#elif 0
//�������ڵ��й� ������ָ����ʵ��
template <typename T>
class UniquePoint{
public:
	using Pointer = T*;
	using Reference = T&;
	UniquePoint() :ptr_ ( nullptr){}
	UniquePoint(Pointer ptr) :ptr_(ptr){}
	UniquePoint(UniquePoint && other)
		:ptr(other.ptr_){
		other.ptr_ = nullptr;
	}
	UniquePoint& operator=(UniquePoint &&other){
		ptr_ = other.ptr_;
		return *this;
	}
	UniquePoint(const UniquePoint&) = delete;
	UniquePoint& operator=(const UniquePoint&) = delete;
	operator bool(){
		return ptr_ != nullptr;
	}
	Pointer get(){
		return ptr_;
	}
	Reference operator*(){
		return *ptr_;
	}
	void reset(Pointer ptr = nullptr){
		if (ptr_ != nullptr){
			delete ptr_;
		}
		ptr_ = ptr;
	}
	~UniquePoint(){
		if (ptr_ != nullptr)
			delete ptr_;
	}

private:
	Pointer ptr_;
};
struct  Demo
{
	~Demo()
	{
		cout << "��������" << '\n';
	}
};
void main()
{

	UniquePoint<Demo> ptr;
	if (!ptr){
		cout << "ptrΪ��" << endl;
	}
	UniquePoint<string> ptr1(new string("hello"));
	cout << "���ظö��������  " <<ptr1.get()->c_str();



	system("pause");
}
#endif