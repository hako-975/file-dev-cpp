#include<iostream>
#include<stdlib.h>
using namespace std;

// Deklarasi Linked List
struct Node
{
	int data;
	struct Node* link;
};

struct Node* top;

void push(int data)
{
	// Buat temp node baru dan alokasikan memori
	struct Node* temp;
	temp = new Node();

	// Jika stack penuh
	if (!temp)
	{
		cout<<"Stack Penuh";
	}

	// Inisialisasi data ke dalam data temp
	temp->data = data;

	// Masukkan referensi pointer atas ke temp link
	temp->link = top;

	// Jadikan temp sebagai bagian atas Stack
	top = temp;
}

// Cek stack kosong
int isEmpty()
{
	return top == NULL;
}

// Mengembalikan elemen teratas dalam stack
int peek()
{
	
	// periksa apakah stack kosong
	if (!isEmpty())
	{
		return top->data;
	}
}

// Memunculkan elemen teratas dari stack
void pop()
{
	struct Node* temp;

	// cek stack kosong
	if (top == NULL)
	{
		cout<<"Stack kosong!"<<endl;
	}
	else
	{
		
		// tempatkan temp ke atas
		temp = top;

		// buat link kedua berada di atas
		top = top->link;

		// putuskan link pertama dan kedua
		temp->link = NULL;

		// set memori link ke atas
		free(temp);
	}
}

// menampilkan data
void display()
{
	struct Node* temp;

	// cek stack kosong
	if (top == NULL)
	{
		cout<<"Stack kosong!"<<endl;
	}
	else
	{
		temp = top;
		while (temp != NULL)
		{

			// tampilkan node data
			cout << temp->data << "-> ";

			// isi temp dengan temp terakhir
			temp = temp->link;
		}
		
		cout<<endl;
	}
}

int main()
{
	int pil;
	int angka;
	
	cout<<"Program Single Linked List dengan Stack"<<endl;
	cout<<"1. Push"<<endl;
	cout<<"2. Pop"<<endl;
	cout<<"3. Tampilkan Isi"<<endl;
	cout<<"4. Keluar"<<endl;
	cout<<"-------------------------------";
	
	do
	{
		cout<<"\nMasukkan pilihan: ";
		cin>>pil;
		
		switch(pil)
		{
			case 1:
				cout<<"Masukkan data angka: ";
				cin>>angka;
				push(angka);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			default:
				pil = 0;
				cout<<"\nTerima kasih"<<endl;
				system("pause");
				break;
		}
		
	} while (pil > 0);
		
	return 0;
}




