#include <iostream>
#include <xmemory>
#include <chrono>
#include <vector>
using namespace std;

void f00(int *pf){

}

int main(){
	setlocale(LC_ALL, "ru");

	int* p;
	//auto_ptr<int> p_auto; 
	//unique_ptr<int> p_uniq; // ��������� ��������� // ������ ����� ������ �� ���� ������ ������������ ������������ ���
	//shared_ptr<int> p_share; // ��������� ��������� // ������ ���������� ������ �� ���� ������ � ��������� � ������������ ������ ������ ����� �������� ��������� ������
	//weak_ptr<int> p_weak; // �� ��������� ���������, �� �������� � �������


	//std::vector<std::chrono::seconds> a;
	//std::unique_ptr<int> p_uniq_int = std::make_unique<int>(7);     
	//auto p_uniq_int = std::make_unique<int>(7);

	//cout << *p_uniq_int;

	vector<int> collection;
	collection.push_back(1);
	collection.insert(collection.begin(),2);
	for (auto& el : collection)
	{
		cout << el << " ";

	}
	for (vector<int>::iterator it = collection.begin();
		it != collection.end();
		++it)
		cout << *it << " ";

	
	return 0;
}