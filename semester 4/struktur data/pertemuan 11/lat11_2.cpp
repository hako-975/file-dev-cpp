#include<iostream>
#include<conio.h>
#define maxS 10

using namespace std;

struct stack
{
	char isi[maxS];
	unsigned int top;
};

void INITS(stack &s);
void PUSH(stack &s, char data);
void POP(stack &s, char hasil);
void CETAK(stack s);

int main()
{
	char huruf;
	stack s;
	INITS(s);
	cout<<"Masukkan Karakter: ";
	cin>>huruf;
	PUSH(s, huruf);
	cout<<"Masukkan Karakter: ";
	cin>>huruf;
	PUSH(s, huruf);
	cout<<"Masukkan Karakter: ";
	cin>>huruf;
	PUSH(s, huruf);
	CETAK(s);
	POP(s, huruf);
	cout<<huruf<<" telah dihapus"<<endl;
	CETAK(s);
	cout<<"Masukkan Karakter: ";
	cin>>huruf;
	PUSH(s, huruf);
	cout<<"Masukkan Karakter: ";
	cin>>huruf;
	PUSH(s, huruf);
	cout<<"Masukkan Karakter: ";
	cin>>huruf;
	PUSH(s, huruf);
	CETAK(s);
	POP(s, huruf);
	cout<<huruf<<" telah dihapus"<<endl;
	CETAK(s);
	getch();
}

void INITS(stack &s)
{
	s.top = 0;
}

void PUSH(stack &s, char data)
{
	if (s.top < maxS)
	{
		s.top++;
		s.isi[s.top] = data;
	}
	else
	{
		cout<<"stack Penuh"<<endl;
	}
}

void CETAK(stack s)
{
	cout<<endl;
	int i;
	cout<<"Isi stack: ";
	if (s.top != 0)
	{
		for (i = s.top; i > 1; i--)
		{
			cout<<s.isi[i]<<" ";
		}
	}
	else
	{
		cout<<"stack Kosong"<<endl;
	}
	cout<<endl;
}

void POP(stack &s, char hasil)
{
	if (s.top != 0)
	{
		hasil = s.isi[s.top];
		s.top--;
	}
	else
	{
		cout<<"stack Kosong"<<endl;
	}
}

