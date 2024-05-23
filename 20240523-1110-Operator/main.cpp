#include <iostream>

using namespace std;

// UpCasting, DownCasting
// UpCasting: 상속관계에서 부모의 데이터 타입으로 자식이 받는 것
// 참조타입/포인터

class Parent {
public:
	int _pvalue;

public:
	Parent()
		: _pvalue(0){}


	Parent(int pvalue)
		: _pvalue(pvalue) {}

	void ShowInfo() {
		cout << "Parent::_pvalue = " << _pvalue << endl;
	}

};

class Child : public Parent {
private:
	int _cvalue;

public:
	Child() 
		: Parent(0), _cvalue(0) {}

	Child(int pvalue, int cvalue)
		: Parent(pvalue), _cvalue(cvalue) {}

	void ShowInfo() {
		cout << "Child::Parent::_pvalue = " << _pvalue << endl;
		cout << "Child::_cvalue = " << _cvalue << endl;
	}

};

int main() {


	return 0;
}