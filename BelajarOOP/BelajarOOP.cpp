#include <iostream>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
	float nilai;
public:
	void input() {
		cout << "Masukan NIM :";
		cin >> nim;
		cout << "Masukan Nama :";
		cin >> nama;
		cout << "Masukan Nilai :";
		cin >> nilai;
	}
	void printData();
};

void Mahasiswa::printData() {
	cout << "\nData Mahasiswa";
	cout << "\nNiM :" << nim;
	cout << "\nNama :" << nama;
	cout << "\nnilai :" << nilai;
}

class matakuliah {
private:
	string kode;
	string namaMk;
	int sks;
public:
	void inputMk() {
		cout << "\n\nMasukkan kode matakuliah : ";
		cin >> kode;
		cout << "Masukan nama Matakuliah : ";
		cin >> namaMk;
		cout << "Masukan sks : ";
		cin >> sks;
	}

	void display() {
		cout << "\nData Matakuliah";
		cout << "\nKode Matakuliah : " << kode;
		cout << "\nNama Matakuliah : " << namaMk;
		cout << "\nsks : " << sks;
	}
};

int main() {
	Mahasiswa mhs;
	matakuliah Mk;

	mhs.input();
	mhs.printData();

	Mk.inputMk();
	Mk.display();

}
