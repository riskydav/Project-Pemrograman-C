#include <iostream>
using namespace std;

int main()
{
    int pilihan;
    char jawaban;
    int penduduk=33753023;
    int perempuan=17012988;
    int laki_laki=16740035;
    {
        do
        {
            cout << "=====================================" << endl;
            cout << "=Selamat Datang di Sensus Jateng App=" << endl;
            cout << "============ Menu Utama =============" << endl;
            cout << "=====================================" << endl;
            cout << "1. Cek Jumlah Penduduk Sekarang     "<< endl;
            cout << "2. Menu Lainya   " << endl;
            cout << "3. Exit          " << endl;
            cout << "Pilih Menu     : ";
            cin >> pilihan;
            if (pilihan==1)
            {
                cout << "Jumlah Penduduk Jawa Tengah Sekarang :  " << penduduk << endl;
            }
            else if (pilihan==2)
            {
                for (int i=jawaban;jawaban=='y'||jawaban=='Y';jawaban++)
                {
                    cout << "==== Menu Lainnya ====" << endl;
                    cout << "1. Penduduk Perempuan dan Laki-Laki"<< endl;
                    cout << "2. Info Suku dan Bahasa di Jawa Tengah"<< endl;
                    cout << "Silakan masukan pilhan anda : ";
                    cin >> pilihan;
                    if (pilihan==1)
                    {
                        while (jawaban=='y'||jawaban=='Y')
                        {
                            cout << "==== Menu Jumlah Penduduk Perempuan dan Laki-Laki ====" << endl;
                            cout << "1. Penduduk Perempuan " <<endl;
                            cout << "2. Penduduk Laki-laki " <<endl;
                            cout << "Silakan masukan pilhan anda : ";
                            cin >> pilihan;
                            if (pilihan==1)
                            {
                                cout << "Jumlah Penduduk Perempuan : " << perempuan << endl;
                            }
                            else if (pilihan==2)
                            {
                                cout << "Jumlah Penduduk Laki-laki : " << laki_laki << endl;
                            }
                            else
                            {
                                cout << "Pilihan Menu ini Tidak Tersedia." <<endl;
                            }
                            cout << "Ingin Kembali ke Menu Jumlah Penduduk Perempuan dan Laki-laki? (y/n) : ";
                            cin >> jawaban;
                        }
                    }
                    else if (pilihan==2)
                    {
                        cout << "==== Info Suku dan Bahasa di Jawa Tengah ====" <<endl;
                        cout << "1. Jumlah Suku di Jawa Tengah   : 11 Suku"<<endl;
                        cout << "2. Jumlah Bahasa di Jawa Tengah : 9 Bahasa"<<endl;
                    }
                    else
                    {
                        cout << "Pilihan Menu ini Tidak Tersedia." <<endl;
                    }
                }
            }
            else
            {
                cout << "Terima Kasih" <<endl;
            }
            cout << "Ingin Kembali ke Menu Utama? (y/n) : ";
            cin >> jawaban;
        }
        while (jawaban=='y'||jawaban=='Y');
        {
            cout << "Terima Kasih" <<endl;
        }
    }
    return 0;
}
