#include <iostream>
using namespace std;

enum Buah { Semangka, Pisang, Kiwi, Apel, Anggur };

void TampilkanIndeksBuah()
{
	Buah buah;
	buah = Anggur;
    cout<<"Buah Anggur Indeks ke-"<<buah<<endl;
}

int main()
{
    TampilkanIndeksBuah();
    
    return 0;
}

