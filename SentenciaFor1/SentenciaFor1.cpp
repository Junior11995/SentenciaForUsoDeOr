#include <iostream>
#include <stdlib.h>

// usar la sentencia for para multipoicar los numeros del 1 al 10;
using namespace std;

int main() {

	int num;

	do {
		cout << endl;
		cout << "Digite un numero entre 1 y 10 ";
		cout << endl;
		cout << "\tdigite un numero: "; cin >> num;
		cout << endl;
		cout << "\tTabla de Multiplicar de: ";
	} while ((num < 1 ) || (num > 10));

	cout << num<<endl;

	for (int i = 1; i <= 10; i++) {
		cout << "\t " << num << " X " << i << " = " << num * i << endl;

	}

	cout << "\n \n \n ";
	system("pause");
	return 0;
}