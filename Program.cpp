#include <iostream>

using namespace std;
// what does using namespace std mean?
/*
*/

void TestCout();
void TestCin();
int main(void)
{
	TestCout();
	TestCin();
	return 0;
}
void TestCout()
{
	int num = 23;
	const char* name = "NeatCoder";
	cout << "Name:" << name << " \nNumber:" << num << endl;
}
void TestCin()
{
	int num;
	char name[256];

	cout << "num:";
	cin >> num;
	cout << "name:";
	cin >> name;

	cout << "Inserted number is: " << num << "\nName is " << name << endl;
}