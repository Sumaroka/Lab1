#include <iostream>
#include <string>
using namespace std;
extern unsigned short height;
extern string salary2;

unsigned short ReadPersonAge();
string ReadPersonName();
void ReadPersonHeight();
void ReadPersonWeight(unsigned short& Weight);
void ReadPersonSalary(double* Salary);
void ReadPersonData(string& Name, unsigned short& Age, double& Salary);
void ReadPersonData(string& Name, unsigned short& Age, unsigned short& Weight, unsigned short& Height);
void WritePersonData(string& Name, const string& Height, const string& Weight, const unsigned short* Age);