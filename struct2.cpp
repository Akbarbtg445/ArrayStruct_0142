# include <iostream>
using namespace std;
struct detailAlamat{
    string desa;
    string kota;
};
struct mahasiswa{
    string nim;
    string nama;
    string alamat;
};

int main(){
    //membuat object struct mahasiswa
    mahasiswa mhs;

    cout << "Masukan NIM = ";
    cin >> mhs.nim;
    cout << "Masukan NAMA =";
    cin >> mhs.nama;
    cout << "Masukan ALAMAT DESA =";
    cin >> mhs.alamat.desa;
    cout << "Masukan ALAMAT KOTA =";
    cin >> mhs.alamat.kota;

    cout << "NIM = "<< mhs.nim << endl;
    cout << "NAMA = "<< mhs.nama << endl;
    cout << "ALAMAT DESA ="<< mhs.alamat.desa << endl;
    cout << "ALAMAT KOTA ="<< mhs.alamat.kota << endl;

}