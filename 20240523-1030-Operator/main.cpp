#include <iostream>
#include <string>

using namespace std;

// ��Ӱ��迡���� ����������

class A {
public:
	int _value;
	int _value2;

public:
	A() : _value(0), _value2(0) {}
	A(int value, int value2)
		: _value(value), _value2(value2) {}
};

class B : public A {
public:
	int _value3;
	int _value4;

public:
	B() : A(0, 0), _value3(0), _value4(0) {}
	B(int value, int value2, int value3, int value4)
		: A(value, value2), _value3(value3), _value4(value4) {}

	void Info() {
		cout << "_value = " << _value << endl;
		cout << "_value2 = " << _value2 << endl;
		cout << "_value3 = " << _value3 << endl;
		cout << "_value4 = " << _value4 << endl;
	}
};

class C : B {
public:
	int _value5;
	int _value6;

public:
	C() : B(0, 0, 0, 0), _value5(0), _value6(0) {}
	C(int value, int value2, int value3, int value4, int value5, int value6)
		: B(value, value2, value3, value4), _value5(value5), _value6(value6) {}

	void Info() {
		cout << "_value = " << _value << endl;
		cout << "_value2 = " << _value2 << endl;
		cout << "_value3 = " << _value3 << endl;
		cout << "_value4 = " << _value4 << endl;
		cout << "_value5 = " << _value5 << endl;
		cout << "_value6 = " << _value6 << endl;
	}
};

int main() {
	
	A a(100, 200);
	B b(10, 20, 30, 40);
	C c(1, 2, 3, 4, 5, 6);

	cout << "a._value = " << a._value << endl;
	cout << "a._value2 = " << a._value2 << endl;
	cout << "b._value3 = " << b._value3 << endl;
	cout << "b._value4 = " << b._value4 << endl;
	cout << "c._value5 = " << c._value5 << endl;
	cout << "c._value6 = " << c._value6 << endl;

	return 0;
}