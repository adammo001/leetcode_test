#include<iostream>
#include<string>
using namespace std;
#if 0
class Building;
// ������Ԫ��   ��Ա��������Ԫ
class GoodGay{
public:
	GoodGay();
	void vist();
private:
	Building *building;
};
class Building{
	//friend class GoodGay;  // ������Ԫ��
	friend void GoodGay::vist();  // ���� ��Ա��������Ԫ
public:
	Building();
	string sittingroom;
private:
	string beddingroom;
};
Building::Building(){
	sittingroom = "����";
	beddingroom = "����";
}
GoodGay::GoodGay(){
	building = new Building;
}

void GoodGay::vist()
{
	cout << "goodgay is visting " << building->sittingroom << endl;
	cout << "goodgay is visting " << building->beddingroom << endl;
}


void main()
{
	GoodGay G1;
	G1.vist();

	system("pause");
}
#endif