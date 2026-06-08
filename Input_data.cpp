#include <iostream>
using namespace std;

int main(){
<<<<<<< HEAD
    string nama, alamat;
    int umur;
=======
    string nama, alamat, pekerjaan, alamatPekerjaan;
    int umur, gaji;
>>>>>>> b5d9c97f649ab9e4c969e8b7d73255d5fd84d85a

    cout << "Masukan nama : ";
    getline(cin, nama);

    cout << "Masukan alamat : ";
<<<<<<< HEAD
    cin.ignore();
    getline(cin, alamat);

    cout << "Usia : ";
    cin >> umur;
=======
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
>>>>>>> b5d9c97f649ab9e4c969e8b7d73255d5fd84d85a
}