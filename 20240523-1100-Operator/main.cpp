#include <iostream>

using namespace std;

// ��Ӱ��迡���� �����ڿ� �Ҹ����� ȣ�� ����

class Parent {
private:
	int _value;

public:
	Parent() {
		cout << "Parent Ŭ���� ������" << endl;
	}

	~Parent() {
		cout << "Parent Ŭ���� �Ҹ���" << endl;
	}
};

class Derived : public Parent {
private: 
	int _valueDerived;

public: 
	Derived() {
		cout << "Derived Ŭ���� ������" << endl;
	}
	
	~Derived() {
		cout << "Derived Ŭ���� �Ҹ���" << endl;
	}

};

int main() {
	Derived derived;

	return 0;
}