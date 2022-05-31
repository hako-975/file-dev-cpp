#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

typedef struct node *simpul;
struct node
{
	char isi;
	simpul kanan;
	simpul kiri;
};

// Prototype Function
void SisipDepan(simpul &dl, char elemen);
void SisipBelakang(simpul &dl, char elemen);
void SisipTengah1(simpul &dl, char elemen1, char elemen2);
void SisipTengah2(simpul &dl, char elemen1, char elemen2);
void HapusDepan(simpul &dl);
void HapusBelakang(simpul &dl);
void HapusTengah(simpul &dl, char elemen);
void Cetak(simpul dl);

int main()
{
	char huruf, huruf2;
	simpul dl = NULL;
	int i;
	cout<<"Operasi pada Doubly Linked List"<<endl;
	// Sisip Depan
	cout<<"Penyisipan Simpul di Depan"<<endl;
	for (i = 1; i <= 4; i++)
	{
		cout<<"Masukkan Huruf: ";
		cin>>huruf;
		SisipDepan(dl, huruf);
	}
	Cetak(dl);
	
	// Sisip Belakang
	cout<<"Penyisipan Simpul Belakang"<<endl;
	for (i = 1; i <= 4; i++)
	{
		cout<<"Masukkan Huruf: ";
		cin>>huruf;
		SisipBelakang(dl, huruf);
	}	
	Cetak(dl);
	
	// Sisip Simpul Setelah Simpul Tertentu
	cout<<"Masukkan Huruf: ";
	cin>>huruf;
	cout<<"Disisipkan setelah Huruf: ";
	cin>>huruf2;
	cout<<huruf<<" Disisipkan setelah "<<huruf2<<endl;
	SisipTengah1(dl, huruf, huruf2);
	Cetak(dl);
	
	// Sisip Simpul Sebelum Simpul Tertentu
	cout<<"Masukan Huruf: "; 
	cin>>huruf;
	cout<<"Disisipkan sebelum Huruf: ";
	cin>>huruf2;
	cout<<huruf<<" Disisipkan sebelum "<<huruf2<<endl;
	SisipTengah2(dl, huruf, huruf2);
	Cetak(dl);
	
	// Hapus Simpul Depan
	cout<<"Setelah Hapus Simpul Depan"<<endl;
	HapusDepan(dl);
	Cetak(dl);
	
	// Hapus Simpul Belakang
	cout<<"Setelah Hapus Simpul Belakang"<<endl;
	HapusBelakang(dl);
	Cetak(dl);
	
	// Hapus Simpul Tengah
	cout<<"Masukkan Huruf Tengah yang akan dihapus: ";
	cin>>huruf;
	HapusTengah(dl, huruf);
	Cetak(dl);
	
	getch();
}

// FUNCTION SISIP SIMPUL DI DEPAN
void SisipDepan(simpul &dl, char elemen)
{
	simpul baru;
	baru = (simpul) malloc(sizeof(simpul));
	baru->isi = elemen;
	baru->kanan = NULL;
	baru->kiri = NULL;
	if (dl == NULL)
	{
		dl = baru;
	}
	else
	{
		baru->kanan = dl;
		dl->kiri = baru;
		dl = baru;
	}
}

// FUNCTION SISIP SIMPUL SETELAH SIMPUL TERTENTU
void SisipTengah1(simpul &dl, char elemen1, char elemen2)
{
	simpul bantu, baru;
	baru = (simpul) malloc(sizeof(simpul));
	baru->isi = elemen1 ;
	baru->kanan = NULL;
	baru->kiri = NULL;

	if (dl == NULL)
	{
		cout<<"List Kosong"<<endl;
	}
	else
	{
		bantu = dl;
		while (bantu->kanan->isi != elemen2)
		{
			bantu = bantu->kanan;
		}
		
		baru->kanan = bantu->kanan;
		baru->kiri = bantu;
		bantu->kanan->kiri = baru;
		bantu->kanan = baru;
	}
}

// FUNCTION SISIP SIMPUL SEBELUM SIMPUL TERTENTU
void SisipTengah2(simpul &dl, char elemen1, char elemen2)
{
	simpul bantu, baru;
	baru = (simpul) malloc(sizeof(simpul));
	baru->isi = elemen1;
	baru->kanan = NULL;
	baru->kiri = NULL;
	if (dl == NULL)
	{
		cout<<"List kosong"<<endl;
	}
	else
	{
		bantu = dl;
		while (bantu->kanan->isi != elemen2)
		{
			bantu = bantu->kanan;
		}
		bantu->kanan = bantu->kanan;
		bantu->kiri = bantu;
		bantu->kanan->kiri = baru;
		bantu->kanan = baru;
	}
}

// FUNCTION SISIP SIMPUL DI BELAKANG
void SisipBelakang(simpul &dl, char elemen)
{
	simpul bantu, baru;
	baru = (simpul) malloc(sizeof(simpul));
	baru->isi = elemen;
	baru->kanan = NULL;
	baru->kiri = NULL;
	if (dl == NULL)
	{
		dl = baru;
	}
	else
	{
		bantu = dl;
		while (bantu->kanan != NULL)
		{
			bantu = bantu->kanan;
		}
		bantu->kanan = baru;
		bantu->kiri = bantu;
	}
}

// Function Mencetak Isi Linked List
void Cetak(simpul dl)
{
	cout<<endl;
	simpul bantu;
	if (dl == NULL)
	{
		cout<<"Linked List kosong"<<endl;
	}
	else
	{
		bantu = dl;
		cout<<"Isi Linked List: ";
		while (bantu->kanan != NULL)
		{
			cout<<bantu->isi<<"<==>";
			bantu = bantu->kanan;
		}
		cout<<bantu->isi;
	}
	cout<<endl;
}

// FUNCTION HAPUS SIMPUL DEPAN
void HapusDepan(simpul &dl)
{
	simpul hapus;
	if (dl == NULL)
	{
		cout<<"Linked list kosong"<<endl;
	}
	else
	{
		hapus = dl;
		dl = dl->kanan;
		dl->kiri = NULL;
		hapus->kanan = NULL;
		free(hapus);
	}
}

// FUNCTION HAPUS SIMPUL BELAKANG
void HapusBelakang(simpul &dl)
{
	simpul bantu, hapus;
	if (dl == NULL)
	{
		cout<<"Linked list kosong"<<endl;
	}
	else
	{
		bantu = dl;
		
		while (bantu->kanan->kanan != NULL)
		{
			bantu = bantu->kanan;
		}
		
		hapus = bantu->kanan;
		bantu->kanan = NULL;
		hapus->kiri = NULL;
		free(hapus);
	}
}

// FUNCTION HAPUS SIMPUL DI TENGAH
void HapusTengah(simpul &dl, char elemen)
{
	simpul bantu, hapus;
	if (dl == NULL)
	{
		cout<<"Linked list kosong"<<endl;
	}
	else
	{
		bantu = dl;
		while (bantu->kanan->isi != elemen)
		{
			bantu = bantu->kanan;
		}
		hapus = bantu->kanan;
		bantu->kanan->kanan->kiri = bantu;
		bantu->kanan = bantu->kanan->kanan;
		hapus->kanan = NULL;
		free(hapus);
	}
}

