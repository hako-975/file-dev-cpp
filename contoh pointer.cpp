#include<iostream>
using namespace std;

void add_score(int *score)
{
    *score += 5;
}

int main()
{
    int score = 0;

    cout<<"score sebelum diubah: "<<score<<endl;
    add_score(&score);
    cout<<"score setelah diubah: "<<score<<endl;
}
