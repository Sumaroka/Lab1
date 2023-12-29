#include <iostream>
#include <string>
#include <locale>
using namespace std;

unsigned short height;
string salary2 = "";

unsigned short ReadPersonAge() {
	unsigned short Age;
	cout << "Vash vozrast: ";
	cin >> Age;
	return Age;
}

string ReadPersonName() {
	string name;
	cout << "Vashe imia: ";
	cin >> name;
	return name;
}

void ReadPersonHeight() {
	cout << "Vash rost: ";
	cin >> height;
}

void ReadPersonWeight(unsigned short& Weight) {
	cout << "Vash ves: ";
	cin >> Weight;
}

void ReadPersonSalary(double* Salary) {
	cout << "Vash zarplata: ";
	cin >> *Salary;
}

void ReadPersonData(string& Name, unsigned short& Age,double& Salary) {
	cout << "Vashe imia: ";
	cin >> Name;
	cout << "Vash vozrast: ";
	cin >> Age;
	cout << "Vash zarplata: ";
	cin >> Salary;
}

void ReadPersonData(string& Name,unsigned short& Age, unsigned short& Weight, unsigned short& Height) {
	cout << "Vashe imia: ";
	cin >> Name;
	cout << "Vash vozrast: ";
	cin >> Age;
	cout << "Vash rost: ";
	cin >> Height;
	cout << "Vash ves: ";
	cin >> Weight;
}

void WritePersonData(string& Name,const string& Height, const string& Weight, const unsigned short* Age) {
	cout << "Name=" << Name << " Height=" << Height << " Weight=" << Weight << " Age=" << * Age << " Salary=" << salary;
}



int main(){
	string Name = ReadPersonName();
	unsigned short Age = ReadPersonAge();
	unsigned short Weight=0;
	double Salary1=10;
	/*double* Salary=&Salary1;*/
	ReadPersonSalary(&Salary1);
	ReadPersonWeight(Weight);
	salary2 = to_string(Salary1);
	string Height1 = to_string(height);
	string Weight1 = to_string(Weight);
	ReadPersonData(Name, Age, Salary1);
	ReadPersonData(Name, Age, Weight, height);
	WritePersonData(Name, Height1, Weight1, &Age);
	return 0;
}