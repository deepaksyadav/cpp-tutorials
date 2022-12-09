#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("myfilename.txt");

  // Write to the file
  MyFile << "I am writing to files.";

  // Close the file
  MyFile.close();
}
