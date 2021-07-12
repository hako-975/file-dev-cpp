#include<iostream>
#include<stdio.h>

using namespace std;

FILE *fp;
int main()
{
	int i, j, jml_dat, pilihan;
	
	int k[100];
	
	char ulangi;
	do
	{
		cout<<"Pilihan 1 : Memasukan sejumlah data dari keyboard"<<endl;
		cout<<"Pilihan 2 : Menyimpan seluruh data kedalam sebuah arsip"<<endl;
		cout<<"Pilihan 3 : Membaca data dari arsip"<<endl;
		cout<<"Pilihan 4 : Menampilkan data"<<endl;
		cout<<"Pilihan 5 : Mengurutkan data"<<endl;
		cout<<"Pilihan 6 : Menampilkan data yang telah diurutkan"<<endl;
		cout<<"Pilihan 7 : Keluar"<<endl;
		cout<<"--------------------------------------------------------------"<<endl;
		cout<<"Masukkan Pilihan : ";
		cin>>pilihan;
		
		switch(pilihan)
		{
			case 1:
				//Menulis data ke arsip
				fp = fopen("d:\\Documents\\File Dev C++\\study_kasus\\data.txt","w");
				
				if(fp == NULL)
				{
					cout<<"Error membuka file"<<endl;
				}
				else
				{
					for(i=0;i<=10;i++)
					{
						fwrite(&i,sizeof(i),1,fp);
					}
					fclose(fp);
				}
			break;
			
			case 2:
				//Menyimpan data ke arsip
				fp = fopen("d:\\Documents\\File Dev C++\\study_kasus\\data.txt","w");
				
				if(fp == NULL)
				{
					cout<<"Error membuka file"<<endl;
				}
				else
				{
					
				}
			break;
			
			case 3:
				//Membaca seluruh data data dari arsip
				fp = fopen("d:\\Documents\\File Dev C++\\study_kasus\\data.txt","r");
				if(fp == NULL)
				{
					cout<<"Error membuka file"<<endl;
				}
				else
				{
					i=0;
					while(!feof(fp))
					{
						fread(&k[i],sizeof(int),1,fp);
						i++;
					}
					fclose(fp);
				}
			break;
			
			case 4:
				//Mencetak selauruh data ke layar
				jml_dat=i-1;
				cout<<"Jumlah data = "<<jml_dat<<endl;
				
				for(j=0;j<jml_dat;j++)
				{
					cout<<k[j]<<" ";
				}
				cout<<endl;
				
				fp = fopen("d:\\Documents\\File Dev C++\\study_kasus\\data.txt","r");
				
				if(fp == NULL)
				{
					cout<<"Error membuka file"<<endl;
				}
				else
				{
					//Baca data ke-0
					fseek(fp,0*sizeof(j),SEEK_SET);
					fread(&j,sizeof(j),1,fp);
					cout<<"Data ke-0 = "<<j<<endl;
					//Baca data ke-1
					fseek(fp,1*sizeof(j),SEEK_SET);
					fread(&j,sizeof(j),1,fp);
					cout<<"Data ke-1 = "<<j<<endl;
					//Baca data ke-2
					fseek(fp,2*sizeof(j),SEEK_SET);
					fread(&j,sizeof(j),1,fp);
					cout<<"Data ke-2 = "<<j<<endl;
				}
			break;
			
			default:
			break;
		}
		
		cout<<"--------------------------------------------------------"<<endl;
		cout<<"Apakah anda ingin Memilih lagi [y / n] ? ";
		cin>>ulangi;
	} while(ulangi == 'y' || ulangi == 'Y');
	
	cout<<"Keluar dari Aplikasi"<<endl;
}
