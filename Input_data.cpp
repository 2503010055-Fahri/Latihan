#include <iostream>
using namespace std;

int main(){
    string nama, alamat, pekerjaan, alamatPekerjaan, asalSekolah;
    int umur, gaji;

    string namaOrtuAyah, namaOrtuIbu, alamatAyah, alamatIbu, TamatLulusanOrtu;
    int gajiOrtuAyah, gajiOrtuIbu, pilLulusanOrtu;

    cout << "Masukan nama : ";
    getline(cin, nama);

    cout << "Masukan alamat : ";
    getline(cin, alamat);

    cout << "Asal Sekolah : ";
    getline(cin, asalSekolah);

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

    cout << "======= DATA DIRI =======\n";
    cout << "Nama            : " << nama << endl;
    cout << "Alamat          : " << alamat << endl;
    cout << "Asal Sekolah    : " << asalSekolah << endl;
    cout << "Pekerjaan       : " << pekerjaan << endl;
    cout << "Almat Pekerjaan : " << alamatPekerjaan << endl;
    cout << "Usia            : " << umur << endl;
    cout << "Gaji/Moon       : " << gaji << endl;

    cout << endl;
    cin.ignore();

    cout << "Nama Orang Tua Ayah : ";
    getline(cin, namaOrtuAyah);

    cout << "Nama Orang Tua Ibu : ";
    getline(cin, namaOrtuIbu);

    cout << "Alamat ayah : ";
    getline(cin, alamatAyah);

    cout << "Alamat Ibu : ";
    getline(cin, alamatIbu);

    cout << "Gaji Ayah / Bulan : ";
    cin >> gajiOrtuAyah;

    cout << "Gaji Ibu / Bulan : ";
    cin >> gajiOrtuIbu;

    cin.ignore();

    // Pendidikan terakhir orang tua
    cout << "\n==== PENDIDKAN TERAKHIR ORANG TUA ====\n";
    cout << "1. SD\n";
    cout << "2. SMP\n";
    cout << "3. SMA\n";
    cout << "4. S1\n";
    cin >> pilLulusanOrtu;

    switch(pilLulusanOrtu){
        case 1 :
            TamatLulusanOrtu = "SD";
            break;
        case 2 :
            TamatLulusanOrtu = "SMP";
            break;
        case 3 :
            TamatLulusanOrtu = "SMA";
            break;
        case 4 :
            TamatLulusanOrtu = "S1";
            break;
        default :
            TamatLulusanOrtu = "Tidak dapat diakses";
    }

    cout << "==== DATA ORANG TUA ====\n";
    cout << "Nama Ayah          : " << namaOrtuAyah << endl;
    cout << "Nama Ibu           : " << namaOrtuIbu << endl;
    cout << "Alama Ayah         : " << alamatAyah << endl;
    cout << "Alamat Ibu         : " << alamatIbu << endl;
    cout << "Gaji Ayah / Bulan  : " << gajiOrtuAyah << endl;
    cout << "Gaji Ibu / Bulan   : " << gajiOrtuIbu << endl;
    cout << "Lulusan Pendidikan : " << TamatLulusanOrtu << endl;
}