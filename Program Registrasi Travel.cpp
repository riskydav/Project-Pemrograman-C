#include <iostream>//library untuk memanggil cin / cout / endl
#include <stdlib.h>// Merupakan file header yang berfungsi untuk operasi pembanding dan operasi konversi
#include <stdio.h>//library untuk memanggil perintah printf / puts / putchar / gets dan lainnya
#include <iomanip>// Merupakan suatu fungsi manipulator yang digunakan untuk konversi bilangan octal, Decimal, dan Hexadecimal
#include <conio.h>//library untuk memanggil getch
#include <windows.h>// library untuk memanggil system seperti cls atau pause
#include <fstream>// library untuk import file

using namespace std;

typedef struct data // yaitu sebuah penyimpanan yang bisa menampung bebearapa type data dan variable sesuai dengan yang di gunakan user
{
    int jumlah_data;
    string nama;
    string no_telp;
    string asal_kota;
    string kota_tujuan;
    int harga;
    int harga_total;
    string jam;
    int jml_penumpang,Pembayaran_anda,kembalian_anda;
}user;
user data_travel[100];
user jumlah;

void reg_travel()// void merupakan sebuah prosedur yang dimana membuat subprogram reg travel yang nantinya akan di panggil di program utama
{
    int harga;
    int data=0;
    int jumlah;
    int pil_waktu;
    int pil_data_asal_kota;
    int pil_data_kota_tujuan;
    string waktu;
    data_travel[data].jam = waktu;
    data_travel[data].harga=harga=120000;
    string data_asal_kota;
    string data_kota_tujuan;
    data_travel[data].asal_kota= data_asal_kota;
    data_travel[data].jml_penumpang = jumlah;
    data_travel[data].kota_tujuan = data_kota_tujuan;
    system("cls");
    cout<<"Masukkan Nama\t\t    = ";cin>>data_travel[data].nama;
    cout<<"Masukkan No Telepon\t    = ";cin>>data_travel[data].no_telp;
    ulang:
    cout<<"Masukkan Asal Kota"<<endl;
    cout<<"\t1. Purwokerto"<<endl;
    cout<<"\t2. Jakarta"<<endl;
    cout<<"\t3. Jogja"<<endl;
    cout<<"\t4. Surabaya"<<endl;
    cout<<"Pilihan Anda\t\t= ";cin>>pil_data_asal_kota;
    switch(pil_data_asal_kota)
    {
    case 1:
        data_travel[data].asal_kota="Purwokerto";
        break;
    case 2:
        data_travel[data].asal_kota="Jakarta";
        break;
    case 3:
        data_travel[data].asal_kota="jogja";
        break;
    case 4:
        data_travel[data].asal_kota="surabaya";
        break;
    default:
        cout<<"anda salah input"<<endl;
        goto ulang;
        break;
    }
    cout<<"Silahkan Masukkan Tujuan Kota Anda"<<endl;
    cout<<"\t1. Kediri"<<endl;
    cout<<"\t2. Purworejo"<<endl;
    cout<<"\t3. Surabaya"<<endl;
    cout<<"\t4. Jakarta"<<endl;
    cout<<"\t5. Bekasi"<<endl;
    cout<<"\t6. Depok"<<endl;
    cout<<"\t7. Tangerang"<<endl;
    cout<<"Pilihan Anda\t\t= ";cin>>pil_data_kota_tujuan;
    //program pilihan
    switch(pil_data_kota_tujuan)
    {
    case 1:
        data_travel[data].kota_tujuan="Kediri";
        break;//berhenti sementara
    case 2:
        data_travel[data].kota_tujuan="Purworejo";
        break;
    case 3:
        data_travel[data].kota_tujuan="Surabaya";
        break;
    case 4:
        data_travel[data].kota_tujuan="Jakarta";
        break;
    case 5:
        data_travel[data].kota_tujuan="Bekasi";
        break;
    case 6:
        data_travel[data].kota_tujuan="Depok";
        break;
    case 7:
        data_travel[data].kota_tujuan="Tanggerang";
        break;
    }
    cout<<"Harga Dari Travel Anda Adalah\t= "<<data_travel[data].harga;//untuk memanggil pilihan tujuan dengan harga
    cout<<"\nSilahkan Masukkan Jam Keberangkatan anda"<<endl;
    cout<<"\t1. 15.00 WIB"<<endl;
    cout<<"\t2. 19.00 WIB"<<endl;
    cout<<"Pilihan Anda\t\t= ";cin>>pil_waktu;//memanggil fungsi tipe data waktu
    switch(pil_waktu)
    {
    case 1:
        data_travel[data].jam="15.00 WIB";
        break;
    case 2:
        data_travel[data].jam="19.00 WIB";
        break;
    }
    cout<<"Jumlah Penumpang\t= ";cin>>data_travel[data].jml_penumpang;//memanggil fungsi tipe data jumlah penumpang
    int harga_total;
    data_travel[data].harga_total = data_travel[data].jml_penumpang*harga;//memanggil fungsi tipe data jumlah penumpang dikalikan harga
    cout<<"Terima Kasih Data Anda Sudah Masuk. "<<endl;
}
void report() // yaitu merupakan sebuah subptogram report yang nantinya akan dipanngil oleh program utama
{
    system("cls");
    cout<<"______________________________________________________"<<endl;
    cout<<"******************************************************"<<endl;
    cout<<"Data Penumpang Travel dan Pembayaran "<<endl;
    cout<<"Nama Penumpang\t\t: "<<data_travel[0].nama<<endl;
    cout<<"no telepon\t\t: "<<data_travel[0].no_telp<<endl;
    cout<<"Kota Asal\t\t: "<<data_travel[0].asal_kota<<endl;
    cout<<"Kota Tujuan\t\t: "<<data_travel[0].kota_tujuan<<endl;
    cout<<"Harga Travel\t\t: "<<data_travel[0].harga<<endl;
    cout<<"Jam Travel\t\t: "<<data_travel[0].jam<<endl;
    cout<<"Jumlah Penumpang\t: "<<data_travel[0].jml_penumpang<<endl;
    cout<<"Harga Total\t\t: "<<data_travel[0].harga_total<<endl;
    cout<<"______________________________________________________"<<endl;
    cout<<"******************************************************"<<endl;
    ulang:
    cout<<"Pembayaran Travel = ";cin>>data_travel[0].Pembayaran_anda;
    if(data_travel[0].harga_total <= data_travel[0].Pembayaran_anda){//fungsi untuk menjumlahkan
    data_travel[0].kembalian_anda = data_travel[0].Pembayaran_anda - data_travel[0].harga_total ;
    cout<<"Kembalian Anda = "<<data_travel[0].kembalian_anda<<endl;
    cout<<"Pembayaran Anda Telah Lunas"<<endl;
    }
    else
    {
        cout<<"Pembayaran Anda Kurang"<<endl;
        goto ulang;
        getch();
    }

}

int main()
{
    int pilihan;//program pilihan
    do{
        system("cls");
        cout<<"\t\t\t ***********************"<<endl;
        cout<<"\t\t\t | Travel Murah Meriah |"<<endl;
        cout<<"\t\t\t ***********************"<<endl;
        cout<<"\t\t\t Pergi Jauh Tapi Murah ?"<<endl;
        cout<<"\t\t\t      Pake Ini Aja"<<endl;
        cout<<endl;
        cout<<"______________________________________________________"<<endl;
        cout<<"******************************************************"<<endl;
        cout<<"\t\t\|  Menu Pilihan Anda  |"<<endl;
        cout<<"\t\t\***********************"<<endl;
        cout<<"\t\t1. Registrasi Travel"<<endl;
        cout<<"\t\t2. Tampilkan Report Penumpang"<<endl;
        cout<<"\t\t3. Keluar"<<endl;
        cout<<"______________________________________________________"<<endl;
        cout<<"******************************************************"<<endl;
        cout<<endl;
        cout<<"Masukkan Pilihan Anda = ";cin>>pilihan;
        switch(pilihan)
        {
        case 1:
        {
        reg_travel();
        break;
        }
        case 2:
        {
        report();
        ofstream file1("Tiket Perjalanan Travel.txt");
        file1<<"______________________________________________________"<<endl;
        file1<<"******************************************************"<<endl;
        file1<<"Data Penumpang Travel dan Pembayaran "<<endl;
        file1<<"Nama Penumpang\t\t: "<<data_travel[0].nama<<endl;
        file1<<"no telepon\t\t: "<<data_travel[0].no_telp<<endl;
        file1<<"Kota Asal\t\t: "<<data_travel[0].asal_kota<<endl;
        file1<<"Kota Tujuan\t\t: "<<data_travel[0].kota_tujuan<<endl;
        file1<<"Harga Travel\t\t: "<<data_travel[0].harga<<endl;
        file1<<"Jam Travel\t\t: "<<data_travel[0].jam<<endl;
        file1<<"Jumlah Penumpang\t: "<<data_travel[0].jml_penumpang<<endl;
        file1<<"Harga Total\t\t: "<<data_travel[0].harga_total<<endl;
        file1<<"______________________________________________________"<<endl;
        file1<<"******************************************************"<<endl;
        file1<<"Pembayaran Travel = "<<data_travel[0].Pembayaran_anda<<endl;
        file1<<"Kembalian Anda = "<<data_travel[0].kembalian_anda<<endl;
        file1<<"Pembayaran Anda Telah Lunas"<<endl;
        file1.close();
        break;
        }
        {
        case 3:
            cout<<"Terimakasih Telah Menggunakan Jasa Travel Kami"<<endl;
            break;
        }
        {
        default:
            cout<<"Maaf Pilihan Anda Tidak Tersedia"<<endl;
            break;
        }
        }
        getch();
        }while(pilihan!=3);//perulangan
   return 0;
}
