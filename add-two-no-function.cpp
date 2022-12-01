// C++ program to add two numbers using a function

#include <iostream>
using namespace std;

// declaring a function
int add(int num1, int num2) {
    return (num1 + num2);
}

int main() {
  int sum;
  // calling the function and storing
  // the returned value in sum
  sum = add(10, 101);
  cout << "10 + 101 = " << sum << endl;
  return 0;
}
