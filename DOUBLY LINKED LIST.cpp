#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

struct SIMPUL
{
    int value;
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

void InsertKiri(int data)
{
    struct SIMPUL* newItem;
    newItem = new SIMPUL;
    if(FIRST == NULL)
    {
        FIRST = newItem;
        newItem->prev = NULL;
        newItem->value = data;
        newItem->next = NULL;
        LAST = newItem;
    }
    else
    {
        newItem->next = FIRST;
        newItem->value = data;
        newItem->prev = NULL;
        FIRST->prev = newItem;
        FIRST = newItem;
    }
}

void InsertKanan(int data)
{
    struct SIMPUL* newItem;
    newItem = new SIMPUL;
    newItem->value = data;
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
}

void InsertTengah(int old, int data)
{
    struct SIMPUL* newItem;
    newItem = new SIMPUL;
    struct SIMPUL* temp;
    temp = FIRST;
    if(FIRST == NULL)
    {
        cout<<"Tidak bisa insert tengah"<<endl;
        return;
    }
    if(FIRST == LAST)
    {
        if(FIRST->value != old)
        {
            cout<<"Tidak bisa insert tengah"<<endl;
            return;
        }
        newItem->value = data;
        FIRST->next = newItem;
        newItem->next = NULL;
        FIRST->prev = NULL;
        newItem->prev = FIRST;
        LAST = newItem;
        return;
    }
    if(LAST->value == data)
    {
        newItem->next = NULL;
        newItem->prev = LAST;
        LAST->next = newItem;
        LAST = newItem;
        return;
    }
    while(temp->value != old)
    {
        temp = temp->next;
        if(temp == NULL)
        {
            cout<<"Tidak bisa insert tengah, karena "<<data<<" tidak ada."<<endl;
            return;
        }
    }

    newItem->next = temp->next;
    newItem->prev = temp;
    newItem->value = data;
    temp->next->prev = newItem;
    temp->next = newItem;
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
        return;
    }
    else
    {
        struct SIMPUL* p;
        p = FIRST;
        FIRST = FIRST->next;
        FIRST->prev = NULL;
        delete p;
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
        return;
    }
    else
    {
        struct SIMPUL* p;
        p = LAST;
        LAST = LAST->prev;
        LAST->next = NULL;
        delete p;
    }
}

void DeleteTengah(int data)
{
    struct SIMPUL* temp;
    temp = FIRST;
    if(FIRST == LAST)
    {
        if(FIRST->value != data)
        {
            cout<<"Tidak bisa delete tengah"<<endl;
            return;
        }
        FIRST = NULL;
        LAST = NULL;
        delete temp;
        return;
    }
    if(FIRST->value == data)
    {
        FIRST = FIRST->next;
        FIRST->prev = NULL;
        delete temp;
        return;
    }
    else if(LAST->value == data)
    {
        temp = LAST;
        LAST = LAST->prev;
        LAST->next = NULL;
        delete temp;
        return;
    }
    while(temp->value != data)
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
    while(temp != NULL)
    {
        cout<<temp->value<<"->";
        temp = temp->next;
    }
    puts("");
}

int dltfrst()
{
    if(FIRST == NULL)
    {
        return 0;
    }
    int prev;
    prev = FIRST->value;
    if(FIRST == LAST)
    {
        struct SIMPUL* p;
        p = FIRST;
        FIRST = NULL;
        LAST = NULL;
        delete p;
        return prev;
    }
    else
    {
        struct SIMPUL* p;
        p = FIRST;
        FIRST = FIRST->next;
        FIRST->prev = NULL;
        delete p;
        return prev;
    }
}

int dltlast()
{
    if(FIRST == NULL) return 0;
    int prev;
    prev = LAST->value;
    if(FIRST == LAST)
    {
        struct SIMPUL* p;
        p = FIRST;
        FIRST = NULL;
        LAST = NULL;
        delete p;
        return prev;
    }
    else
    {
        struct SIMPUL* p;
        p = LAST;
        LAST = LAST->prev;
        LAST->next = NULL;
        delete p;
        return prev;
    }
}


int main()
{
    init();

    int pil, data, old, newitem;

    cout<<"1. Input Kiri"<<endl;
    cout<<"2. Input Kanan"<<endl;
    cout<<"3. Input Tengah"<<endl;
    cout<<"4. Hapus Kiri"<<endl;
    cout<<"5. Hapus Kanan"<<endl;
    cout<<"6. Delete Tengah"<<endl;
    cout<<"7. Tampilkan Isi"<<endl;
    cout<<"8. Keluar"<<endl;
    cout<<"----------------------"<<endl;

    do
    {
        cout<<"Masukkan Pilihan: ";
        cin>>pil;
        
        switch(pil)
        {
            case 1:
                cout<<"Masukkan data: ";
                cin>>data;
                InsertKiri(data);
                Display();
            break;
            case 2:
                cout<<"Masukkan data: ";
                cin>>data;
                InsertKanan(data);
                Display();
            break;
            case 3:
                cout<<"Masukkan Data Lama: ";
                cin>>old;
                cout<<"Masukkan Data Baru: ";
                cin>>newitem;
                InsertTengah(old,newitem);
                Display();
            break;
            case 4:
                DeleteKiri();
                Display();
            break;
            case 5:
                DeleteKanan();
                Display();
            break;
            case 6:
                cout<<"Masukkan data yang ingin dihapus: ";
                cin>>data;
                DeleteTengah(data);
                Display();
            break;
            case 7:
                Display();
            break;
            default:
                cout<<"Keluar"<<endl;
            break;
        }
    }
    while(pil < 8);
    return 0;
}

