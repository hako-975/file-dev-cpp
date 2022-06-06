#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define maxS 10

using namespace std;

struct stack
{
	char isi[maxS];
	unsigned int top;
};

typedef struct node *simpul;
struct node
{
	char Isi;
	simpul next;
};
 
void Sisip_Belakang (simpul &L, char elemen);
void Hapus_Belakang (simpul &L);

void INITS(stack &s);
void PUSH(stack &s, char data);
void POP(stack &s, char hasil);
void CETAKSTACK(stack s);
void CETAKTERBALIK(stack s);
void CetakSimpul(simpul L);


int main()
{
	int pilih;
	char huruf;
	
	cout<<"1. Stack Menggunakan Array"<<endl;
	cout<<"2. Stack Terbalik"<<endl;
	cout<<"3. Stack Menggunakan Singly Linked List"<<endl;
	cout<<"Masukkan Pilihan: ";
	cin>>pilih;
	
	if (pilih == 1)
	{
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
		CETAKSTACK(s);
		POP(s, huruf);
		cout<<huruf<<" telah dihapus"<<endl;
		CETAKSTACK(s);
		cout<<"Masukkan Karakter: ";
		cin>>huruf;
		PUSH(s, huruf);
		cout<<"Masukkan Karakter: ";
		cin>>huruf;
		PUSH(s, huruf);
		cout<<"Masukkan Karakter: ";
		cin>>huruf;
		PUSH(s, huruf);
		CETAKSTACK(s);
		POP(s, huruf);
		cout<<huruf<<" telah dihapus"<<endl;
		CETAKSTACK(s);
		getch();
	}
	else if (pilih == 2)
	{
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
		CETAKTERBALIK(s);
		POP(s, huruf);
		cout<<huruf<<" telah dihapus"<<endl;
		CETAKTERBALIK(s);
		cout<<"Masukkan Karakter: ";
		cin>>huruf;
		PUSH(s, huruf);
		cout<<"Masukkan Karakter: ";
		cin>>huruf;
		PUSH(s, huruf);
		cout<<"Masukkan Karakter: ";
		cin>>huruf;
		PUSH(s, huruf);
		CETAKTERBALIK(s);
		POP(s, huruf);
		cout<<huruf<<" telah dihapus"<<endl;
		CETAKTERBALIK(s);
		getch();
	}
	else
	{
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
		CetakSimpul (L);
		
		cout<<endl<<"Hapus Elemen "<<endl;
		Hapus_Belakang (L);
		CetakSimpul (L);
		cout<<endl<<"Hapus Elemen "<<endl;
		Hapus_Belakang (L);
		CetakSimpul (L);
		cout<<endl<<"Hapus Elemen "<<endl;
		Hapus_Belakang (L);
		
		CetakSimpul (L);
		cout<<endl<<endl;
		cout<<endl<<"Hapus Elemen "<<endl;
		Hapus_Belakang (L);
		CetakSimpul (L);
		getch();
	}
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

void CETAKSTACK(stack s)
{
	cout<<endl;
	int i;
	cout<<"Isi stack: ";
	if (s.top != 0)
	{
		for (i = 1; i < s.top; i++)
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

void CETAKTERBALIK(stack s)
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

void CetakSimpul(simpul L)
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

