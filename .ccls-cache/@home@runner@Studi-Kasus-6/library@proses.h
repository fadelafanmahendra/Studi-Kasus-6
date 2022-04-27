#include <iostream>
#include <fstream>
using namespace std;

class proses {
  public:
    void prs();
    void toFile();
    void getData();
  private:
    ifstream ambil_data;
    ofstream tulis_data;
    string nama, matkul;
    int ntugas[2], nuts[2], nuas[2], na[2], meantugas, meanuts, meanuas, meanakhir;
};

void proses::prs() {

  na[0] = (0.2*ntugas[0])+(0.35*nuts[0])+(0.45*nuas[0]);

  na[1] = (0.2*ntugas[1])+(0.35*nuts[1])+(0.45*nuas[1]);

  meantugas = (ntugas[0]+ntugas[1])/2;

  meanuts = (nuts[0]+nuts[1])/2;

  meanuas = (nuas[0]+nuas[1])/2;

  meanakhir = (na[0]+na[1])/2;
  
}

void proses::getData () {
  ambil_data.open("../dummy/out_input.txt");
  ambil_data  >> nama;
  ambil_data >> matkul;
  for(int i = 0; i < 2; i++) {
    ambil_data >> ntugas[i];
    ambil_data >> nuts[i];
    ambil_data >> nuas[i];
    }
  ambil_data.close();
}

void proses::toFile() {
  tulis_data.open("../pra_data/proses.txt");
  tulis_data << nama << endl;
  tulis_data << matkul << endl;
  for(int i = 0; i < 2; i++)
    {
      tulis_data << "Nilai tugas semester ke-" << i + 1 << " : " << ntugas[i] << endl;
      tulis_data << "Nilai uas semester ke-" << i + 1 << " : " << nuts[i] << endl;
      tulis_data << "Nilai uas semester ke-" << i + 1 << " : " << nuas[i] << endl;
    }
  tulis_data << "Rata-rata nilai disetiap daftar nilai : " << endl;
  tulis_data << "Rata-rata nilai tugas : " << meantugas;
  tulis_data << "Rata-rata nilai uts : " << meanuts;
  tulis_data << "Rata-rata nilai uas : " << meanuas;
  tulis_data << "Rata-rata nilai akhir : " << meanakhir;
  tulis_data.close();
}