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
	
	cout<<"OPERASI PADA SINGLE LINKED LIST"<<endl;
	cout<<"\nPenyisipan Simpul \n\n";
	for(i=1; i<=3;i++)
	{
	    cout<<"Masukan Huruf :";
	    cin>>huruf;
	    Sisip_Belakang (L, huruf);
	}
	Cetak (L) ;
	
	cout<<"\nSetelah Hapus Simpul "<<endl;
	Hapus_Depan (L) ;
	Cetak(L) ;
	cout<<"\nSetelah Hapus Simpul "<<endl ;
	Hapus_Depan ( L ) ;
	Cetak (L) ;
	cout<<"\nSetelah Hapus Simpul "<<endl;
	Hapus_Depan (L) ;
	Cetak(L) ;
	cout<<"\nPenyisipan simpul \n\n";
	for (i=1 ; i<=3;i++)
	{
	    cout<<"Masukan Huruf :";
	    cin>>huruf;
	    Sisip_Belakang (L, huruf);
	}
	Cetak (L) ;
	cout<<"\nSetelah Hapus Simpul "<<endl;
	Hapus_Depan ( L ) ;
	Cetak (L) ;
	cout<<"\nSetelah Hapus Simpul "<<endl;
	Hapus_Depan (L) ;
	Cetak (L) ;	
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

