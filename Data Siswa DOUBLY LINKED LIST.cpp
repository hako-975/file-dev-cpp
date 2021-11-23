#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<conio.h>

using namespace std;

struct SIMPUL
{
    string nama;
    long long int nim;
    char gender;
    int nilai;
    struct SIMPUL* next;
    struct SIMPUL* prev;
};

struct SIMPUL* FIRST;
struct SIMPUL* LAST;

void init()
{
    FIRST = NULL;
    LAST = NULL;
}

void InsertKiri(string nama, long long int nim, char gender, int nilai)
{
    struct SIMPUL* newItem;
    newItem = new SIMPUL;
    if(FIRST == NULL)
    {
        FIRST = newItem;
        newItem->prev = NULL;
        newItem->nama = nama;
        newItem->nim = nim;
        newItem->gender = gender;
        newItem->nilai = nilai;
        newItem->next = NULL;
        LAST = newItem;
    }
    else
    {
        newItem->next = FIRST;
        newItem->nama = nama;
        newItem->nim = nim;
        newItem->gender = gender;
        newItem->nilai = nilai;
        newItem->prev = NULL;
        FIRST->prev = newItem;
        FIRST = newItem;
    }
    cout<<"Data Berhasil ditambahkan!"<<endl;
}

void InsertKanan(string nama, long long int nim, char gender, int nilai)
{
    struct SIMPUL* newItem;
    newItem = new SIMPUL;
    newItem->nama = nama;
    newItem->nim = nim;
    newItem->gender = gender;
    newItem->nilai = nilai;
    if(FIRST == NULL)
    {
        FIRST = newItem;
        newItem->prev = NULL;
        newItem->next = NULL;
        LAST = newItem;
    }
    else
    {
        newItem->prev = LAST;
        LAST->next = newItem;
        newItem->next = NULL;
        LAST = newItem;
    }
    cout<<"Data Berhasil ditambahkan!"<<endl;
}

void DeleteKiri()
{
    if(FIRST == NULL)
    {
        return;
    }
    if(FIRST == LAST)
    {
        struct SIMPUL* p;
        p = FIRST;
        FIRST = NULL;
        LAST = NULL;
        delete p;
        cout<<"Data berhasil dihapus!"<<endl;
        return;
    }
    else
    {
        struct SIMPUL* p;
        p = FIRST;
        FIRST = FIRST->next;
        FIRST->prev = NULL;
        delete p;
        cout<<"Data berhasil dihapus!"<<endl;
    }
}

void DeleteKanan()
{
    if(FIRST == NULL) return;
    
    if(FIRST == LAST)
    {
        struct SIMPUL* p;
        p = FIRST;
        FIRST = NULL;
        LAST = NULL;
        delete p;
        cout<<"Data berhasil dihapus!"<<endl;
        return;
    }
    else
    {
        struct SIMPUL* p;
        p = LAST;
        LAST = LAST->prev;
        LAST->next = NULL;
        delete p;
        cout<<"Data berhasil dihapus!"<<endl;
    }
}

void DeleteTengah(long long int nim)
{
    struct SIMPUL* temp;
    temp = FIRST;
    
    if(FIRST == LAST)
    {
        if(FIRST->nim != nim)
        {
            cout<<"NIM tidak ditemukan!"<<endl;
            return;
        }
        FIRST = NULL;
        LAST = NULL;
        delete temp;
        cout<<"Data dengan NIM "<<nim<<" berhasil dihapus!"<<endl;
        return;
    }
    
    if(FIRST->nim == nim)
    {
        FIRST = FIRST->next;
        FIRST->prev = NULL;
        delete temp;
        cout<<"Data dengan NIM "<<nim<<" berhasil dihapus!"<<endl;
        return;
    }
    else if(LAST->nim == nim)
    {
        temp = LAST;
        LAST = LAST->prev;
        LAST->next = NULL;
        delete temp;
        cout<<"Data dengan NIM "<<nim<<" berhasil dihapus!"<<endl;
        return;
    }
    
    while(temp->nim != nim)
    {
        temp = temp->next;
        if(temp == NULL)
        {
            cout<<"data kosong"<<endl;
            return;
        }
    }
    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;
    delete temp;
}



void Display()
{
    struct SIMPUL* temp;
    temp = FIRST;
    cout<<"Daftar Data Siswa"<<endl;
    while(temp != NULL)
    {
    	cout<<"------------------------------"<<endl;
        cout<<"Nama: "<<temp->nama<<endl;
        cout<<"NIM: "<<temp->nim<<endl;
        cout<<"Gender: "<<temp->gender<<endl;
        cout<<"Nilai: "<<temp->nilai<<endl;
        temp = temp->next;
    }
    puts("");
}

void Insert()
{
    
}

int main()
{
    init();
	
	int pil;
    string nama;
	long long int nim;
	char gender;
	int nilai;

    do
    {
    	cout<<"Program Data Siswa"<<endl;
		cout<<"1. Input Kiri"<<endl;
	    cout<<"2. Input Kanan"<<endl;
	    cout<<"3. Hapus Kiri"<<endl;
	    cout<<"4. Hapus Kanan"<<endl;
	    cout<<"5. Hapus Tengah"<<endl;
	    cout<<"6. Tampilkan Isi"<<endl;
	    cout<<"7. Keluar"<<endl;
	    cout<<"----------------------"<<endl;
    
        cout<<"Masukkan Pilihan: ";
        cin>>pil;
        
        switch(pil)
        {
            case 1:
			    cout<<"Masukkan Nama: ";
			    cin.ignore();
			    getline(cin,nama, '\n');
			
			    cout<<"Masukkan NIM: ";
			    cin>>nim;
			    
			    cout<<"Masukkan Gender: ";
			    cin>>gender;
			
			    cout<<"Masukkan Nilai: ";
			    cin>>nilai;
                InsertKiri(nama, nim, gender, nilai);
                
				getch();
				system("cls");
		    break;
            case 2:
            	cout<<"Masukkan Nama: ";
            	cin.ignore();
			    getline(cin,nama, '\n');
			
			    cout<<"Masukkan NIM: ";
			    cin>>nim;
			    
			    cout<<"Masukkan Gender: ";
			    cin>>gender;
			
			    cout<<"Masukkan Nilai: ";
			    cin>>nilai;
                InsertKanan(nama, nim, gender, nilai);
                getch();
				system("cls");
            break;
            case 3:
                DeleteKiri();
                getch();
				system("cls");
            break;
            case 4:
                DeleteKanan();
                getch();
				system("cls");
            break;
            case 5:
                cout<<"Masukkan NIM untuk menghapus data siswa: ";
                cin>>nim;
                DeleteTengah(nim);
                getch();
				system("cls");
            break;
            case 6:
                Display();
                getch();
				system("cls");
            break;
            default:
                cout<<"Keluar"<<endl;
                getch();
				system("cls");
            break;
        }
    }
    while(pil < 7);
    return 0;
}

