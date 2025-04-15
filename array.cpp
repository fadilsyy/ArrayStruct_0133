#include <iostream>
using namespace std;

int nilai[]={1,2,3};
int skor[4]={12,24,48,64};
string nama[3];

int main(){
    cout << "Tampilkan skor ke 3 = " << skor[2] << endl;
    skor[2] = 100;
    cout << "Tampilkan skor ke 3 = " << skor[2] << endl;

    for(int n = 0; n < 3; n++){
        cout << "Mahasiswa ke- = " << n+1 << endl;
        cout << "Nama Mahasiswa = ";
        cin >> nama[n];
    }
    cout << endl;
    //menampilkan isi array
    for(int n = 0; n < 3; n++){
        cout << "Mahasiswa ke -" << nama[n];
        cout << "Nama Mahasiswa = " << nama[n] << endl;
    }

};