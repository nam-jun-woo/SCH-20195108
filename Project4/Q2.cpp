/*#include <random>
#include <ctime>
#include <iostream>
#include <functional>
using namespace std;
int main() {
	char ca;
	int an;
	int a, b;

	mt19937 engine((unsigned int)time(NULL));
	uniform_int_distribution<int> distribution(0, 10);
	auto generator = bind(distribution, engine);



	a = generator();
	b = generator();


	cout << "��� ������ �ڵ����� �����մϴ�" << endl;
	cout << a << " " << b << endl;


	cout << "������ �Է��ϱ�" << endl;
	cin >> ca;

	if (ca == '+') {
		cout << "��� �Է��ϱ�" << endl;
		cin >> an;
		if (a + b == an)
			cout << "�¾ҽ��ϴ�" << endl;
		else
			cout << "Ʋ�Ƚ��ϴ�" << endl;
	}

	else if (ca == '-') {
		cout << "��� �Է��ϱ�" << endl;
		cin >> an;

		if (a - b == an)
			cout << "�¾ҽ��ϴ�" << endl;
		else
			cout << "Ʋ�Ƚ��ϴ�" << endl;

	}

	else if (ca == '/') {
		cout << "��� �Է��ϱ�" << endl;
		cin >> an;

		if (a / b == an)
			cout << "�¾ҽ��ϴ�" << endl;
		else
			cout << "Ʋ�Ƚ��ϴ�" << endl;

	}
	else {
		cout << "��� �Է��ϱ�" << endl;
		cin >> an;

		if (a * b == an)
			cout << "�¾ҽ��ϴ�" << endl;
		else
			cout << "Ʋ�Ƚ��ϴ�" << endl;
	}
}*/