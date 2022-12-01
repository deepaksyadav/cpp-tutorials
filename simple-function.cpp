//C++ program to demonstrate the simple user defined function

#include <iostream>
using namespace std;

// declaring a function
void hello() {
    cout << "Hello from hello() function!"<<endl;
}

int main() {
  cout<<"Hi from main() function before calling hello() function"<<endl;
  // calling the function
  hello();
  cout<<"Hi from main() function after calling hello() function"<<endl;
  return 0;
}
