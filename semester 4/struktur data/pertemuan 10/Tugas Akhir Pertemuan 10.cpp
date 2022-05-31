#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

typedef struct node *simpul;

struct node 
{
    char isi;
    simpul next;    
};

typedef struct nodeDoubly *simpulDoubly;
struct nodeDoubly
{
	char isi;
	simpulDoubly kanan;
	simpulDoubly kiri;
};

// Prototype Function
void SisipDepan(simpul &l, char elemen);
void SisipBelakang(simpul &l, char elemen);
void SisipTengah1(simpul &l, char elemen1, char elemen2);
void SisipTengah2(simpul &l, char elemen1, char elemen2);
void HapusDepan(simpul &l);
void HapusBelakang(simpul &l);
void HapusTengah(simpul &l, char elemen);
void Cetak(simpul l);

// Doubly
void SisipDepanDoubly(simpulDoubly &dl, char elemen);
void SisipBelakangDoubly(simpulDoubly &dl, char elemen);
void SisipTengah1Doubly(simpulDoubly &dl, char elemen1, char elemen2);
void SisipTengah2Doubly(simpulDoubly &dl, char elemen1, char elemen2);
void HapusDepanDoubly(simpulDoubly &dl);
void HapusBelakangDoubly(simpulDoubly &dl);
void HapusTengahDoubly(simpulDoubly &dl, char elemen);
void CetakDoubly(simpulDoubly dl);


int main()
{
    char huruf, huruf2;
    simpul l = NULL;
    simpulDoubly dl = NULL;
    int i, pil;
    
    cout<<"1. Singly Linked List"<<endl;
	cout<<"2. Doubly Linked List"<<endl;
	cout<<"Masukkan Pilihan: ";
	cin>>pil;
	switch (pil)
	{
		case 1:
			cout<<"OPERASI PADA SINGLE LINKED LIST"<<endl<<endl;
			cout<<"Penyisipan Simpul Di Depan"<<endl<<endl;
			cout<<"Masukan Huruf: "; 
			cin>>huruf;
			SisipDepan (l, huruf);
			cout<<"Masukan Huruf: "; 
			cin>>huruf;
			SisipDepan (l, huruf);
			cout<<"Masukan Huruf: "; 
			cin>>huruf;
			SisipDepan (l, huruf);
			cout<<"Masukan Huruf: "; 
			cin>>huruf;
			SisipDepan (l, huruf);
			Cetak (l);
			cout<<"\n\nPenyisipan Simpul Di Belakang"<<endl<<endl;
			cout<<"Masukan Huruf: "; 
			cin>>huruf;
			SisipBelakang (l, huruf);
			cout<<"Masukan Huruf: "; 
			cin>>huruf;
			SisipBelakang (l, huruf);
			cout<<"Masukan Huruf: "; 
			cin>>huruf;
			SisipBelakang (l, huruf);
			cout<<"Masukan Huruf: "; 
			cin>>huruf;
			SisipBelakang (l, huruf);
			Cetak (l);
			cout<<endl<<endl<<"Masukan Huruf: "; 
			cin>>huruf;
			cout<<"Disisip Setelah Huruf: "; 
			cin>>huruf2;
			cout<<huruf<<" Disisip Setelah "<<huruf2<<endl;
			SisipTengah1 (l, huruf, huruf2);
			Cetak(l);
			cout<<endl<<endl<<"Masukan Huruf: "; 
			cin>>huruf;
			cout<<"Disisip Sebelum Huruf: "; 
			cin>>huruf2;
			cout<<huruf<<" Disisip Sebelum "<<huruf2<<endl;
			SisipTengah2 (l, huruf, huruf2);
			Cetak (l) ;
			cout<<endl<<endl<<"Setelah Hapus Simpul Depan "<<endl;
			HapusDepan (l);
			Cetak (l);
			cout<<endl<<endl<<"Setelah Hapus Simpul Belakang "<<endl;
			HapusBelakang (l);
			Cetak (l);
			cout<<"\n\nMasukkan Huruf Tengah Yang akan dihapus: ";
			cin>>huruf;
			HapusTengah (l,huruf);
			Cetak (l);
		break;
		case 2:
			cout<<"Operasi pada Doubly Linked List"<<endl;
			// Sisip Depan
			cout<<"Penyisipan Simpul di Depan"<<endl;
			for (i = 1; i <= 4; i++)
			{
				cout<<"Masukkan Huruf: ";
				cin>>huruf;
				SisipDepanDoubly(dl, huruf);
			}
			CetakDoubly(dl);
			
			// Sisip Belakang
			cout<<"Penyisipan Simpul Belakang"<<endl;
			for (i = 1; i <= 4; i++)
			{
				cout<<"Masukkan Huruf: ";
				cin>>huruf;
				SisipBelakangDoubly(dl, huruf);
			}	
			CetakDoubly(dl);
			
			// Sisip Simpul Setelah Simpul Tertentu
			cout<<"Masukkan Huruf: ";
			cin>>huruf;
			cout<<"Disisipkan setelah Huruf: ";
			cin>>huruf2;
			cout<<huruf<<" Disisipkan setelah "<<huruf2<<endl;
			SisipTengah1Doubly(dl, huruf, huruf2);
			CetakDoubly(dl);
			
			// Sisip Simpul Sebelum Simpul Tertentu
			cout<<"Masukan Huruf: "; 
			cin>>huruf;
			cout<<"Disisipkan sebelum Huruf: ";
			cin>>huruf2;
			cout<<huruf<<" Disisipkan sebelum "<<huruf2<<endl;
			SisipTengah2Doubly(dl, huruf, huruf2);
			CetakDoubly(dl);
			
			// Hapus Simpul Depan
			cout<<"Setelah Hapus Simpul Depan"<<endl;
			HapusDepanDoubly(dl);
			CetakDoubly(dl);
			
			// Hapus Simpul Belakang
			cout<<"Setelah Hapus Simpul Belakang"<<endl;
			HapusBelakangDoubly(dl);
			CetakDoubly(dl);
			
			// Hapus Simpul Tengah
			cout<<"Masukkan Huruf Tengah yang akan dihapus: ";
			cin>>huruf;
			HapusTengahDoubly(dl, huruf);
			CetakDoubly(dl);
		break;
		default:
			cout<<"Pilihan yang Anda masukkan salah!"<<endl;
		break;		
	}
	
    getch();
}

// FUNCTION SISIP SIMPUL DI DEPAN
void SisipDepan(simpul &l, char elemen)
{
    simpul baru;
    baru = (simpul) malloc(sizeof(simpul));
    baru->isi = elemen;
    baru->next = NULL;
    
    if (l == NULL)
    {
        l = baru;
    }
    else 
    {
        baru->next = l;
        l = baru;
    }
}

// FUNCTION SISIP SIMPUL SETELAH SIMPUL TERTENTU
void SisipTengah1(simpul &l, char elemen1, char elemen2)
{
    simpul bantu, baru;
    baru = (simpul) malloc(sizeof(simpul));
    baru->isi = elemen1;
    baru->next = NULL;
    
    if (l == NULL)
    {
        cout<<"List kosong"<<endl;
    }
    else
    {
        bantu = l;
        
        while (bantu->isi != elemen2)
        {
            bantu = bantu->next;
        }
        
        baru->next = bantu->next;
        bantu->next = baru;
    }
}

// FUNCTION SISIP SIMPUL SEBELUM SIMPUL TERTENTU
void SisipTengah2(simpul &l, char elemen1, char elemen2)
{
    simpul bantu, baru;
    baru = (simpul) malloc(sizeof(simpul));
    baru->isi = elemen1;
    baru->next = NULL;
    
    if (l == NULL)
    {
        cout<<"List kosong"<<endl;
    }
    else
    {
        bantu = l;
        
        while (bantu->next->isi != elemen2)
        {
            bantu = bantu->next;    
        }
        
        baru->next = bantu->next;
        bantu->next = baru;
    }   
}

// FUNCTION SISIP SIMPUL DI BELAKANG
void SisipBelakang(simpul &l, char elemen)
{
    simpul bantu, baru;
    baru = (simpul) malloc(sizeof(simpul));
    baru->isi = elemen;
    baru->next = NULL;
    if (l == NULL)
    {
        l = baru;
    }
    else
    {
        bantu = l;
        
        while (bantu->next != NULL)
        {
            bantu = bantu->next;    
        }
        
        bantu->next = baru;
    }
}

// FUNCTION MENCETAK ISI LINKED LIST
void Cetak(simpul l)
{
    simpul bantu;
    if (l == NULL)
    {
        cout<<"Linked list kosong"<<endl;
    }
    else
    {
        bantu = l;
        cout<<"Isi Linked List: ";
        
        while (bantu->next != NULL)
        {
            cout<<bantu->isi<<"-->";
            bantu = bantu->next;    
        }
        
        cout<<bantu->isi;
    }
}

// FUNCTION HAPUS SIMPUL DEPAN
void HapusDepan(simpul &l)
{
    simpul hapus;
    if (l == NULL)
    {
        cout<<"Linked list kosong"<<endl;
    }
    else
    {
        hapus = l;
        l = l->next;
        free(hapus);
    }
}

// FUNCTION HAPUS SIMPUL BELAKANG
void HapusBelakang(simpul &l)
{
    simpul bantu, hapus;
    if (l == NULL)
    {
        cout<<"Linked list kosong"<<endl;
    }
    else
    {
        bantu = l;
        
        while (bantu->next->next != NULL)
        {
            bantu = bantu->next;
        }
        
        hapus = bantu->next;
        bantu->next = NULL;
        free(hapus);
    }
}

// FUNCTION HAPUS SIMPUL DI TENGAH
void HapusTengah(simpul &l, char elemen)
{
    simpul bantu, hapus;
    
    if (l == NULL)
    {
        cout<<"Linked list kosong"<<endl;
    }
    else
    {
        bantu = l;
        
        while (bantu->next->isi != elemen)
        {
            bantu = bantu->next;
        }
        
        hapus = bantu->next;
        bantu->next = bantu->next->next;
        hapus->next = NULL;
        free(hapus);
    }
}


// FUNCTION SISIP SIMPUL DI DEPAN
void SisipDepanDoubly(simpulDoubly &dl, char elemen)
{
	simpulDoubly baru;
	baru = (simpulDoubly) malloc(sizeof(simpulDoubly));
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
void SisipTengah1Doubly(simpulDoubly &dl, char elemen1, char elemen2)
{
	simpulDoubly bantu, baru;
	baru = (simpulDoubly) malloc(sizeof(simpulDoubly));
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
void SisipTengah2Doubly(simpulDoubly &dl, char elemen1, char elemen2)
{
	simpulDoubly bantu, baru;
	baru = (simpulDoubly) malloc(sizeof(simpulDoubly));
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
void SisipBelakangDoubly(simpulDoubly &dl, char elemen)
{
	simpulDoubly bantu, baru;
	baru = (simpulDoubly) malloc(sizeof(simpulDoubly));
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

// Function Mencetak Doubly Isi Linked List
void CetakDoubly(simpulDoubly dl)
{
	cout<<endl;
	simpulDoubly bantu;
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
void HapusDepanDoubly(simpulDoubly &dl)
{
	simpulDoubly hapus;
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
void HapusBelakangDoubly(simpulDoubly &dl)
{
	simpulDoubly bantu, hapus;
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
void HapusTengahDoubly(simpulDoubly &dl, char elemen)
{
	simpulDoubly bantu, hapus;
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

