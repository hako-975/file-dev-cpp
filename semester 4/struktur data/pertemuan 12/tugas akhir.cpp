#include<iostream>
#include<string>
#include<conio.h>

using namespace std;
int main()
{
	int tanda = 1;
	string kalimat;
	
	cout<<"Masukkan kalimat: ";
	getline(cin, kalimat);
	
	
    for (int i = 0; i < kalimat.length(); i++) {
 
        if (kalimat[i] != kalimat[kalimat.length() - i - 1]) {
            tanda = 0;
        }
    }
    
	
	if(tanda == 1)
	{
		cout<<"Kalimat Ini adalah Kalimat Polindrome";
	}
	else 
	{
		cout<<"Kalimat Ini Bukan Kalimat Polindrome";
	}
	
	getch();
}

