#include "pch.h"
#include "test.h"

using namespace std;

int haupt() {
	return 0;
}

void erstens() {
	int i = 10;
	cout << i << endl;
	double d = 33.3;
	cout << d << endl;
	char c = 'k';
	cout << c << endl;
	string s = "Daniel";
	cout << s << endl;
}
void store(int& a, const char* argv[], int& b)
{
	a = stoi(argv[1]);
	b = stoi(argv[2]);
}
void zweitens(const char* argv[], int argc)
{
	int a;
	int b;
	bool hat_zwei_argumente = (argc == 3);
	cout << hat_zwei_argumente << endl;

	if (hat_zwei_argumente) {
		store(a, argv, b);
	}
	else {
		a = 1;
		b = 5;
	}

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
}


int main(int argc, const char* argv[]) {
	erstens();

	zweitens(argv, argc);
}



TEST(Aufgabe, eins) {
	haupt();
}