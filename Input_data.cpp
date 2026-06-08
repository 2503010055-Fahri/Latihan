#include <iostream>
using namespace std;

int main(){
    string nama, alamat;
    int umur;

    cout << "Masukan nama : ";
    getline(cin, nama);

    cout << "Masukan alamat : ";
    cin.ignore();
    getline(cin, alamat);

    cout << "Usia : ";
    cin >> umur;
}