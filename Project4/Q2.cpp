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


	cout << "산수 문제를 자동으로 출제합니다" << endl;
	cout << a << " " << b << endl;


	cout << "연산자 입력하기" << endl;
	cin >> ca;

	if (ca == '+') {
		cout << "결과 입력하기" << endl;
		cin >> an;
		if (a + b == an)
			cout << "맞았습니다" << endl;
		else
			cout << "틀렸습니다" << endl;
	}

	else if (ca == '-') {
		cout << "결과 입력하기" << endl;
		cin >> an;

		if (a - b == an)
			cout << "맞았습니다" << endl;
		else
			cout << "틀렸습니다" << endl;

	}

	else if (ca == '/') {
		cout << "결과 입력하기" << endl;
		cin >> an;

		if (a / b == an)
			cout << "맞았습니다" << endl;
		else
			cout << "틀렸습니다" << endl;

	}
	else {
		cout << "결과 입력하기" << endl;
		cin >> an;

		if (a * b == an)
			cout << "맞았습니다" << endl;
		else
			cout << "틀렸습니다" << endl;
	}
}*/