#include <iostream>
using namespace std;
int main()
{
    int d = 1;
    int t = 11;
    int data[11] = {};
    int a, hash;
awal:
    cout << d <<"\t"<<t<<endl;
    for (int i = 0; i < 11; i++)
    {
        cout << " indeks " << i + 1 << "= " << data[i] << endl;
    }
    cout << "masukkan nilai yang akan dimasukkan = ";
    cin >> a;
    hash = (a % t) + 1;
    cout << hash;
    if (data[hash - 1] == 0)
    {
        data[hash - 1] = a;
        goto awal;
    }
    else if (data[hash - 1] != 0)
    {
        if (hash != t)
        {
            for (int i = hash; i < t; i++)
            {
                if (data[i] == 0)
                {
                    data[i] = a;
                    goto awal;
                }
            }
        }
        else if (hash == t)
        {
            for (int i = 0; i < hash - 1; i++)
            {
                if (data[i] == 0)
                {
                    data[i] = a;
                    goto awal;
                }
            }
        }
    }
}
