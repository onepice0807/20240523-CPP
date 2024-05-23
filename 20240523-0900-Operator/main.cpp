#include <iostream>
#include <string>

using namespace std;
// Ư��ȭ
// ���� ���� �ù����̼ǰ���
// ����, ��, ��, ����


class Animal {
protected:
	string _name;
	float _weight;
	float _height;
	float _healthRate;

public:
	Animal(string name, float weight, float height, float healthRate)
		: _name(name), _weight(weight), _height(height), _healthRate(healthRate) {}

	void Speak() {
		cout << _name << "�� ���մϴ�." << endl;
	}

	void Run() {
		cout << _name << "�� �ݴϴ�." << endl;
	}

	string GetHealth() {
		if (_healthRate > 80) {
			return "�ſ� �ǰ�";
		}

		else if (_healthRate > 60 && _healthRate <= 80) {
			return "�ǰ�";
		}

		else if (_healthRate > 40 && _healthRate <= 60) {
			return "�ν�";
		}
		else {
			return "ġ����";
		}
	}

	void Info() {
		cout << "�̸�: " << _name << endl;
		cout << "������: " << _weight << endl;
		cout << "����: " << _height << endl;
		cout << "�ǰ�����: " << GetHealth() << endl;
	}
};

class Cow : public Animal {
public:
	Cow(string name, float weight, float height, float healthRate)
		: Animal(name, weight, height, healthRate) {}
	void Speak() {
		cout << _name << "�� �����մϴ�." << endl;
	}

};

class Pig : public Animal {
public:
	Pig(string name, float weight, float height, float healthRate)
		: Animal(name, weight, height, healthRate) {}
	void Speak() {
		cout << _name << "�� �ܲ��մϴ�." << endl;
	}
};

class Chicken : public Animal {
private:
	bool _isFly;

	void Fly() {
		cout << _name << "�� ���ϴ�." << endl;
	}
public:
	Chicken(string name, float weight, float height, float healthRate, bool isFly)
		: Animal(name, weight, height, healthRate), _isFly(isFly) {}

	void Speak() {
		cout << _name << "�� �������մϴ�." << endl;
	}

	void Run() {
		if (_isFly) {
			Fly();
		}
		else {
			Animal::Run();
		}
	}

	void Info() {
		Animal::Info();

		if (_isFly) {
			cout << "����: ���� ��" << endl;
		}
		else {
			cout << "����: ������ ��" << endl;
		}
	}
};

class Dolphin : public Animal {
private:
	void Swim() {
		cout << _name << "�� ���Ĩ�ϴ�." << endl;
	}
public:
	Dolphin(string name, float weight, float height, float healthRate)
		: Animal(name, weight, height, healthRate) {}

	void Speak() {
		cout << _name << "�� �����մϴ�." << endl;
	}

	void Run() {
		Swim();
	}
};


int main() {

	Cow cow("��", 280.0f, 160.0f, 77.0f);
	Pig pig("����", 230.0f, 160.0f, 88.0f);
	Chicken flyChicken("���� ��", 4.5f, 43.0f, 90.0f, true);
	Chicken notFlyChicken("�� ���� ��", 230.0f, 40.0f, 66.0f, false);
	Dolphin dolphin("����", 300.0f, 200.0f, 84.0f);


	cow.Speak();
	pig.Speak();
	flyChicken.Speak();
	notFlyChicken.Speak();
	dolphin.Speak();

	cout << endl;

	cow.Run();
	pig.Run();
	flyChicken.Run();
	notFlyChicken.Run();
	dolphin.Run();

	cout << endl;

	cow.Info();
	cout << endl;
	pig.Info();
	cout << endl;
	flyChicken.Info();
	cout << endl;
	notFlyChicken.Info();
	cout << endl;
	dolphin.Info();

	return 0;
}