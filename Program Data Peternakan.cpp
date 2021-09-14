#include <iostream>
using namespace std;

int main()
{
    int pilihan;
    char jawaban;
    int total_ayam = 7000;
    int ayam_betina = 4500;
    int ayam_jantan = 2500;
    {
        do
        {
            cout << "=====================================" << endl;
            cout << "         Data Peternakan Ayam        " << endl;
            cout << "           - Risky Jaya -            " << endl;
            cout << "=====================================" << endl;
	    cout << endl;
	    cout << "             Menu Utama              " << endl;
	    cout << endl;
            cout << "1. Cek Jumlah Ayam Ternak     "<< endl;
            cout << "2. Menu Lainnya   " << endl;
            cout << "3. Exit          " << endl;
            cout << "Pilih Menu     : ";
            cin >> pilihan;
            if (pilihan==1)
            {
                cout << "Jumlah Total Ayam Ternak :  " << total_ayam << endl;
            }
            else if (pilihan==2)
            {
                for (int i=jawaban;jawaban=='y'||jawaban=='Y';jawaban++)
                {
                    cout << "==== Menu Lainnya ====" << endl;
                    cout << "1. Jumlah Ayam Jantan dan Ayam Betina"<< endl;
                    cout << "2. Info Jenis Ayam"<< endl;
                    cout << "Silakan masukan pilhan anda : ";
                    cin >> pilihan;
                    if (pilihan==1)
                    {
                        while (jawaban=='y'||jawaban=='Y')
                        {
                            cout << "==== Menu Jenis Ayam Jantan dan Ayam Betina ====" << endl;
                            cout << "1. Jumlah Ayam Jantan " <<endl;
                            cout << "2. Jumlah Ayam Betina " <<endl;
                            cout << "Silakan masukan pilhan anda : ";
                            cin >> pilihan;
                            if (pilihan==1)
                            {
                                cout << "Jumlah Ayam Jantan : " << ayam_jantan << endl;
                            }
                            else if (pilihan==2)
                            {
                                cout << "Jumlah Ayam Betina : " << ayam_betina << endl;
                            }
                            else
                            {
                                cout << "Pilihan Menu ini Tidak Tersedia." <<endl;
                            }
                            cout << "Ingin Kembali ke Menu Jenis Ayam Jantan dan Ayam Betina? (y/n) : ";
                            cin >> jawaban;
                        }
                    }
                    else if (pilihan==2)
                    {
                        cout << "==== Info Jenis Ayam ====" <<endl;
                        cout << "1. Jumlah Jenis Ayam Kampung  : 2500 ekor"<<endl;
                        cout << "2. Jumlah Jenis Ayam Potong : 4500 ekor"<<endl;
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
