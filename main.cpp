#include <iostream>
#include <ctime>
using namespace std;

int main() {



    string Nama;
    cout << "Nama Lengkap: ";
    getline(cin, Nama);

    int age;
    string TempatTinggal;
    cout << "Tanggal lahir/Tempat tinggal: ";
    cin >> age;
    getline(cin, TempatTinggal);

    double niLai;
    cout << "Masukkan Nilai: ";
    cin >> niLai;

   srand(time(0));
        int randnum = rand() % 5 + 1;

            cout << "--------------------------------------------------" << endl;
    switch (randnum) {
        case 1: cout << "Nama Siswa: " << Nama << endl
                     << "Tanggal lahir/Tempat tinggal: " << age << TempatTinggal << endl
                     << "Nilai Siswa: " << niLai << endl
                     << "Anda Masuk Kelas X.2" << endl;
        break;
        case 2: cout << "Nama Siswa: " << Nama << endl
                     << "Tanggal lahir/Tempat tinggal: " << age << TempatTinggal << endl
                     << "Nilai Siswa: " << niLai << endl
                     << "Anda Masuk Kelas X.2" << endl;
            break;
        case 3: cout << "Nama Siswa: " << Nama << endl
                     << "Tanggal lahir/Tempat tinggal: " << age << TempatTinggal << endl
                     << "Nilai Siswa: " << niLai << endl
                     << "Anda Masuk Kelas X.3" << endl;
            break;
        case 4: cout << "Nama Siswa: " << Nama << endl
                  << "Tanggal lahir/Tempat tinggal: " << age << TempatTinggal << endl
                  << "Nilai Siswa: " << niLai << endl
                  << "Anda Masuk Kelas X.4" << endl;
            break;
        case 5: cout << "Nama Siswa: " << Nama << endl
                  << "Tanggal lahir/Tempat tinggal: " << age << TempatTinggal << endl
                  << "Nilai Siswa: " << niLai << endl
                  << "Anda Masuk Kelas X.5" << endl;
            default:
            cout << "Anda Tidak Masuk Kelas" << endl;
            break;
    }

    return 0;
}