#include <iostream>
#include<string>  
using namespace std;

int main() {
  int num = 100; // a variable of int data type

  string str; // a variable of str data type

  // using to_string to convert an int into a string
  str = to_string(num);

  cout << "The integer value is " << num << endl;  
  cout << "The string representation of the integer is " << str << endl;  
}
