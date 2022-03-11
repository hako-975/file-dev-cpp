#include <iostream>

using namespace std;

int main(){

  float modal, pendapatan, laba, rugi;
  
  cout << "==========================\n";
  cout << "Masukkan jumlah modal: ";
  cin >> modal;
  cout << "Masukkan jumlah pendapatan: ";
  cin >> pendapatan;
  cout << "==========================\n";
  
  if(pendapatan > modal){
    laba = pendapatan - modal;
    cout << "Anda mendapatan laba sebesar: " << laba << endl;
  } else if (pendapatan < modal){
    rugi = pendapatan - modal;
    cout << "Anda mendapatkan rugi sebesar: " << rugi << endl;
  } else {
    cout << "Anda tidak laba dan rugi \n";
  }

}
