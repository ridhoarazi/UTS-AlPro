#include<iostream>
using namespace std;

int main(){
    int angka;
    cout << "Masukkan angka : ";
    cin >> angka;

    cout << "Bilangan ganjil : " <<endl;
    for (int i = 1; i < angka; i += 2){
        cout << i <<endl;
        }
        cout <<endl;

    cout << "Bilangan genap : " <<endl;
    int j = 0;
    while (j < angka){
        if (j % 2 == 0){
            cout << j <<endl;
        }
        j++;
    }
    cout <<endl;

    return 0;
}
