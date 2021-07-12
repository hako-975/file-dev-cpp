#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

struct movies_t
{
	char title[100];
	int year;
} mine, yours;


void printfmovie(movies_t movie);

int main()
{
	char buffer[100];
	strcpy(mine.title, "Borat: Cultural Learnings of America for Make Benefit Glorious Nation of Kazakhstan");
	mine.year = 2006;
	cout<<"Masukkan judul favorit: ";
	cin>>yours.title;
	cout<<"Masukkan tahun: ";
	cin>>buffer;
	yours.year = atoi(buffer);
	cout<<"Judul film favorit yang ada:\n";
	printfmovie(mine);
	cout<<"Judul film favorit kamu adalah:\n";
	printfmovie(yours);
	
	return 0;
}

void printfmovie(movies_t movie)
{
	cout<<movie.title;
	cout<<"("<<movie.year<<")\n";
}

