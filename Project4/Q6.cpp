/*#include<iostream>

#include <time.h>

using namespace std;



int main()

{

	bool bo[10][10] = { 0 };

	srand(time(NULL));
	for (int i = 0; i < 10; i++)

		for (int j = 0; j < 10; j++)

			if ((rand() % 100) < 30)

				bo[i][j] = true;

	for (int i = 0; i < 10; i++) {

		for (int j = 0; j < 10; j++)

			if (bo[i][j])

				cout << "# ";

			else

				cout << ". ";

		cout << endl;

	}

	return 0;

}*/