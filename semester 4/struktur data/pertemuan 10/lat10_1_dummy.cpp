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
    
    cout<<"Operasi pada Single Linked List"<<endl;
    cout<<endl;
    // Sisi depan
    cout<<"Penyisipan Simpul Di Depan"<<endl;
    cout<<"Masukan Huruf: "; 
    cin>>huruf;
    SisipDepan(l, huruf);
    cout<<"Masukan Huruf: "; 
    cin>>huruf;
    SisipDepan(l, huruf);
    cout<<"Masukan Huruf: "; 
    cin>>huruf;
    SisipDepan(l, huruf);
    cout<<"Masukan Huruf: "; 
    cin>>huruf;
    SisipDepan(l, huruf);
    Cetak(l);
    
    cout<<endl;
    // Sisi Belakang
    cout<<"Penyisipan Simpul Di Belakang"<<endl;
    cout<<"Masukan Huruf: "; 
    cin>>huruf;
    SisipBelakang(l, huruf);
    cout<<"Masukan Huruf: "; 
    cin>>huruf;
    SisipBelakang(l, huruf);
    cout<<"Masukan Huruf: "; 
    cin>>huruf;
    SisipBelakang(l, huruf);
    cout<<"Masukan Huruf: "; 
    cin>>huruf;
    SisipBelakang(l, huruf);
    Cetak(l);
    
    cout<<endl;
    // Sisip Simpul Setelah Simpul Tertentu
    cout<<"Masukkan Huruf: ";
    cin>>huruf;
    cout<<"Disisip Setelah Huruf: ";
    cin>>huruf2;
    cout<<huruf<<" Disisip Setelah "<<huruf2<<endl; 
    SisipTengah1(l, huruf, huruf2);
    Cetak(l);
    
    cout<<endl;
    // Sisip Simpul Sebelum Simpul Tertentu
    cout<<"Masukkan Huruf: ";
    cin>>huruf;
    cout<<"Disisip Sebelum Huruf: ";
    cin>>huruf2;
    cout<<huruf<<" Disisip Sebelum "<<huruf2<<endl;
    SisipTengah2(l, huruf, huruf2);
    Cetak(l);
    
    cout<<endl;
    // Hapus Simpul Depan
    cout<<"Setelah Hapus Simpul Depan"<<endl;
    HapusDepan(l);
    Cetak(l);
    
    cout<<endl;
    // Hapus Simpul Belakang
    HapusBelakang(l);
    Cetak(l);
    
    cout<<endl;
    // Hapus Simpul Tengah
    cout<<"Masukkan Huruf Tengah yang akan dihapus:";
    cin>>huruf;
    HapusTengah(l, huruf);
    Cetak(l);
    
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
