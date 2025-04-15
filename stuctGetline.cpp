# include <iostream>
#include <string>
using namespace std;
struct detailAlamat{
    string desa;
    string kota;
}
struct mahasiswa{
    string nim;
    string nama;
    detailAlamat alamat;
};

int main(){
    //membuat object struct mahasiswa
    mahasiswa mhs[2];

    cout << "Masukan NIM = ";
    cin >> mhs.nim;
    cin.ignore();
    cout << "Masukan NAMA =";
    getline (cin,mhs.nama);
    cin >> mhs.nama;
    cout << "Masukan ALAMAT DESA =";
    cin >> mhs.alamat.desa;
    cout << "Masukan ALAMAT KOTA =";
    cin >> mhs.alamat.kota;

    cout << endl;
    cout << "Data Mahasiswa" << endl;

    for(int n = 0;n<2;n++)
    cout << "Data ke-" << n+1 << endl;
    cout << "NIM = "<< mhs[n].nim << endl;
    cout << "NAMA = "<< mhs[n].nama << endl;
    cout << "ALAMAT DESA ="<< mhs[n].alamat.desa << endl;
    cout << "ALAMAT KOTA ="<< mhs[n].alamat.kota << endl;

}
