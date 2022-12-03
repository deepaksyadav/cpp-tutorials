//program for array declaration and printing them with the help of for loop

#include <iostream>
#include <string>
using namespace std;

int main() {
  string subjects[] = {"Computer Networks", "Operating Systems", "Web Designing", "Maths-1", "","","","","Last", "", "", "Last sahi mein"};
  //string subjects[5];
  //subjects[0]="ABCXYZ";
  //int subjects[5];
  string s;
  cout<<sizeof(s)<<endl;
  cout<<sizeof(subjects)<<endl;

  for (int i = 0; i < sizeof(subjects)/32; i++) {
    cout << i << " = " << subjects[i] << "\n";
  }

  return 0;
}
