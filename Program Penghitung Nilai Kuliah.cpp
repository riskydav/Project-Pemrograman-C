#include<iostream>
using namespace std;

int main(){
    int sks[10],bobot[10],a, total=0,totalbobot=0,totalnilai=0,totalnilai2=0;  // deklarasi variabel
    float ipk;
    char mk[20][10];// [20] karakter dan 10 data
    string b;
            do{
        cout<<"--------------------------------------"<<endl;
        cout<<"MENGHITUNG SKS, BOBOT, NILAI, DAN IPK"<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"Masukan batas perulangan akhir: ";cin>>a;
        cout<<"--------------------------------------"<<endl;
        for(int i=0; i<a; i++){
            cout<<" 1. Masukan Nama Mata Kuliah              : "; cin>>mk[i];
            cout<<" 2. Masukan SKS Mata Kuliah               : "; cin>>sks[i];
            cout<<" 3. Masukan Bobot Nilai Mata Kuliah (0-4) : "; cin>>bobot[i];
            cout<<endl<<endl;
            totalbobot+=bobot[i];
            total+=sks[i];
            totalnilai=sks[i]*bobot[i];
            totalnilai2+=totalnilai;
        }
        ipk=(float)totalnilai2/total;
        cout<<"no. MK / SKS / bobot"<<endl;
        int i=0;
        while(i<a){
            cout<<i<<". "<<mk[i]<<" / "<<sks[i]<<" / "<<bobot[i]<<endl;
            i++;
        }
        cout<<"Total SKS   : "<<total<<endl;
        cout<<"Total bobot : "<<totalbobot<<endl;
        cout<<"IPK         : "<<ipk<<endl;
        cout<<"Total Nilai : "<<totalnilai2<<endl;
            cout << "Ingin Mengulang ? (y/t)";
            cin >> b;
        } while (b=="y");
    }

