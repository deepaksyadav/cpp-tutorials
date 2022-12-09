// C++ program to illustrate the use
// of the unions
#include <iostream>
using namespace std;

// Defining a Union
union union_var {
	int i1;
	char c2;
	float f3;
};

// Driver Code
int main()
{
	// Initializing Union
	union union_var u1;

	u1.i1 = 34;

	// Printing values
	cout << "The first value at "
		<< "the allocated memory : " << u1.i1 << endl;

	u1.c2 = 'u';

	cout << "The next value stored "
		<< "after removing the "
		<< "previous value : " << u1.c2 << endl;

	u1.f3 = 34.34;

	cout << "The Final value value "
		<< "at the same allocated "
		<< "memory space : " << u1.f3 << endl;
	return 0;
}
