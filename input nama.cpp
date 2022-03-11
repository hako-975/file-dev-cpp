#include <iostream>
#include <string>
using namespace std;

int main ()
{
char cPilihan;
string zNama;
do
{
cout <<"Masukan Nama anda: ";
cin >> zNama;
cout <<"Nama anda adalah " << zNama << endl
<<"Apakah anda ingin Mengulanginya lagi [y / n] ? ";
cin >> cPilihan;
}while(cPilihan =='y' || cPilihan=='Y');

cout <<"Keluar Aplikasi" << endl;

return 0;
}
