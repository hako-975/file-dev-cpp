#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

typedef struct node *simpul;
struct node
{
	char Isi ;
	simpul Next ;
};

void Sisip_Belakang (simpul &L, char elemen);
void Hapus_Depan (simpul &L);
void Cetak (simpul L);

int main()
{
	char huruf, lagi;
	simpul L = NULL; //Pastikan bahwa L kosong
	int i, pilihan;
	
	do
	{
		cout<<"OPERASI PADA SINGLE LINKED LIST"<<endl;
		cout<<"1. Sisip Belakang"<<endl;
		cout<<"2. Hapus Depan"<<endl;
		cout<<"3. Cetak"<<endl;
		cout<<"Masukkan pilihan: ";
		cin>>pilihan;
		switch(pilihan)
		{
			case 1:
				cout<<"Masukan Huruf: ";
				cin>>huruf;
				Sisip_Belakang (L, huruf);
			break;
			case 2:
				cout<<"Setelah Hapus Simpul "<<endl;
				Hapus_Depan(L);
			break;
			case 3:
				Cetak(L);
				cout<<endl;
			break;
			default:
				cout<<"Keluar"<<endl;
			break;		
		}
		
		cout<<"Apakah ingin melakukan lagi? y/n"<<endl;
		cin>>lagi;
	} while (lagi == 'y' || lagi == 'Y');
	
	getch();
}

void Sisip_Belakang (simpul &L, char elemen)
{
	simpul bantu, baru;
	baru = (simpul) malloc (sizeof(simpul));
	baru->Isi = elemen;
	baru->Next = NULL;
	if (L == NULL)
	{
		L= baru;
	}
	else
	{
		bantu =L;
	
		while (bantu->Next != NULL)
		{
			bantu = bantu->Next;
		}
		
		bantu->Next=baru;
	}
}

void Cetak (simpul L)
{
	simpul bantu;
	if(L == NULL)
	{
		cout<<"Linked List Kosong...";
	}
	else
	{
		bantu=L;
		cout<<"\nIsi Linked List : ";
		while (bantu->Next != NULL)
		{
			cout<<bantu->Isi<<"->";
			bantu=bantu->Next;
		}
		cout<<bantu->Isi;
	}
}

void Hapus_Depan (simpul &L)
{
	simpul Hapus;
	if(L==NULL)
	{
		cout<<"Linked List Kosong...";
	}
	else
	{
		Hapus=L;
		L = L->Next;
		Hapus->Next = NULL;
		free(Hapus);
	}
}

