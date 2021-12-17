#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct Node
{
	string nama;
    long long int nim;
    char gender;
    int nilai;
	struct Node *next;
};

struct Node *insertInEmpty(struct Node *last, string nama, long long int nim, char gender, int nilai)
{
	if (last != NULL)
		return last;

	struct Node *temp = new Node;

	temp->nama = nama;
	temp->nim = nim;
	temp->gender = gender;
	temp->nilai = nilai;
	last = temp;

	last->next = last;

	return last;
}
struct Node *insertAtBegin(struct Node *last, string nama, long long int nim, char gender, int nilai)
{
	if (last == NULL)
		return insertInEmpty(last, nama, nim, gender, nilai);

	struct Node *temp = new Node;

	temp->nama = nama;
	temp->nim = nim;
	temp->gender = gender;
	temp->nilai = nilai;
	temp->next = last->next;
	last->next = temp;

	return last;
}
struct Node *insertAtEnd(struct Node *last, string nama, long long int nim, char gender, int nilai)
{
	if (last == NULL)
		return insertInEmpty(last, nama, nim, gender, nilai);

	struct Node *temp = new Node;

	temp->nama = nama;
	temp->nim = nim;
	temp->gender = gender;
	temp->nilai = nilai;
	temp->next = last->next;
	last->next = temp;
	last = temp;

	return last;
}

struct Node *insertAfter(struct Node *last, string nama, long long int nim, char gender, int nilai, int key)
{
	if (last == NULL)
		return NULL;

	struct Node *temp, *p;
	p = last->next;
	do
	{
		if (p->nim == key)
		{
			temp = new Node;
			temp->nama = nama;
			temp->nim = nim;
			temp->gender = gender;
			temp->nilai = nilai;
			temp->next = p->next;
			p->next = temp;

			if (p == last)
				last = temp;
			return last;
		}
		p = p->next;
	} while (p != last->next);

	cout << "Data NIM " << nim << " tidak ada" << endl;
	return last;
}
void traverseList(struct Node *last)
{
	struct Node *p;

	if (last == NULL)
	{
		cout << "Data Kosong" << endl;
		return;
	}
	p = last->next;

	do
	{
		cout <<"--------------------"<<endl;
		cout<<"NIM: "<<p->nim<<endl;
		cout<<"Nama: "<<p->nama<<endl;	
		cout<<"Gender: "<<p->gender<<endl;
		cout<<"Nilai: "<<p->nilai<<endl;

		p = p->next;
	} while (p != last->next);
	cout << "\n\n";
}

void deleteNode(Node **head, long long int key)
{
	if (*head == NULL)
		return;

	if ((*head)->nim == key && (*head)->next == *head)
	{
		free(*head);
		*head = NULL;
	}
	Node *last = *head, *d;

	if ((*head)->nim == key)
	{
		while (last->next != *head)
			last = last->next;

		last->next = (*head)->next;
		free(*head);
		*head = last->next;
	}

	while (last->next != *head && last->next->nim != key)
	{
		last = last->next;
	}
	if (last->next->nim == key)
	{
		d = last->next;
		last->next = d->next;
		cout << "Data dengan NIM " << key << " berhasil dihapus" << endl;
		free(d);
		cout << endl;
		cout << "Daftar Mahasiswa setelah menghapus NIM " << key << endl;
		traverseList(last);
	}
	else
		cout << "Data dengan NIM " << key << " berhasil dihapus" << endl;
}

int main()
{
	int nilai, pil;
	string nama;
	long long int nim;
	char gender;
	
	struct Node *last = NULL;
	
	deleteNode(&last, 10);
	do
	{
		cout << "Program Data Siswa - CIRCULAR LINKED LIST" << endl;
		cout << "1. INSERT DATA" << endl;
		cout << "2. HAPUS DATA" << endl; 
		cout << "3. CETAK DATA" << endl;
		cout << "4. EXIT" << endl;
		cout << "----------------------" << endl;

		cout << "Masukkan Pilihan: ";
		cin >> pil;

		switch (pil)
		{
		case 1:
		    cout<<"Masukkan Nama: ";
		    cin.ignore();
		    getline(cin,nama, '\n');

		    cout<<"Masukkan NIM: ";
		    cin>>nim;

		    cout<<"Masukkan Gender: ";
		    cin>>gender;

			cout << "Masukkan Nilai: ";
			cin >> nilai;

			last = insertAtBegin(last, nama, nim, gender, nilai);
			getch();
			system("cls");
			break;
		case 2:
			cout << "Masukkan NIM: ";
			cin >> nim;
			deleteNode(&last, nim);
			getch();
			system("cls");
			break;
		case 3:
			traverseList(last);
			getch();
			system("cls");
			break;
		default:
			cout << "Keluar" << endl;
			getch();
			system("cls");
			break;
		}
	} while (pil < 4);
	return 0;
}

