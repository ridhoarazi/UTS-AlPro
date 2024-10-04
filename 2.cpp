#include<iostream>
using namespace std;

int main(){
    int angka;
    cout << "Masukkan angka : ";
    cin >> angka;
    for (int i = 1; i <=angka; i++){
        for (int j = 1; j <=angka; j++){
            cout << "";
            }
        for (int k = 1; k <=i; k++){
            cout << "*";
        }
        cout <<endl;
    }
    return 0;
}
