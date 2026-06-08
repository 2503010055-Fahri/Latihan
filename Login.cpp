#include <iostream>
using namespace std;

int main(){
    string Nama, Username, Email, Password;

    cout << "Nama : ";
    getline(cin, Nama);

    cout << "Username : ";
    getline(cin, Username);

    cout << "Email : ";
    getline(cin, Email);

    cout << "Password : ";
    getline(cin, Password);

    cout << endl;

    cout << "==== DATA LOGIN ====\n";
    cout << "Nama     : " << Nama << endl;
    cout << "Username : " << Username << endl;
    cout << "Email    : " << Email << endl;
    cout << "Password : " << Password << endl;
}