#include<iostream>
using namespace std;

void hitungNilaiAkhir(float nilaiAbsen, float nilaiTugas, float nilaiUts, float nilaiUas, float &nilaiAkhir, char &hurufMutu){
nilaiAkhir = (nilaiAbsen * 0.10) + (nilaiTugas * 0.20) + (nilaiUts * 0.30) + (nilaiUas * 0.40);

if (nilaiAkhir >= 85 && nilaiAkhir <= 100){
    hurufMutu = 'A';
} else if (nilaiAkhir >= 80 && nilaiAkhir <= 85){
    hurufMutu = 'B';
} else if (nilaiAkhir >= 75 && nilaiAkhir <= 80){
    hurufMutu = 'C';
} else if (nilaiAkhir >= 70 && nilaiAkhir <= 75){
    hurufMutu = 'D';
} else {
    hurufMutu = 'E';
}
}
int main(){
    string nama, npm;
    float nilaiAbsen, nilaiTugas, nilaiUts, nilaiUas, nilaiAkhir;
    char hurufMutu;

    cout << "Masukkan nama mahasiswa : ";
    getline(cin, nama);
    cout << "Masukkan NPM mahasiswa : ";
    getline(cin, npm);
    cout << "Nilai absen : ";
    cin >> nilaiAbsen;
    cout << "Nilai tugas : ";
    cin >> nilaiTugas;
    cout << "Nilai UTS : ";
    cin >> nilaiUts;
    cout << "Nilai UAS : ";
    cin >> nilaiUas;

    cout << "\nHasil Perhitungan Nilai Akhir :\n";
    cout << "Nama : " << nama <<endl;
    cout << "NPM : " << npm <<endl;
    cout << "Nilai absen : " << nilaiAbsen <<endl;
    cout << "Nilai tugas : " << nilaiTugas <<endl;
    cout << "Nilai UTS : " << nilaiUts <<endl;
    cout << "Nilai UAS : " << nilaiUas <<endl;
    cout << "Nilai Akhir : " << nilaiAkhir <<endl;
    cout << "Huruf mutu : " << hurufMutu <<endl;

    return 0;
}
