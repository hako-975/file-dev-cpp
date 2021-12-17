#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#include <iostream>

using namespace std;

struct Node
{
	int data;

	Node *kiri;

	Node *kanan;
};

Node *pohon = NULL;

void tambah(Node **root, int databaru)

{

	if ((*root) == NULL)

	{

		Node *baru;

		baru = new Node;

		baru->data = databaru;

		baru->kiri = NULL;

		baru->kanan = NULL;

		(*root) = baru;

		(*root)->kiri = NULL;

		(*root)->kanan = NULL;

		printf("Data Bertambah!");
	}

	else if (databaru < (*root)->data)

		tambah(&(*root)->kiri, databaru);

	else if (databaru > (*root)->data)

		tambah(&(*root)->kanan, databaru);

	else if (databaru == (*root)->data)

		printf("Data Sudah ada!");
}

void preOrder(Node *root)

{

	if (root != NULL)
	{
		if (root->data)
		{
			printf("%d ", root->data);
		}

		preOrder(root->kiri);

		preOrder(root->kanan);
	}
}

void inOrder(Node *root)

{

	if (root != NULL)

	{

		inOrder(root->kiri);

		if (root->data)
		{

			printf("%d ", root->data);
		}

		inOrder(root->kanan);
	}
}

void postOrder(Node *root)

{

	if (root != NULL)

	{

		postOrder(root->kiri);

		postOrder(root->kanan);

		if (root->data)
		{

			printf("%d ", root->data);
		}
	}
}

void search(Node **root, int cari)

{

	if ((*root) == NULL)

	{

		printf("Data tidak ditemukan!");
	}

	else if (cari < (*root)->data)

		search(&(*root)->kiri, cari);

	else if (cari > (*root)->data)

		search(&(*root)->kanan, cari);

	else if (cari == (*root)->data)

		printf("Data ditemukan!");
}

int count(Node *root)

{

	if (root == NULL)

		return 0;

	else

		return count(root->kiri) + count(root->kanan) + 1;
}

int height(Node *root)

{

	if (root == NULL)

		return -1;

	else
	{

		int u = height(root->kiri);

		int v = height(root->kanan);

		if (u > v)

			return u + 1;

		else

			return v + 1;
	}
}

void hapus(Node **root, int del)

{

	Node *curr;

	Node *parent;

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

				curr = curr->kanan;

			else

				curr = curr->kiri;
		}
	}

	if (!flag)

	{

		cout << "Data tidak ditemukan. Penghapusan tidak dilakukan." << endl;

		return;
	}

	if (height(pohon) == 0)

	{

		if (curr->kiri == NULL && curr->kanan == NULL)

		{

			(*root) = NULL;

			return;
		}
	}

	else if (height(pohon) > 0)

	{

		if (curr->kiri == NULL && curr->kanan == NULL)

		{

			if (parent->kiri == curr)

			{

				parent->kiri = NULL;

				delete curr;
			}

			else

			{

				parent->kanan = NULL;

				delete curr;
			}

			return;
		}

		if ((curr->kiri == NULL && curr->kanan != NULL) || (curr->kiri != NULL && curr->kanan == NULL))

		{

			if (curr->kiri == NULL && curr->kanan != NULL)

			{

				if (parent->kiri == curr)

				{

					parent->kiri = curr->kanan;

					delete curr;
				}

				else

				{

					parent->kanan = curr->kanan;

					delete curr;
				}
			}

			else

			{

				if (parent->kiri == curr)

				{

					parent->kiri = curr->kiri;

					delete curr;
				}

				else

				{

					parent->kanan = curr->kiri;

					delete curr;
				}
			}

			return;
		}

		if (curr->kiri != NULL && curr->kanan != NULL)

		{

			Node *bantu;

			bantu = curr->kanan;

			if ((bantu->kiri == NULL) && (bantu->kanan == NULL))

			{

				curr = bantu;

				delete bantu;

				curr->kanan = NULL;
			}

			else

			{

				if ((curr->kanan)->kiri != NULL)

				{

					Node *bantu2;

					Node *bantu3;

					bantu3 = curr->kanan;

					bantu2 = (curr->kanan)->kiri;

					while (bantu2->kiri != NULL)

					{

						bantu3 = bantu2;

						bantu2 = bantu2->kiri;
					}

					curr->data = bantu2->data;

					delete bantu2;

					bantu3->kiri = NULL;
				}

				else

				{

					Node *tmp;

					tmp = curr->kanan;

					curr->data = tmp->data;

					curr->kanan = tmp->kanan;

					delete tmp;
				}
			}

			return;
		}
	}
}

int main()

{

	char pil;

	int del, cari;

	while (true)

	{

		system("cls");

		char data;

		printf("\n MENU");

		printf("\n ----\n");

		printf(" [1] Tambah Data\n");

		printf(" [2] Lihat Pre-Order\n");

		printf(" [3] Lihat In-Order\n");

		printf(" [4] Lihat Post-Order\n");

		printf(" [5] Delete\n");

		printf(" [6] Kosongkan Data\n");

		printf(" [7] Search\n");

		printf(" [8] Hitung Node pada Tree\n");

		printf(" [9] Kedalaman Tree\n");

		printf(" [X] Keluar\n");

		printf(" Pilihan Anda : ");

		scanf("%c", &pil);

		fflush(stdin);

		switch (pil)

		{

		case '1':

			printf("\n INPUT : ");

			printf("\n-------");

			printf("\n Masukkan data: ");

			scanf("%d", &data);

			tambah(&pohon, data);

			getch();

			break;

		case '2':

			printf("\n OUTPUT PRE ORDER : ");

			printf("\n------------------\n");

			if (pohon != NULL)

				preOrder(pohon);

			else

				printf(" Masih Kosong!!!");

			getch();

			break;

		case '3':

			printf("\n OUTPUT IN ORDER : ");

			printf("\n------------------\n");

			if (pohon != NULL)

				inOrder(pohon);

			else

				printf(" Masih Kosong!!!");

			getch();

			break;

		case '4':

			printf("\n OUTPUT POST ORDER : ");

			printf("\n------------------\n");

			if (pohon != NULL)

				postOrder(pohon);

			else

				printf(" Masih Kosong!!!");

			getch();

			break;

		case '5':

			if (pohon != NULL)

			{

				printf("\n SEBELUM NODE DIHAPUS : ");

				printf("\n---------------------- ");

				printf("\n PRE ORDER  : ");

				preOrder(pohon);

				printf("\n IN ORDER   : ");

				inOrder(pohon);

				printf("\n POST ORDER : ");

				postOrder(pohon);

				printf("\n\n PENGHAPUSAN DATA : ");

				printf("\n------------------\n");

				printf(" Masukkan data yang ingin dihapus: ");

				scanf("%d", &del);

				hapus(&pohon, del);

				printf("\n\n SETELAH NODE DIHAPUS : ");

				printf("\n---------------------- ");

				printf("\n PRE ORDER  : ");

				preOrder(pohon);

				printf("\n IN ORDER   : ");

				inOrder(pohon);

				printf("\n POST ORDER : ");

				postOrder(pohon);
			}

			else

				printf("\n Masih kosong!");

			getch();

			break;

		case '6':

			pohon = NULL;

			printf("\n PENGOSONGAN ELEMEN ");

			printf("\n------------------");

			printf("\n Tree sudah dikosongkan!!");

			getch();

			break;

		case '7':

			printf("\n OUTPUT -> Hanya untuk mengecek apakah data dimaksud terdapat dalam tree");

			printf("\n------");

			if (pohon != NULL)

			{

				printf("\n PRE ORDER  : ");

				preOrder(pohon);

				printf("\n IN ORDER   : ");

				inOrder(pohon);

				printf("\n POST ORDER : ");

				postOrder(pohon);

				printf("\n\n PENCARIAN DATA");

				printf("\n--------------");

				printf("\n Masukkan data yang ingin dicari : ");

				scanf("%d", &cari);

				search(&pohon, cari);
			}

			else

				printf("\n Masih kosong!");

			getch();

			break;

		case '8':

			printf("\n JUMLAH NODE DI DALAM TREE");

			printf("\n-------------------------");

			printf("\n Jumlah Node :  %d", count(pohon));

			getch();

			break;

		case '9':

			printf("\n KEDALAMAN TREE(LEVEL-> DIMULAI DARI 0)");

			printf("\n----------------------------------------");

			printf("\n Kedalaman tree : %d\n", height(pohon));

			getch();

			break;

		case 'X' | 'x':

			exit(0);

			break;
		}
	}
}
