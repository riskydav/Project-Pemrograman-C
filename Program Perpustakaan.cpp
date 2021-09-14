#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nim, pinjam, menu, komputer, tanggal_p, bulan_p, tahun_p, tanggal_k, bulan_k, tahun_k, kembali, durasi,  pilih, keluar, a, b, nilai, i, j, k;
    string nama, kelas, buku;
    char survey, ulang;

    cout << "Kelompok 6 Tugas Besar Algoritma & Pemrograman" << endl;
    cout << "Nama Kelompok :" << endl;
    cout << "1. Apriyani Aulia Zahari (19201011)" << endl;
    cout << "2. Suci Ramadhani        (19201015)" << endl;
    cout << "3. Uki Baskoro           (19201022)" << endl;
    cout << "4. Mohammad Yudi         (19201031)" << endl;
    cout << "5. Risky David Kasyanto  (19201038)" << endl;
    cout << "Kelas : D3TT-07-A" <<endl;
    cout << "Dosen Pembimbing : Fauza Khair,S.T.,M.Eng." << endl;
    cout << endl << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "|         PERPUSTAKAAN INSTITUT TEKNOLOGI TELKOM PURWOKERTO            |" << endl;
    cout << "|        Jl. DI Panjaitan No.128, Pancurawis, Purwokerto Kidul         |" << endl;
    cout << "|      Kec. Purwokerto Sel., Kabupaten Banyumas, Jawa Tengah 53147     |" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "Silahkan Isi Data Berikut" << endl;
    cout << "NIM        : ";
    cin >> nim;
    cout << "Nama       : ";
    cin >> nama;
    getline (cin, nama);
    cout << "Kelas      : ";
    cin >> kelas;
    cout << "Hallo" << nama << endl;
    cout << "~ Selamat Datang di Perpustakaan Institut Teknologi Telkom Purwokerto! ~" << endl;
    cout << "" << endl;
    cout << "Pilihan Menu   :" << endl;
    cout << "1. Password Komputer Perpustakaan" << endl;
    cout << "2. Peminjaman Buku" << endl;
    cout << "3. Pengembalian Buku" << endl;
    cout << "Masukkan Pilihan   : ";
    cin >> menu;
    cout << endl;
    if (menu==1)
    {
        cout << "Perpustakaan ini dilengkapi dengan 5 unit komputer" << endl;
        cout << "Untuk dapat menggunakannya, anda harus memasukkan password" << endl;
        cout << "Komputer nomor berapa yang ingin anda gunakan? [1-5]" << endl;
        cin >> komputer;
        if (komputer==1)
        {
            cout << "Password Komputer 1 : 12345" << endl;
        }
        else if (komputer==2)
        {
            cout << "Password Komputer 2 : 67890" << endl;
        }
        else if (komputer==3)
        {
            cout << "Password Komputer 3 : qwerty" << endl;
        }
        else if (komputer==4)
        {
            cout << "Password Komputer 4 : abcde" << endl;
        }
        else if (komputer==5)
        {
            cout << "Password Komputer 5 : fghij" << endl;
        }
    }
    //Peminjaman Buku
    else if (menu==2)
    {
        cout << "Silahkan Isi Format Peminjaman Buku" << endl;
        cout << "Berapa jumlah buku yang ingin anda pinjam?" << endl;
        cin >> pinjam;
        for(a=0;a<pinjam;a++)
        {
            cout << "Masukkan judul buku :" << endl;
            cin >> buku;
            getline(cin, buku);
            cout << "Masukkan tanggal hari ini [tanggal/bulan/tahun] : ";
            cin >> tanggal_p;
            cout << "Horeee Peminjaman Berhasil! Selamat Membaca :)" << endl;
            cout << "Durasi Peminjaman Selama 7 Hari" << endl;
        }
    }
    else if (menu==3)
    {
        cout << "Silahkan Isi Format Pengembalian Buku" << endl;
        cout << "Berapa jumlah buku yang ingin anda kembalikan?" << endl;
        cin >> kembali;
        for(b=0;b<kembali;b++)
        {
            cout << "Masukkan judul buku :" << endl;
            cin >> buku;
            getline(cin, buku);
            cout << "Masukkan tanggal,bulan, dan tahun peminjaman" << endl;
            cout << "Tanggal peminjaman : " << endl;
            cin >> tanggal_p;
            cout << "Bulan peminjaman   : " << endl;
            cin >> bulan_p;
            cout << "Tahun peminjaman   : " << endl;
            cin >> tahun_p;
            cout << endl;
            cout << "Masukkan tanggal,bulan, dan tahun pengembalian (hari ini)" << endl;
            cout << "Tanggal pengembalian : " << endl;
            cin >> tanggal_k;
            cout << "Bulan pengembalian   : " << endl;
            cin >> bulan_k;
            cout << "Tahun pengembalian   : " << endl;
            cin >> tahun_k;
            durasi = ((tahun_k-tahun_p)*365 + (bulan_k-bulan_p)*30 + (tanggal_k-tanggal_p));
            cout << "Total Durasi Peminjaman : " << durasi << " hari" << endl;
            if (durasi<=7)
            {
                cout << "Proses Pengembalian Buku Berhasil" << endl;
                cout << endl;
            }
            else if (durasi>7)
            {
                cout << "Anda Telah Melebihi Durasi Peminjaman Buku" << endl;
                cout << "Dikenakan Denda Sebesar Rp. 500,- /hari" << endl;
                cout << "Perhitungan Dendanya Sebagai Berikut :" << endl;
                cout << "Total Durasi Peminjaman - 7 hari =.... x Rp. 500 = Rp...." << endl;
                cout << "Silahkan Bayarkan Kepada Petugas Perpustakaan" << endl;
                cout << endl;
            }
        }
    }
    else
    {
        cout << "Pilihan yang anda masukkan salah" << endl;
    }

    cout << endl;
    //Survey Perpustakaan
    cout << "Mahasiswa Diwajibkan Untuk Mengisi Survey Perpustakaan" << endl;
    cout << "1. Survey Kepuasan" << endl;
    cout << "2. Penilaian Perpustakaan" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilihan anda   : ";
    cin >> pilih;
    switch (pilih)
    {
        case 1:
        do
        {
        cout << "Harap mengisi survey kepuasan ini" << endl;
        cout << "Apakah anda merasa puas [Y/N]  : ";
        cin >> survey;
        cout << "Ulangi survey [Y/N]?           : ";
        cin >> ulang;
        }
        while(ulang=='Y'||ulang=='y');
        {
            cout << "Tanggapan anda sudah sudah terekam" << endl;
            cout << "Terima kasih atas kunjungan anda hari ini" << endl;
        }
        break;
        case 2:
        cout << "Beri Nilai Untuk Perpustakaan [1-10]" << endl;
        cout << "";
        cin >> nilai;
        for(i=1;i<=nilai;i++)
        {
            for(j=1;j<i;j++)
        {
            cout << " ";
        }
        for(k=1;k<=nilai;k++)
        {
            cout << "*";
        }
        cout <<endl;
        }
        for(i=nilai;i>=1;i--)
        {
            for(j=1;j<i;j++)
        {
            cout << " ";
        }
        for(k=1;k<=nilai;k++)
        {
            cout << "*";
        }
        cout << endl;
        }
        break;
        case 3:
        cout << "Terima kasih atas kunjungan anda hari ini" << endl;
    }
    return 0;
}
