#include <iostream>
#include <fstream>

using namespace std;

 class input {
  public:
    void inputData();

  private:
    string nama, matkul;
    int ntugas[2], nuts[2], nuas[2], na[2], mean;
 };

void input :: inputData() {
  cout << "Masukkan nama mahasiswa : "; cin >> nama;
  cout << "Masukkan nama mata kuliah : "; cin >> matkul;
  for(int i = 0; i < 2; i++) {
    cout << "Masukkan nilai tugas semester ke-" << i + 1 << " : "; cin >> ntugas[i];
    cout << "Masukkan nilai uts semester ke-" << i + 1 << " : "; cin >> nuts[i];
    cout << "Masukkan nilai uas semester ke-" << i + 1 << " : "; cin >> nuas[i];
  }
}
