//program for array declaration and printing them 

#include <iostream>
#include <string>
using namespace std;

int main() {
  string subjects[4] = {"Computer Networks", "Operating Systems", "Web Designing", "Maths-1"};
  cout << subjects[0]<<endl;
  cout << subjects[1]<<endl;
  cout << subjects[2]<<endl;
  cout << subjects[3]<<endl;
  subjects[0] = "Physics";
  cout << subjects[0];
  return 0;
}
