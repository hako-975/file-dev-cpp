#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

int MAXSTACK; 
typedef int itemtype;

typedef struct
{
	itemtype item[300]; 
	int count;
} 

stack;

void initializestack(stack *s)
{
	s->count = 0;
}

int empty(stack *s)
{
	return (s->count == 0);
}

int full(stack *s)
{
	return (s->count == MAXSTACK);
}

void push(itemtype x, stack *s)
{
	if(full(s))
	{	
		cout<<"stack penuh";
	}
	else
	{
		s->item[s->count]=x; ++(s->count); 
	}
}

int pop(stack *s) 
{
	if(empty(s))
	{
		cout<<"Stack Kosong";
	}
	else
	{
		--(s->count);
		return (s->item[s->count]); 
	}
}

int main() 
{
	int i, n, m, l, z; int input;
	
	stack tumpukan;
	
	cout<<"Program Pengkonversi Desimal ke Biner"<<endl;
	
	initializestack(&tumpukan);
	
	cout<<"Masukkan Bilangan Desimal: ";
	cin>>input;
	
	for(z = 1, n = input; n > 0; n = n / 2, z++) 
	{
		MAXSTACK = z; 
	}
	m = 0;
	for(n = input; n > 0; n = n / 2) 
	{
		l = n%2;
		push(l,&tumpukan);
		++m; 
	} 
	cout<<endl;
	cout<<"Hasil Konversi Ke Bilangan Biner: ";
	for(i = MAXSTACK; i > 0; i--) 
	{
		cout<<pop(&tumpukan); 
	}
	getch();
	return 0; 
}

