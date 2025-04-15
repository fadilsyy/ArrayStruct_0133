#include <iostream>
using namespace std;

struct detailAlamat{
    string desa;
    string kota;
};

struct mahasiswa{
    string nim;
    string nama;
    detailAlamat alamat;
};

int main(){
//membuat object struct mahasiswa
    mahasiswa mhs;

    //mengakses struct mahasiswa
    mhs.nim = "202401444";
    mhs.nama = "yuaratama";
    mhs.alamat.desa = "imogiri";
    mhs.alamat.kota = "DIY";
    
    cout << "Massukan NIM = ";
    cin >> mhs.nim;
    cout << "Masukkan NAMA = ";
    cin >> mhs.nama;
    cout << "Masukkan Alamat Desa = ";
    cin >> mhs.alamat.desa;
    cout << "Masukkan Alamat Kota = ";
    cin >> mhs.alamat.kota;

    cout << "NIM = " << mhs.nim << endl;
    cout << "NAMA = " << mhs.nama << endl;
    cout << "ALAMAT DESA = " << mhs.alamat.desa << endl;
    cout << "ALAMAT KOTA = " << mhs.alamat.kota << endl;
}