/*#include<iostream>
using namespace std;

int main()

{
	char bo[3][3];

	int x, y, k, i;



	for (x = 0; x < 3; x++)

		for (y = 0; y < 3; y++) bo[x][y] = ' ';



	for (k = 0; k < 9; k++) {

		cout << "(x, y) ÁÂÇ¥:";

		cin >> x >> y;

		bo[x][y] = (k % 2 == 0) ? 'X' : 'O';



		for (i = 0; i < 3; i++) {

			cout << "---l---l---" << endl;

			cout << bo[i][0] << " l " << bo[i][1] << " l " << bo[i][2] << endl;

		}

		cout << "---l---l---" << endl;

	}

	return 0;

}*/