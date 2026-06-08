#include <iostream>
using namespace std;

int main(){
    string nama, alamat, pekerjaan, alamatPekerjaan;
    int umur, gaji;

    cout << "Masukan nama : ";
    getline(cin, nama);

    cout << "Masukan alamat : ";
    getline(cin, alamat);

    cout << "Pekerjaan : ";
    getline(cin, pekerjaan);

    cout << "Alamat Pekerjaan : ";
    cin.ignore();
    getline(cin, alamatPekerjaan);

    cout << "Usia : ";
    cin >> umur;

    cout << "Gaji/Moon : ";
    cin >> gaji;

    cout << endl;

    cout << "==== DATA DIRI ====\n";
    cout << "Nama            : " << nama << endl;
    cout << "Alamat          : " << alamat << endl;
    cout << "Pekerjaan       : " << pekerjaan << endl;
    cout << "Almat Pekerjaan : " << alamatPekerjaan << endl;
    cout << "Usia            : " << umur << endl;
    cout << "Gaji/Moon       : " << gaji << endl;
}