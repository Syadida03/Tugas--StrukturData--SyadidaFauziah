#include<iostream> 
using namespace std;
//nestd struct
struct Tanggal {
string hari;
string bulan;
int tahun;
};

struct Alamat {
string jalan;
string kota;
};

struct Karyawan {
string nama;
int gaji;
struct Tanggal masuk;
struct Alamat tinggal;
};

int main()
{

/*
    Karyawan k1;
    // Tanpa Array
    k1.nama = "Kiki";
    k1.gaji = 3000000;
    k1.masuk.hari = "Senin";
    k1.masuk.bulan = "Maret";
    k1.masuk.tahun = 2022;
    k1.tinggal.jalan = "Cianjur";
    k1.tinggal.kota = "Cianjur Kota";
    
    cout <<"Informasi\n";
    cout << "Nama :"<< k1.nama << endl;
    cout << "Gaji :" << k1.gaji << endl;
    cout << "Hari Masuk :"<< k1.masuk.hari << endl;
    cout << "Bulan Masuk :"<< k1.masuk.bulan << endl;
    cout << "Tahun Masuk :"<< k1.masuk.tahun << endl;
    cout << "Alamat Jalan :"<< k1.tinggal.jalan << endl;
    cout << "Alamat Kota :"<< k1.tinggal.kota << endl;
    */
    
    //Dengan array
    Karyawan k[2];
 
    for(int i = 0; i < 2; i++){
    cout << "Input Informasi Karyawan ke-" << i+1 << endl;
    cout << "Masukan Nama Karyawan: ";
    cin >> k[i].nama;
    
    cout << "Masukan Gaji Karyawan: ";
    cin >>k[i].gaji;
    
    cout << "Masukan Hari Masuk: ";
    cin >> k[i].masuk.hari;
    
    cout << "Masukan Bulan Masuk: ";
    cin >> k[i].masuk.bulan;
    
    cout << "Masukan Tahun Masuk: ";
    cin >> k[i].masuk.tahun;
    
    cout << "Masukan Jalan Tinggal: ";
    cin >> k[i].tinggal.jalan;
    
    cout << "Masukan Kota Tinggal: ";
    cin >> k[i].tinggal.kota;
    
    cout << endl;
    };
    
    for(int i = 0; i < 2; i++){
    cout <<"Informasi\n";
    cout << "Nama :"<< k[i].nama << endl;
    cout << "Gaji :" << k[i].gaji << endl;
    cout << "Hari Masuk :"<< k[i].masuk.hari << endl;
    cout << "Bulan Masuk :"<< k[i].masuk.bulan << endl;
    cout << "Tahun Masuk :"<< k[i].masuk.tahun << endl;
    cout << "Alamat Jalan :"<< k[i].tinggal.jalan << endl;
    cout << "Alamat Kota :"<< k[i].tinggal.kota << endl;
    };
    return 0;
};
