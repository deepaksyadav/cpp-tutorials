//program for array declaration and printing them with the help of for loop

#include <iostream>
#include <string>
using namespace std;

int main() {
  string subjects[5] = {"Computer Networks", "Operating Systems", "Web Designing", "Maths-1", "Physics"};
  for (int i = 0; i < 5; i++) {
    cout << i << " = " << subjects[i] << "\n";
  }
 
  return 0;
}
