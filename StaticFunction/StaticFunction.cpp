#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
	long long static int nim;
public: 
	long long int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; }
	static int getNim() { return nim; }

	mahasiswa(string pnama)
	{
		nama = pnama;
		setID();
	}
};

long long int mahasiswa::nim = 20230140140;

void mahasiswa::setID()
{
	id = ++nim;
}

void mahasiswa::printAll()
{
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main()
{
	mahasiswa mhs1("Dara SyauqI Darmawan");
	mahasiswa mhs2("Moza");
	mahasiswa::setNim(9);
	mahasiswa mhs3("Sekar");
	mahasiswa mhs4("Kamilia");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar"
}

