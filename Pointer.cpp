#include <iostream>
using namespace std;

int main(){
    string nama = "Artskie";
    cout << "alamat memori : " << &nama << endl;

    int Hp = 100;
    int *ptr_Hp = &Hp;
    *ptr_Hp = 90;

    cout << "Alama memori HP : " << &Hp << endl;
    cout << "Value Hp : " << *ptr_Hp;
}