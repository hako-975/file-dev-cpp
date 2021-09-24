#include<iostream>
#include <stdlib.h>
#include <conio.h> 
#define MAX 10
using namespace std;
int top = -1;
int stack[MAX];

void Push()
{
	if (top == MAX - 1)
	{
		cout<<"Stack sudah maksimal!"<<endl;
	}
	else
	{
		top++;
		cout<<"Masukkan Data: ";
		cin>>stack[top];
		cout<<"Pada indeks ke "<<top<<endl;
		cout<<"Data ["<<stack[top]<<"] telah ditambahkan!"<<endl;
	}
}

void Pop()
{
	if (top == -1)
	{
		cout<<"Stack Kosong!"<<endl;
	}
	else
	{
		cout<<"Data ["<<stack[top]<<"] pada indeks ke "<<top<<" dalam stack diambil!"<<endl;
		stack[top--];
	}
}

int Clear()
{
	return top = -1;
}

void Print()
{
	if (top == -1)
	{
		cout<<"Stack: Kosong!"<<endl;
		cout<<"======================"<<endl;
	}
	else
	{
		cout<<"Stack: "<<endl;
		cout<<"======================"<<endl;
		for (int i = top; i >= 0; i--)
		{
			cout<<stack[i]<<endl;
		}
		cout<<"======================"<<endl;
	}
}

int main()
{
	int pilih;
    do 
    {
		Print();
        cout<<"1. Push"<<endl;
		cout<<"2. Pop"<<endl;
		cout<<"3. Clear"<<endl;
		cout<<"4. Exit"<<endl;
		cout<<"Pergerakan (TOP): "<<top<<endl;
		cout<<"======================"<<endl;
		cout<<"Pilih: "; 
		cin>>pilih;
        switch (pilih)
        {
            case 1:
                Push();
                getch();
                break;
            case 2:
                Pop();
                getch();
                break;
            case 3:
                Clear();
                cout<<"Berhasil dibersihkan!"<<endl;
                getch();
                break;
            case 4:
                cout<<"Terima Kasih!"<<endl;
                getch();
                break;
            default:
                cout<<"Pilihan tidak ada!"<<endl;
                cout<<"Masukan pilihan sesuai dengan daftar"<<endl;
                getch();
                break;
        }
        system("cls");
    }
    while (pilih != 4);
}
