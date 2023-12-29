#include "Header.h"
void ReadPersonData(string& Name, unsigned short& Age, unsigned short& Height, unsigned short& Weight) {
	cout << "vashe imia:";
	cin >> Name;
	cout << "vash vozrast:";
	cin >> Age;
	cout << "vash rost:";
	cin >> Height;
	cout << "vash ves:";
	cin >> Weight;
}