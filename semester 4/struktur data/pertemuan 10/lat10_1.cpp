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

// Prototype Function
void SisipDepan(simpul &l, char elemen);
void SisipBelakang(simpul &l, char elemen);
void SisipTengah1(simpul &l, char elemen1, char elemen2);
void SisipTengah2(simpul &l, char elemen1, char elemen2);
void HapusDepan(simpul &l);
void HapusBelakang(simpul &l);
void HapusTengah(simpul &l, char elemen);
void Cetak(simpul l);

int main()
{
    char huruf, huruf2;
    simpul l = NULL;
    int pil;
    char lagi;
    
    do
    {
    	system("cls");
    	cout<<"Operasi pada Single Linked List"<<endl;
	    cout<<"1. Penyisipan Simpul Di Depan"<<endl;
	    cout<<"2. Penyisipan Simpul Di Belakang"<<endl;
	    cout<<"3. Penyisipan Simpul Setelah"<<endl;
		cout<<"4. Penyisipan Simpul Sebelum"<<endl;
		cout<<"5. Hapus Simpul Depan"<<endl;
		cout<<"6. Hapus Simpul Belakang"<<endl;
		cout<<"7. Hapus Simpul Tengah"<<endl;
		cout<<"8. Cetak Simpul"<<endl;
		cout<<"9. Keluar"<<endl;
	    cout<<endl;
	    cout<<"Masukkan Pilihan: ";
	    cin>>pil;
	    
	    switch (pil)
		{
			case 1:
				cout<<"Masukan Huruf: "; 
			    cin>>huruf;
			    SisipDepan(l, huruf);
			    cout<<endl;
			break;
			case 2:
				cout<<"Masukan Huruf: "; 
			    cin>>huruf;
			    SisipBelakang(l, huruf);
			    cout<<endl;
			break;
			case 3:
				cout<<"Masukkan Huruf: ";
			    cin>>huruf;
			    cout<<"Disisip Setelah Huruf: ";
			    cin>>huruf2;
			    cout<<huruf<<" Disisip Setelah "<<huruf2<<endl; 
			    SisipTengah1(l, huruf, huruf2);
			    cout<<endl;
			break;
			case 4:
				cout<<"Masukkan Huruf: ";
			    cin>>huruf;
			    cout<<"Disisip Sebelum Huruf: ";
			    cin>>huruf2;
			    cout<<huruf<<" Disisip Sebelum "<<huruf2<<endl;
			    SisipTengah2(l, huruf, huruf2);
			    cout<<endl;
			break;
			case 5:
				cout<<"Telah menghapus Simpul Depan"<<endl;
	    		HapusDepan(l);
	    		cout<<endl;
	    	break;
	    	case 6:
	    		cout<<"Telah menghapus Simpul Belakang"<<endl;
	    		HapusBelakang(l);
	    		cout<<endl;
			break;
			case 7:
				cout<<"Masukkan Huruf Tengah yang akan dihapus:";
			    cin>>huruf;
			    HapusTengah(l, huruf);
			    cout<<endl;
			break;
			case 8:
				Cetak(l);
				cout<<endl;
				getch();
			break;
			default:
				cout<<"Keluar dari Program"<<endl;
				exit(1);
			break;
		}
	} while (pil < 10);
    
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
