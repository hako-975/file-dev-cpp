#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define true1
#define false 0

using namespace std;

typedef struct node *simpul;
struct node
 {
 char Isi;
 simpul next ;
 };
 
void Sisip_Belakang (simpul &L, char elemen);
void Hapus_Belakang (simpul &L);
void Cetak (simpul L);

int main ()
{
	char huruf ;
	simpul L = NULL; 
	cout<<"Operasi Single Linked List Pada Stack"<<endl;
	cout<<"Penyiapan Stack "<<endl;
	cout<<"Masukan Elemen : "; 
	cin>> huruf;
	Sisip_Belakang (L, huruf);
	cout<<"Masukan Elemen : "; 
	cin>> huruf;
	Sisip_Belakang (L, huruf);
	cout<<"Masukan Elemen : "; 
	cin>> huruf;
	Sisip_Belakang (L, huruf);
	cout<<"Masukan Elemen : "; 
	cin>> huruf;
	Sisip_Belakang (L, huruf);
	cout<<"Masukan Elemen : "; 
	cin>> huruf;
	Sisip_Belakang (L, huruf);
	cout<<"Masukan Elemen : "; 
	cin>> huruf;
	Sisip_Belakang (L, huruf);
	Cetak (L);
	
	cout<<endl<<"Hapus Elemen "<<endl;
	Hapus_Belakang (L);
	Cetak (L);
	cout<<endl<<"Hapus Elemen "<<endl;
	Hapus_Belakang (L);
	Cetak (L);
	cout<<endl<<"Hapus Elemen "<<endl;
	Hapus_Belakang (L);
	
	Cetak (L);
	cout<<endl<<endl;
	cout<<endl<<"Hapus Elemen "<<endl;
	Hapus_Belakang (L);
	Cetak (L);
	getch();
}

void Sisip_Belakang (simpul & L, char elemen)
{
	simpul bantu, baru;
	baru= (simpul) malloc(sizeof(simpul));
	baru->Isi = elemen;
	baru->next = NULL;
	if(L == NULL)
	{
		L=baru;
	}
	else
	{
		bantu=L;
		while(bantu->next != NULL)
		bantu=bantu->next;
		bantu->next=baru;
	}
}

void Hapus_Belakang (simpul & L)
{
	simpul bantu, hapus;
	if(L == NULL)
	{
		cout<<"Linked List Kosong...........";
	}
	else
	{
		bantu=L;
		while(bantu->next->next != NULL)
		bantu=bantu->next;
		hapus = bantu ->next;
		bantu->next = NULL;
		free(hapus);
	}
}

void Cetak(simpul L)
{
	simpul bantu;
	if (L==NULL)
	{
		cout<<"Linked List Kosong ……….."<<endl;
	}
	else
	{
		bantu=L;
		cout<<endl<<"Isi Linked List : ";
		while (bantu->next != NULL)
		{
			cout<<bantu->Isi <<"->";
			bantu=bantu->next;
		}
		cout<<bantu->Isi;
	}
}

