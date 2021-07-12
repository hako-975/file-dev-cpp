#include<iostream>
#include<conio.h>
using namespace std;
int binary_search(int [ ], int, int);
main( )
{
 const int array_size=10;
 int array[array_size]={0, 6, 9, 12, 20, 23, 29, 32, 47, 79 };
 cout<<" isi dari array adalah : "<<endl;
 cout<<"\n array:"<<"\t\t data:"<<endl;
 for (int count=0; count<array_size; count++)
 {
 cout<<"\t "<<"array["<<count<<"] "<<"\t\t";
 cout<<array[count]<<endl;
 }
 int searching_element=0;
 int flag=0;
 cout<<"\n masukan data yang anda cari = ";
 cin>>searching_element;
 flag=binary_search(array,array_size, searching_element);
 if(flag !=-1)
 cout<<"\n data tersebut ditemukan pada posisi array["<<flag<<"]";
 else
 cout<<"\n data tersebut tidak ditemukan ";
 getch();
 return 0;
}
int binary_search(int array[ ], int array_size, int element)
{
 int start=0;
 int end=array_size-1;
 int middle;
 int position=-1;
 middle=( start+ end)/2;
 do
 {
 if(element <array [middle])
 end= middle-1;
 else if(element >array [middle])
 start=middle+1;
 middle=( start+end)/2;
 }
 while(start<=end && array [middle]!=element);
 if(array [middle]==element)
 position=middle;
 return position;
}
