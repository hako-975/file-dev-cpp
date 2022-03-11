#include<iostream>
#include<string>

using namespace std;

int main()
{
	// mendeklarasi variabel
	
	string nama_mhs;
	string mata_kuliah;


		// input nama_mhs
		cout << "Masukkan Nama Mahasiswa : ";
		getline(cin, nama_mhs);
		
		// input mata_kuliah
		cout << "Masukkan Mata Kuliah : ";
		getline(cin, mata_kuliah);
	
	cout<<nama_mhs<<endl;
	cout<<mata_kuliah<<endl;
}
