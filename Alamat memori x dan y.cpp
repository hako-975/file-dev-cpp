#include <iostream>

using namespace std;

int main() 
{
  int x, *y;
  y = &x;
  x = 10;
  
  cout<<"Nilai x = "<<x<<endl;
  cout<<"Alamat memori x = "<<&x<<endl;
  cout<<"Nilai y = "<<*y<<endl;
  cout<<"Alamat memori y = "<<*y<<endl;
  
  return 0;
}

