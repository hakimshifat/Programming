// C++ program to illustrate the
// strtol() function when decimal base
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int b = 10;
	char s[] = "6010IG_2016p";
	char* end;
	long int n;

	n = strtol(s, &end, b);
	cout << "Number in String = " << s << endl;
	cout << "Number in Long Int = " << n << endl;
	cout << "End String = " << end << endl
		<< endl;

	// the pointer to invalid
	// characters can be null
	// strcpy(s, "47");
	// cout << "Number in String = " << s << endl;
	// n = strtol(s, &end, b);
	// cout << "Number in Long Int = " << n << endl;
	// if (*end) {
	// 	cout << end;
	// }
	// else {
	// 	cout << "Null pointer";
	// }
	return 0;
}
