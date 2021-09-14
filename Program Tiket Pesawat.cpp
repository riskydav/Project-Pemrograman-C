#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
main()
{
    char lagi,napes[20];
    long int harga=0,tolbay,bayar,kembali,kode,kelas;
    float jumtik;
awal:
    system("cls");
    cout<<"PROGRAM TIKET PESAWAT"<<endl;

    cout<<"   JAKARTA-MALAYSIA"<<endl;
    cout<<"==========================="<<endl;
    cout<<"\t1.Merpati Airlines"<<endl;
    cout<<"\t2.Garuda Indonesia"<<endl;
    cout<<"\t3.Batavia Airlines"<<endl;
    cout<<"Kode Pesawat [1/2/3]";
    cin>>kode;
    cout<<"Kelas Pesawat :"<<endl;
    cout<<"\t1.Executive"<<endl;
    cout<<"\t2.Bisnis"<<endl;
    cout<<"\t3.Ekonomi   :"<<endl;
    cout<<"Pilih Kelas [1/2/3] : ";
    cin>>kelas;

   if(kode==1)

{
    cout<<"Merpati Airlines";
    if(kelas==1)harga=1500000;
    else if(kelas==2)harga=900000;
    else harga=700000;
}

if(kode=='2')
{
if(kelas=='1')harga=1200000;
else if(kelas=='2')harga=800000;
else harga=400000;}

if(kode=='3')
{
if(kelas=='1')harga=1000000;
else if(kelas=='2')harga=700000;
else harga=300000;}

system("cls");
cout<<"\tPROGRAM TIKET PESAWAT";
cout<<"\t  JAKARTA-MALAYSIA";
cout<<"=======================================";
cout<<"Nama Pesawat\t:"<<napes<<endl;
cout<<"Harga Tiket\t:"<<harga<<endl;
cout<<"Jumlah Tiket\t:";
cin>>jumtik;
tolbay=harga*jumtik;
cout<<"Total Bayar\t:"<<tolbay<<endl;
cout<<"Uang Bayar\t:";
cin>>bayar;
kembali=bayar-tolbay;
cout<<"Kembali   \t:"<<kembali<<endl;

puts("\t*****TERIMA KASIH*****\n");
cout<<"Ingin Input Lagi? [Y/N]:";
cin>>lagi;

if(lagi=='Y'||lagi=='y')
goto awal;
else
    system("cls");
getch ();
}

