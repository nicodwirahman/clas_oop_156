#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
		void tampil() {
		cout << "NIM=" << nim;
		cout << "\nNama" << nama;
	}
};

class Matakuliah {
private:
	int sks;
	string kode;
	string namaMK;
public:
	void inputMK() {

		cout << "masukan jumlah SKS= ";
		cin >> sks;
		cout << "masukan kode MK=";
		cin >> kode;
		cout << "masukan nama MK";
		cin >> namaMK;
	}

	void tampilMK() {
		cout << "njumlah sks = " << sks;
		cout << "\nkode MK =" << kode;
		cout << "\nNama MK=" << namaMK << endl;
	}
};

int main()
{
	Mahasiswa mhs;
	Matakuliah mk;
}