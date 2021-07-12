#include<iostream>
using namespace std;

int main()
{
    int n, i, a, b, c;
    
    cout<<"Masukkan digit maksimal fibonacci: ";
    cin>>n;
    
    i=1;
    a=0;
    b=1;
    
    while(i<=n)
    {
        cout<<a;
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    return 0;
}

