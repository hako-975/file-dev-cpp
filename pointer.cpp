#include <iostream>
using namespace std;
 
int main()
{
    
    int tunggal, ganda;
    int *x;

    x = &tunggal;
    *x = 1;

    x = &ganda;
    *x = 2;

    cout << tunggal << endl;
    cout << ganda << endl;
    return 0;
}
