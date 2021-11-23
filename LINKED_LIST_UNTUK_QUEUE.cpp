#include <iostream>
#include <cstdlib>

using namespace std;

struct SIMPUL 
{
   int data;
   struct SIMPUL *next;
};

struct SIMPUL* front = NULL;
struct SIMPUL* rear = NULL;
struct SIMPUL* temp;

void Insert() 
{
   int val;
   cout<<"Masukkan Data: ";
   cin>>val;
   if (rear == NULL) 
   {
      rear = (struct SIMPUL*)malloc(sizeof(struct SIMPUL));
      rear->next = NULL;
      rear->data = val;
      front = rear;
   } 
   else 
   {
      temp=(struct SIMPUL*)malloc(sizeof(struct SIMPUL));
      rear->next = temp;
      temp->data = val;
      temp->next = NULL;
      rear = temp;
   }
}

void Delete() 
{
   temp = front;
   if (front == NULL) 
   {
      cout<<"Queue Kosong!"<<endl;
      return;
   }
   else if (temp->next != NULL) 
   {
      temp = temp->next;
      cout<<"Data terhapus: "<<front->data<<endl;
      free(front);
      front = temp;
   } 
   else 
   {
      cout<<"Data terhapus: "<<front->data<<endl;
      free(front);
      front = NULL;
      rear = NULL;
   }
}

void Display() 
{
   temp = front;
   
   if ((front == NULL) && (rear == NULL)) 
   {
      cout<<"Queue Kosong!"<<endl;
      return;
   }
   
   cout<<"Isi dari Queue: ";
   while (temp != NULL) 
   {
      cout<<temp->data<<"->";
      temp = temp->next;
   }
   
   cout<<endl;
}

int main() 
{
   int pil;
   
   cout<<"1. Input data Queue"<<endl;
   cout<<"2. Hapus data Queue"<<endl;
   cout<<"3. Tampilkan isi Queue"<<endl;
   cout<<"4. Keluar"<<endl;
   cout<<"------------------------"<<endl;
   do 
   {
      cout<<"Masukkan Pilihan: ";
      cin>>pil;
      
      switch (pil) 
	  {
        case 1: 
			Insert();
        break;
        case 2: 
			Delete();
        break;
        case 3: 
			Display();
        break;
		default:
			cout<<"Keluar"<<endl;
        break;
      }
   } 
   while(pil < 4);
   
   return 0;
}

