#include "Header.h"


int main() {
	string Name = ReadPersonName();
	unsigned short Age = ReadPersonAge();
	unsigned short Weight = 0;
	double Salary1 = 10;
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