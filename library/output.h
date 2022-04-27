#include <iostream>
#include <fstream>
using namespace std;

class output{
  public :
    void cetak();

  private :
    ifstream ambil_data;
    string data_file[50];
    int index = 0;
    string nama, matkul;
    int ntugas[2], nuts[2], nuas[2], na[2], meantugas, meanuts, meanuas, meanakhir;
};
void output::cetak(){
  cout << "Nama Mahasiswa : " << nama << endl;
  cout << "Nama Mata Kuliah : " << matkul << endl;
  cout << "Daftar Nilai : " << endl;
    for(int i = 0; i < 2; i++)
    {
      cout << "Nilai tugas semester ke-" << i + 1 << " : " << ntugas[i] << endl;
      cout << "Nilai uts semester ke-" << i + 1 << " : " << nuts[i] << endl;
      cout << "Nilai uas semester ke-" << i + 1 << " : " << nuas[i] << endl;
    }
  cout << "Rata-rata nilai disetiap daftar nilai : " << endl;
  cout << "Rata-rata nilai tugas : " << meantugas;
  cout << "Rata-rata nilai uts : " << meanuts;
  cout << "Rata-rata nilai uas : " << meanuas;
  cout << "Rata-rata nilai akhir : " << meanakhir;
}
