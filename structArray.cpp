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

    for (int n= 0;n <2;n++){
    cout << "Datake-" << n+1 << endl;
    cout << "NIM = "<< mhs[n].nim << endl;
    cout << "NAMA = "<< mhs[n].nama << endl;
    cout << "ALAMAT DESA ="<< mhs[n].alamat.desa << endl;
    cout << "ALAMAT KOTA ="<< mhs[n].alamat.kota << endl;
    }

}