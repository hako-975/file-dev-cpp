#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct SIMPUL
{
	int data;
	SIMPUL *LEFT;
	SIMPUL *RIGHT;
};

SIMPUL *TREE = NULL;

void tambah(SIMPUL **root, int databaru)
{
	if ((*root) == NULL)
	{
		SIMPUL *baru;
		baru = new SIMPUL;
		baru->data = databaru;
		baru->LEFT = NULL;
		baru->RIGHT = NULL;
		(*root) = baru;
		(*root)->LEFT = NULL;
		(*root)->RIGHT = NULL;
		printf("Data Bertambah!");
	}
	else if (databaru < (*root)->data)
		tambah(&(*root)->LEFT, databaru);
	else if (databaru > (*root)->data)
		tambah(&(*root)->RIGHT, databaru);
	else if (databaru == (*root)->data)
		printf("Data Sudah ada!");
}
void preOrder(SIMPUL *root)
{
	if (root != NULL)
	{
		if (root->data)
		{
			printf("%d ", root->data);
		}
		preOrder(root->LEFT);
		preOrder(root->RIGHT);
	}
}
void inOrder(SIMPUL *root)
{
	if (root != NULL)
	{
		inOrder(root->LEFT);
		if (root->data)
		{
			printf("%d ", root->data);
		}
		inOrder(root->RIGHT);
	}
}
void postOrder(SIMPUL *root)
{
	if (root != NULL)
	{
		postOrder(root->LEFT);
		postOrder(root->RIGHT);
		if (root->data)
		{
			printf("%d ", root->data);
		}
	}
}
void search(SIMPUL **root, int cari)
{
	if ((*root) == NULL)
	{
		printf("Data tidak ditemukan!");
	}
	else if (cari < (*root)->data)
		search(&(*root)->LEFT, cari);
	else if (cari > (*root)->data)
		search(&(*root)->RIGHT, cari);
	else if (cari == (*root)->data)
		printf("Data ditemukan!");
}
int count(SIMPUL *root)
{
	if (root == NULL)
		return 0;
	else
		return count(root->LEFT) + count(root->RIGHT) + 1;
}
int height(SIMPUL *root)
{
	if (root == NULL)
		return -1;
	else
	{
		int u = height(root->LEFT);
		int v = height(root->RIGHT);
		if (u > v)
			return u + 1;
		else
			return v + 1;
	}
}
void hapus(SIMPUL **root, int del)
{
	SIMPUL *curr;
	SIMPUL *parent;
	curr = (*root);
	bool flag = false;
	while (curr != NULL)
	{
		if (curr->data == del)
		{
			flag = true;
			break;
		}
		else
		{
			parent = curr;
			if (del > curr->data)
				curr = curr->RIGHT;
			else
				curr = curr->LEFT;
		}
	}
	if (!flag)
	{
		cout << "Data tidak ditemukan. Penghapusan tidak dilakukan." << endl;
		return;
	}
	if (height(TREE) == 0)
	{
		if (curr->LEFT == NULL && curr->RIGHT == NULL)
		{
			(*root) = NULL;
			return;
		}
	}
	else if (height(TREE) > 0)
	{
		if (curr->LEFT == NULL && curr->RIGHT == NULL)
		{
			if (parent->LEFT == curr)
			{
				parent->LEFT = NULL;
				delete curr;
			}
			else
			{
				parent->RIGHT = NULL;
				delete curr;
			}
			return;
		}
		if ((curr->LEFT == NULL && curr->RIGHT != NULL) || (curr->LEFT != NULL && curr->RIGHT == NULL))
		{
			if (curr->LEFT == NULL && curr->RIGHT != NULL)
			{
				if (parent->LEFT == curr)
				{
					parent->LEFT = curr->RIGHT;
					delete curr;
				}
				else
				{
					parent->RIGHT = curr->RIGHT;
					delete curr;
				}
			}
			else
			{
				if (parent->LEFT == curr)
				{
					parent->LEFT = curr->LEFT;
					delete curr;
				}
				else
				{
					parent->RIGHT = curr->LEFT;
					delete curr;
				}
			}
			return;
		}
		if (curr->LEFT != NULL && curr->RIGHT != NULL)
		{
			SIMPUL *bantu;
			bantu = curr->RIGHT;
			if ((bantu->LEFT == NULL) && (bantu->RIGHT == NULL))
			{
				curr = bantu;
				delete bantu;
				curr->RIGHT = NULL;
			}
			else
			{
				if ((curr->RIGHT)->LEFT != NULL)
				{
					SIMPUL *bantu2;
					SIMPUL *bantu3;
					bantu3 = curr->RIGHT;
					bantu2 = (curr->RIGHT)->LEFT;
					while (bantu2->LEFT != NULL)
					{
						bantu3 = bantu2;
						bantu2 = bantu2->LEFT;
					}
					curr->data = bantu2->data;
					delete bantu2;
					bantu3->LEFT = NULL;
				}
				else
				{
					SIMPUL *tmp;
					tmp = curr->RIGHT;
					curr->data = tmp->data;
					curr->RIGHT = tmp->RIGHT;
					delete tmp;
				}
			}
			return;
		}
	}
}
int main()
{
	int pil;
	int del, cari;
	do
	{
		system("cls");
		char data;
		printf("Program Binary Tree\n");
		printf("1. Tambah Data\n");
		printf("2. Lihat Pre-Order\n");
		printf("3. Lihat In-Order\n");
		printf("4. Lihat Post-Order\n");
		printf("5. Delete\n");
		printf("6. Kosongkan Data\n");
		printf("7. Search\n");
		printf("8. Hitung SIMPUL pada Tree\n");
		printf("9. Kedalaman Tree\n");
		printf("10. Keluar\n");
		printf(" Pilihan Anda : ");
		cin>>pil;
		fflush(stdin);
		switch (pil)
		{
		case 1:
			printf("\n Masukkan data: ");
			scanf("%d", &data);
			tambah(&TREE, data);
			getch();
			break;
		case 2:
			printf("\n Output PRE ORDER : ");
			printf("\n------------------\n");
			if (TREE != NULL)
				preOrder(TREE);
			else
				printf("Data belum diisi");
			getch();
			break;
		case 3:
			printf("\n Output IN ORDER : ");
			printf("\n------------------\n");
			if (TREE != NULL)
				inOrder(TREE);
			else
				printf("Data belum diisi");
			getch();
			break;
		case 4:
			printf("\n Output POST ORDER : ");
			printf("\n------------------\n");
			if (TREE != NULL)
				postOrder(TREE);
			else
				printf("Data belum diisi");
			getch();
			break;
		case 5:
			if (TREE != NULL)
			{
				printf("\n Sebelum node dihapus : ");
				printf("\n---------------------- ");
				printf("\n PRE ORDER  : ");
				preOrder(TREE);
				printf("\n IN ORDER   : ");
				inOrder(TREE);
				printf("\n POST ORDER : ");
				postOrder(TREE);
				printf("\n\n PENGHAPUSAN DATA : ");
				printf("\n------------------\n");
				printf(" Masukkan data yang ingin dihapus: ");
				scanf("%d", &del);
				hapus(&TREE, del);
				printf("\n\n SETELAH NODE DIHAPUS : ");
				printf("\n---------------------- ");
				printf("\n PRE ORDER  : ");
				preOrder(TREE);
				printf("\n IN ORDER   : ");
				inOrder(TREE);
				printf("\n POST ORDER : ");
				postOrder(TREE);
			}
			else
				printf("\n Masih kosong!");
			getch();
			break;
		case 6:
			TREE = NULL;
			printf("\n PENGOSONGAN ELEMEN ");
			printf("\n------------------");
			printf("\n Tree sudah dikosongkan!!");
			getch();
			break;
		case 7:
			printf("\n Output -> Hanya untuk mengecek apakah data dimaksud terdapat dalam tree");
			printf("\n------");
			if (TREE != NULL)
			{
				printf("\n PRE ORDER  : ");
				preOrder(TREE);
				printf("\n IN ORDER   : ");
				inOrder(TREE);
				printf("\n POST ORDER : ");
				postOrder(TREE);
				printf("\n\n PENCARIAN DATA");
				printf("\n--------------");
				printf("\n Masukkan data yang ingin dicari : ");
				scanf("%d", &cari);
				search(&TREE, cari);
			}
			else
				printf("\n Masih kosong!");
			getch();
			break;
		case 8:
			printf("\n JUMLAH NODE DI DALAM TREE");
			printf("\n-------------------------");
			printf("\n Jumlah SIMPUL :  %d", count(TREE));
			getch();
			break;
		case 9:
			printf("\n KEDALAMAN TREE(LEVEL-> DIMULAI DARI 0)");
			printf("\n----------------------------------------");
			printf("\n Kedalaman tree : %d\n", height(TREE));
			getch();
			break;
		case 10:
			exit(0);
			break;
		}
	}
	while(pil < 10);
}

