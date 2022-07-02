// // CPP program to illustrate substr()
// #include <string.h>
// #include <iostream>
// using namespace std;

// int main()
// {
// 	// Take any string
// 	string s = "dog:cat";

// 	// Find position of ':' using find()
// 	int pos = s.find("o");

// 	// Copy substring after pos
// 	string sub = s.substr(pos + 1);

// 	// prints the result
// 	cout << "String is: " << sub;

// 	return 0;
// }
// CPP program to illustrate substr()
#include <string.h>
#include <iostream>
using namespace std;


//string substr (size_t pos, size_t len) const;
int main()
{
	// Take any string
	string s1 = "Geeks";

	// Copy three characters of s1 (starting
	// from position 1)
	string r = s1.substr(3, 2);

	// prints the result
	cout << "String is: " << r;

	return 0;
}
