//JUDUL PROGRAM
/******************************************************
Program Pelayanan Jasa Pengiriman Banyumas Antar Barang
Program ini digunakan admin jasa pengiriman untuk input
barang yang akan dikirim melalui ekspedisi se-kecamatan
yang ada di kabupaten Banyumas, Jawa Tengah
******************************************************/
#include<iostream>//header berfungsi sebagai pemanggil cout, cin, endl
#include<conio.h>//header berfungsi sebagai pemanggil getch()
#include<ctime>//header berfungsi sebagai manipulasi waktu seperti penggunaan beep atau bunyi
#include<fstream>//header berfungsi sebagai eksport hasil program
#include<windows.h>//header berfungsi sebagai pemanggil system()
#include<math.h>//header berfungsi sebagai pemanggil operasi aritmatika
using namespace std;
//DEKLARASI
char m,ch;//m untuk pilihan ya/tidak, ch untuk character *
int pilih;//pilih untuk memilih pilihan pada switch case,
string user="", pass="";//user untuk nama pengguna admin, pass untuk password user
//FUNGSI
class Cpengiriman //Merupakan fungsi yang membuat satu kelas nantinya akan memanggil dari fungsi yang ada pada suatu program
{

 public:
    char nama_pengirim[30], alamat_pengirim[30], nama_penerima[30], alamat_penerima[30], barang[20], packing, asuransi;
    int berat,kecamatan_pengirim,kecamatan_penerima,massa,jumlah_barang,jl,p,l,t;
    //massa untuk pilihan sistem pengukuran, jl untuk jasa layanan, p untuk panjang barang, l untuk lebar barang, t untuk tinggi barang
    long bayar,hp,hb;
    //bayar untuk uang yang dibayarkan pelanggan, hp untuk harga packing barang, hb untuk harga barang yang dikirimkan apabila ingin diasuransikan
    long harga_kg()//harga pengiriman yang ditentukan dengan berbagai layanan dan daerah
    {
     long h;//h untuk nominal harga
        if   ((kecamatan_pengirim==1)&&(kecamatan_penerima == 1)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==1)&&(1 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==1)&&(kecamatan_penerima == 1)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==1)&&(1 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==2)&&(kecamatan_penerima == 2)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==2)&&(kecamatan_penerima == 1)||(2 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==2)&&(kecamatan_penerima == 2)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==2)&&(kecamatan_penerima == 1)||(2 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==3)&&(kecamatan_penerima == 3)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==3)&&(0 < kecamatan_penerima < 3)||(3 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==3)&&(kecamatan_penerima == 3)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==3)&&(0 < kecamatan_penerima < 3)||(3 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==4)&&(kecamatan_penerima == 4)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==4)&&(0 < kecamatan_penerima < 4)||(4 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==4)&&(kecamatan_penerima == 4)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==4)&&(0 < kecamatan_penerima < 4)||(4 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==5)&&(kecamatan_penerima == 5)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==5)&&(0 < kecamatan_penerima < 5)||(5 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==5)&&(kecamatan_penerima == 5)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==5)&&(0 < kecamatan_penerima < 5)||(5 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==6)&&(kecamatan_penerima == 6)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==6)&&(0 < kecamatan_penerima < 6)||(6 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==6)&&(kecamatan_penerima == 6)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==6)&&(0 < kecamatan_penerima < 6)||(6 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==7)&&(kecamatan_penerima == 7)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==7)&&(0 < kecamatan_penerima < 7)||(7 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==7)&&(kecamatan_penerima == 7)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==7)&&(0 < kecamatan_penerima < 7)||(7 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==8)&&(kecamatan_penerima == 8)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==8)&&(0 < kecamatan_penerima < 8)||(8 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==8)&&(kecamatan_penerima == 8)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==8)&&(0 < kecamatan_penerima < 8)||(8 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==9)&&(kecamatan_penerima == 9)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==9)&&(0 < kecamatan_penerima < 9)||(9 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==9)&&(kecamatan_penerima == 9)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==9)&&(0 < kecamatan_penerima < 9)||(9 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==10)&&(kecamatan_penerima == 10)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==10)&&(0 < kecamatan_penerima < 10)||(10 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==10)&&(kecamatan_penerima == 10)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==10)&&(0 < kecamatan_penerima < 10)||(10 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==11)&&(kecamatan_penerima == 11)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==11)&&(0 < kecamatan_penerima < 11)||(11 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==11)&&(kecamatan_penerima == 11)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==11)&&(0 < kecamatan_penerima < 11)||(11 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==12)&&(kecamatan_penerima == 12)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==12)&&(0 < kecamatan_penerima < 12)||(12 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==12)&&(kecamatan_penerima == 12)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==12)&&(0 < kecamatan_penerima < 12)||(12 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==13)&&(kecamatan_penerima == 13)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==13)&&(0 < kecamatan_penerima < 13)||(13 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==13)&&(kecamatan_penerima == 13)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==13)&&(0 < kecamatan_penerima < 13)||(13 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==14)&&(kecamatan_penerima == 14)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==14)&&(0 < kecamatan_penerima < 14)||(14 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==14)&&(kecamatan_penerima == 14)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==14)&&(0 < kecamatan_penerima < 14)||(14 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==15)&&(kecamatan_penerima == 15)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==15)&&(0 < kecamatan_penerima < 15)||(15 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==15)&&(kecamatan_penerima == 15)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==15)&&(0 < kecamatan_penerima < 15)||(15 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==16)&&(kecamatan_penerima == 16)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==16)&&(0 < kecamatan_penerima < 16)||(16 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==16)&&(kecamatan_penerima == 16)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==16)&&(0 < kecamatan_penerima < 16)||(16 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==17)&&(kecamatan_penerima == 17)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==17)&&(0 < kecamatan_penerima < 17)||(17 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==17)&&(kecamatan_penerima == 17)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==17)&&(0 < kecamatan_penerima < 17)||(17 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==18)&&(kecamatan_penerima == 18)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==18)&&(0 < kecamatan_penerima < 18)||(18 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==18)&&(kecamatan_penerima == 18)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==18)&&(0 < kecamatan_penerima < 18)||(18 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==19)&&(kecamatan_penerima == 19)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==19)&&(0 < kecamatan_penerima < 19)||(19 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==19)&&(kecamatan_penerima == 19)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==19)&&(0 < kecamatan_penerima < 19)||(19 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==20)&&(kecamatan_penerima == 20)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==20)&&(0 < kecamatan_penerima < 20)||(20 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==20)&&(kecamatan_penerima == 20)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==20)&&(0 < kecamatan_penerima < 20)||(20 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==21)&&(kecamatan_penerima == 21)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==21)&&(0 < kecamatan_penerima < 21)||(21 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==21)&&(kecamatan_penerima == 21)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==21)&&(0 < kecamatan_penerima < 21)||(21 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==22)&&(kecamatan_penerima == 22)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==22)&&(0 < kecamatan_penerima < 22)||(22 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==22)&&(kecamatan_penerima == 22)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==22)&&(0 < kecamatan_penerima < 22)||(22 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==23)&&(kecamatan_penerima == 23)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==23)&&(0 < kecamatan_penerima < 23)||(23 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==23)&&(kecamatan_penerima == 23)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==23)&&(0 < kecamatan_penerima < 23)||(23 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==24)&&(kecamatan_penerima == 24)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==24)&&(0 < kecamatan_penerima < 24)||(24 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==24)&&(kecamatan_penerima == 24)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==24)&&(0 < kecamatan_penerima < 24)||(24 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==25)&&(kecamatan_penerima == 25)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==25)&&(0 < kecamatan_penerima < 25)||(25 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==25)&&(kecamatan_penerima == 25)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==25)&&(0 < kecamatan_penerima < 25)||(25 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==26)&&(kecamatan_penerima == 26)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==26)&&(0 < kecamatan_penerima < 26)||(26 < kecamatan_penerima <= 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==26)&&(kecamatan_penerima == 26)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==26)&&(0 < kecamatan_penerima < 26)||(26 < kecamatan_penerima <= 27)&&(jl==2)) {h = 12000;}
        else if ((kecamatan_pengirim==27)&&(kecamatan_penerima == 27)&&(jl==1)) {h = 8000;}
        else if ((kecamatan_pengirim==27)&&(0 < kecamatan_penerima < 27)&&(jl==1)) {h = 10000;}
        else if ((kecamatan_pengirim==27)&&(kecamatan_penerima == 27)&&(jl==2)) {h = 10000;}
        else if ((kecamatan_pengirim==27)&&(0 < kecamatan_penerima < 27)&&(jl==2)) {h = 12000;}
        else {h=0;}
     return h;
    }
    long berat_barang()
    {
        double b;//nilai berat akhir barang/paket
        if   (massa==1){b = berat;}
        else if (massa==2){b = (p*l*t)/6000;}
        return b;
    }
   long packing_kayu()
    {
        long p;//nilai harga packing akhir barang/paket
        if   ((packing=='y')||(packing=='Y')){p = hp;}
        else if ((packing=='n')||(packing=='N')){p = hp;}
        return p;
    }
    long asuransi_barang()
    {
        long as;//nilai harga asuransi akhir barang/paket
        if   ((asuransi=='y')||(asuransi=='Y')){as = hb*0.1;}
        else if ((asuransi=='n')||(asuransi=='N')){as = hb;}
        return as;
    }
   long total_harga()
    {return harga_kg() * berat_barang();}
   long diskon_pengiriman()
    {
        long diskon;
        if   (berat_barang()>10){diskon = total_harga()*0.1;}
        else {diskon = 0;}
        return diskon;
    }
   long total_bayar()
    {return total_harga()+packing_kayu()+asuransi_barang()-diskon_pengiriman();}
   long kembalian()
    {return bayar - total_bayar();}
};
//ALGORITMA
int main()
{
    cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n";
    cout<<"TUGAS BESAR ALGORITMA DAN PEMOGRAMAN\n";
    cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n";
    cout<<"      D3 Teknik Telekomunikasi       \n";
    cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n";
    cout<<"Press Enter";
    cin.get();
    Login:
    system("CLS");
    Beep(1000,250);
    cout<<"=========================================================\n";
    cout<<"=Program Pelayanan Jasa Pengiriman Banyumas Antar Barang=\n";
    cout<<"=========================================================\n";
    //Login menggunakan Username dan Password
    cout<<"         Login Administrator Banyumas Antar Barang\n";
    cout<<"=========================================================\n";
    cout<<" Username : ";cin>>user;
    cout<<" Password : ";
    ch = _getch();
    while (ch!= 13)
    {
        pass.push_back(ch);
        cout<<'*';
        ch = _getch();
    }
        if ((user=="USER")&&(pass,"USER"))
        {
            goto MenuUtama;
        }
        else if ((user=="ADMIN")&&(pass,"ADMIN"))
        {
            goto MenuUtama;
        }
        else
        {
            tanya_kesempatan :
            cout<<'\7';
            cout<<"\nMaaf anda salah memasukkan Username atau Password\n";
            cout<<"Apakah anda ingin mencoba kembali ? (Y / N) : ";
            cin>>m;
            if ((m=='y')||(m=='Y'))
            {
                goto Login;
            }
            else if((m =='n')||(m =='N'))
            {
                goto selesai;
            }
            else
            {
                goto tanya_kesempatan;
            }
        cout<<"=========================================================\n";
        }
    MenuUtama:
    Beep(1000,250);cin.get();
    system("CLS");
    cout<<"=========================================================\n";
    cout<<"==========Jasa Pengiriman Banyumas Antar Barang==========\n";
    cout<<"=========================================================\n";
    cout<<"              1.Input Pengiriman Barang\n";
    cout<<"              2.Cek Harga Pengiriman\n";
    cout<<"=========================================================\n";
    cout<<"Masukan pilihan anda : ";
    cin>>pilih;
    Beep(1000,250);cin.get();
    system("CLS");
    switch (pilih)
    {
        case 1 :
        {
        Cpengiriman kirim;
        cout<<"\tEXPEDISI BANYUMAS ANTAR BARANG"<<"\n";
        cout<<"============================================"<<"\n";
        cout<<"\t\tDATA PAKET\n";
        cout<<"============================================"<<"\n";
        cout<<"Nama Pengirim    : "; gets(kirim.nama_pengirim);
        cout<<"Alamat Pengirim  : "; gets(kirim.alamat_pengirim);
        cout<<"Nama Penerima    : "; gets(kirim.nama_penerima);
        cout<<"Alamat Penerima  : "; gets(kirim.alamat_penerima);
        cout<<"============================================"<<"\n";
        cout<<"\t     KETERANGAN BARANG\n";
        cout<<"============================================"<<"\n";
        cout<<"Keterangan Barang    : "; gets(kirim.barang);
        Packing :
        cout<<"Packing Kayu <Y / N >    : ";cin>>kirim.packing;
        if   ((kirim.packing=='y')||(kirim.packing=='Y'))
        {
            cout <<"Harga Packing   : ";cin>>kirim.hp;
        }
        else if ((kirim.packing=='n')||(kirim.packing=='N'))
        {
            kirim.hp = 0;
        }
        else
        {
            tanya_kesempatan1 :
            cout<<'\7';
            cout<<"\nMaaf anda salah memasukkan pilihan\n";
            cout<<"Apakah anda ingin mencoba kembali ? (Y / N) : ";
            cin>>m;
            if ((m=='y')||(m=='Y'))
            {
                goto Packing;
            }
            else if((m =='n')||(m =='N'))
            {
                goto selesai;
            }
            else
            {
                goto tanya_kesempatan1;
            }
        }
        Asuransi :
        cout<<"Asuransi Barang <Y / N>  : ";cin>>kirim.asuransi;
        if   ((kirim.asuransi=='y')||(kirim.asuransi=='Y'))
        {
            cout <<"Harga Barang : ";cin>>kirim.hb;
            cout<<"Harga Asuransi    : "<<kirim.asuransi_barang()<<"\n";
        }
        else if ((kirim.asuransi=='n')||(kirim.asuransi=='N'))
        {
            kirim.hb = 0;
            cout<<"Harga Asuransi    : "<<kirim.asuransi_barang()<<"\n";
        }
        else
        {
            tanya_kesempatan2 :
            cout<<'\7';
            cout<<"\nMaaf anda salah memasukkan pilihan\n";
            cout<<"Apakah anda ingin mencoba kembali ? (Y / N) : ";
            cin>>m;
            if ((m=='y')||(m=='Y'))
            {
                goto Asuransi;
            }
            else if((m =='n')||(m =='N'))
            {
                goto selesai;
            }
            else
            {
                goto tanya_kesempatan2;
            }
        }
        cout<<"Jumlah Barang : "; cin>>kirim.jumlah_barang;
        Massa :
        cout<<"Massa Barang (Kg)  : \n1.Berat Barang\n2.Volume Barang\nPilih Massa : ";cin>>kirim.massa;
        if   (kirim.massa==1)
        {
            cout <<"Berat Barang : ";cin>>kirim.berat;
        }
        else if (kirim.massa==2)
        {
            cout <<"Panjang Barang (Cm) : ";cin>>kirim.p;
            cout <<"Lebar Barang (Cm) : ";cin>>kirim.l;
            cout <<"Tinggi Barang (Cm) : ";cin>>kirim.t;
            cout <<"Berat Barang : "<<kirim.berat_barang()<<endl;
        }
        else
        {
            tanya_kesempatan3 :
            cout<<'\7';
            cout<<"\nMaaf anda salah memasukkan pilihan\n";
            cout<<"Apakah anda ingin mencoba kembali ? (Y / N) : ";
            cin>>m;
            if ((m=='y')||(m=='Y'))
            {
                goto Massa;
            }
            else if((m =='n')||(m =='N'))
            {
                goto selesai;
            }
            else
            {
                goto tanya_kesempatan3;
            }
        }
        cout<<"Layanan Pengiriman :\n1.REG\n2.EXP\nPilih Layanan : "; cin>>kirim.jl;
        Beep(1000,250);cin.get();
        system("CLS");
        cout<<"\tEXPEDISI BANYUMAS ANTAR BARANG"<<"\n";
        cout<<"============================================"<<"\n";
        cout<<"   Daftar Kode Wilayah Kabupaten Banyumas\n";
        cout<<"============================================"<<"\n";
        cout<<"\t1.Kecamatan Ajibarang\n";
        cout<<"\t2.Kecamatan Banyumas\n";
        cout<<"\t3.Kecamatan Baturaden\n";
        cout<<"\t4.Kecamatan Cilongok\n";
        cout<<"\t5.Kecamatan Gumelar\n";
        cout<<"\t6.Kecamatan Jatilawang\n";
        cout<<"\t7.Kecamatan Kalibagor\n";
        cout<<"\t8.Kecamatan Karanglewas\n";
        cout<<"\t9.Kecamatan Kebasen\n";
        cout<<"\t10.Kecamatan Kedung Banteng\n";
        cout<<"\t11.Kecamatan Kembaran\n";
        cout<<"\t12.Kecamatan Kemranjen\n";
        cout<<"\t13.Kecamatan Lumbir\n";
        cout<<"\t14.Kecamatan Patikraja\n";
        cout<<"\t15.Kecamatan Pekuncen\n";
        cout<<"\t16.Kecamatan Purwojati\n";
        cout<<"\t17.Kecamatan Purwokerto Barat\n";
        cout<<"\t18.Kecamatan Purwokerto Selatan\n";
        cout<<"\t19.Kecamatan Purwokerto Timur\n";
        cout<<"\t20.Kecamatan Purwokerto Utara\n";
        cout<<"\t21.Kecamatan Rawalo\n";
        cout<<"\t22.Kecamatan Sokaraja\n";
        cout<<"\t23.Kecamatan Somagede\n";
        cout<<"\t24.Kecamatan Sumbang\n";
        cout<<"\t25.Kecamatan Sumpiuh\n";
        cout<<"\t26.Kecamatan Tambak\n";
        cout<<"\t27.Kecamatan Wangon\n";
        cout<<"Kode Kecamatan Pengirim [Pilih Sesuai No] : "; cin>>kirim.kecamatan_pengirim;
        cout<<"Kode Kecamatan Penerima [Pilih Sesuai No] : "; cin>>kirim.kecamatan_penerima;
        Beep(1000,250);cin.get();
        system("CLS");
        cout<<"============================================\n";
        cout<<"\tEXPEDISI BANYUMAS ANTAR BARANG"<<"\n";
        cout<<"============================================"<<"\n";
        cout<<"          RESI PEMBAYARAN PAKET\n";
        cout<<"============================================\n";
        cout<<"Nama Pengirim  : "; cout<<kirim.nama_pengirim<<"\n";
        cout<<"Alamat Pengirim  : "; cout<<kirim.alamat_pengirim<<"\n";
        cout<<"Kecamatan Pengirim : ";
        if (kirim.kecamatan_pengirim==1) {cout<<"Kecamatan Ajibarang\n";}
        else if (kirim.kecamatan_pengirim==2) {cout<<"Kecamatan Banyumas\n";}
        else if (kirim.kecamatan_pengirim==3) {cout<<"Kecamatan Baturaden\n";}
        else if (kirim.kecamatan_pengirim==4) {cout<<"Kecamatan Cilongok\n";}
        else if (kirim.kecamatan_pengirim==5) {cout<<"Kecamatan Gumelar\n";}
        else if (kirim.kecamatan_pengirim==6) {cout<<"Kecamatan Jatilawang\n";}
        else if (kirim.kecamatan_pengirim==7) {cout<<"Kecamatan Kalibagor\n";}
        else if (kirim.kecamatan_pengirim==8) {cout<<"Kecamatan Karanglewas\n";}
        else if (kirim.kecamatan_pengirim==9) {cout<<"Kecamatan Kebasen\n";}
        else if (kirim.kecamatan_pengirim==10) {cout<<"Kecamatan Kedung Banteng\n";}
        else if (kirim.kecamatan_pengirim==11) {cout<<"Kecamatan Kembaran\n";}
        else if (kirim.kecamatan_pengirim==12) {cout<<"Kecamatan Kemranjen\n";}
        else if (kirim.kecamatan_pengirim==13) {cout<<"Kecamatan Lumbir\n";}
        else if (kirim.kecamatan_pengirim==14) {cout<<"Kecamatan Patikraja\n";}
        else if (kirim.kecamatan_pengirim==15) {cout<<"Kecamatan Pekuncen\n";}
        else if (kirim.kecamatan_pengirim==16) {cout<<"Kecamatan Purwojati\n";}
        else if (kirim.kecamatan_pengirim==17) {cout<<"Kecamatan Purwokerto Barat\n";}
        else if (kirim.kecamatan_pengirim==18) {cout<<"Kecamatan Purwokerto Selatan\n";}
        else if (kirim.kecamatan_pengirim==19) {cout<<"Kecamatan Purwokerto Timur\n";}
        else if (kirim.kecamatan_pengirim==20) {cout<<"Kecamatan Purwokerto Utara\n";}
        else if (kirim.kecamatan_pengirim==21) {cout<<"Kecamatan Rawalo\n";}
        else if (kirim.kecamatan_pengirim==22) {cout<<"Kecamatan Sokaraja\n";}
        else if (kirim.kecamatan_pengirim==23) {cout<<"Kecamatan Somagede\n";}
        else if (kirim.kecamatan_pengirim==24) {cout<<"Kecamatan Sumbang\n";}
        else if (kirim.kecamatan_pengirim==25) {cout<<"Kecamatan Sumpiuh\n";}
        else if (kirim.kecamatan_pengirim==26) {cout<<"Kecamatan Tambak\n";}
        else if (kirim.kecamatan_pengirim==27) {cout<<"Kecamatan Wangon\n";}
        cout<<"Nama Penerima  : "; cout<<kirim.nama_penerima<<"\n";
        cout<<"Alamat Penerima  : "; cout<<kirim.alamat_penerima<<"\n";
        cout<<"Kecamatan Penerima : ";
        if (kirim.kecamatan_penerima==1) {cout<<"Kecamatan Ajibarang\n";}
        else if (kirim.kecamatan_penerima==2) {cout<<"Kecamatan Banyumas\n";}
        else if (kirim.kecamatan_penerima==3) {cout<<"Kecamatan Baturaden\n";}
        else if (kirim.kecamatan_penerima==4) {cout<<"Kecamatan Cilongok\n";}
        else if (kirim.kecamatan_penerima==5) {cout<<"Kecamatan Gumelar\n";}
        else if (kirim.kecamatan_penerima==6) {cout<<"Kecamatan Jatilawang\n";}
        else if (kirim.kecamatan_penerima==7) {cout<<"Kecamatan Kalibagor\n";}
        else if (kirim.kecamatan_penerima==8) {cout<<"Kecamatan Karanglewas\n";}
        else if (kirim.kecamatan_penerima==9) {cout<<"Kecamatan Kebasen\n";}
        else if (kirim.kecamatan_penerima==10) {cout<<"Kecamatan Kedung Banteng\n";}
        else if (kirim.kecamatan_penerima==11) {cout<<"Kecamatan Kembaran\n";}
        else if (kirim.kecamatan_penerima==12) {cout<<"Kecamatan Kemranjen\n";}
        else if (kirim.kecamatan_penerima==13) {cout<<"Kecamatan Lumbir\n";}
        else if (kirim.kecamatan_penerima==14) {cout<<"Kecamatan Patikraja\n";}
        else if (kirim.kecamatan_penerima==15) {cout<<"Kecamatan Pekuncen\n";}
        else if (kirim.kecamatan_penerima==16) {cout<<"Kecamatan Purwojati\n";}
        else if (kirim.kecamatan_penerima==17) {cout<<"Kecamatan Purwokerto Barat\n";}
        else if (kirim.kecamatan_penerima==18) {cout<<"Kecamatan Purwokerto Selatan\n";}
        else if (kirim.kecamatan_penerima==19) {cout<<"Kecamatan Purwokerto Timur\n";}
        else if (kirim.kecamatan_penerima==20) {cout<<"Kecamatan Purwokerto Utara\n";}
        else if (kirim.kecamatan_penerima==21) {cout<<"Kecamatan Rawalo\n";}
        else if (kirim.kecamatan_penerima==22) {cout<<"Kecamatan Sokaraja\n";}
        else if (kirim.kecamatan_penerima==23) {cout<<"Kecamatan Somagede\n";}
        else if (kirim.kecamatan_penerima==24) {cout<<"Kecamatan Sumbang\n";}
        else if (kirim.kecamatan_penerima==25) {cout<<"Kecamatan Sumpiuh\n";}
        else if (kirim.kecamatan_penerima==26) {cout<<"Kecamatan Tambak\n";}
        else if (kirim.kecamatan_penerima==27) {cout<<"Kecamatan Wangon\n";}
        cout<<"Berat (Kg)  : "; cout<<kirim.berat_barang()<<" kg\n";
        cout<<"Layanan (REG / EXP)  : ";
        if (kirim.jl==1) {cout<<"REG\n";}
        else if (kirim.jl==2) {cout<<"EXP\n";}
        cout<<"=========================================\n";
        cout<<"Harga Per Kg      : "; cout<<"Rp. "<<kirim.harga_kg()<<"\n";
        cout<<"Total Harga       : "; cout<<"Rp. "<<kirim.total_harga()<<"\n";
        cout<<"Harga Packing     : " ; cout <<"Rp. "<<kirim.hp<<"\n";
        cout<<"Harga Barang      : " ; cout <<"Rp. "<<kirim.hb<<"\n";
        cout<<"Harga Asuransi    : " ; cout <<"Rp. "<<kirim.asuransi_barang()<<"\n";
        cout<<"Diskon Pengiriman : "; cout<<"Rp. "<<kirim.diskon_pengiriman()<<"\n";
        cout<<"=========================================\n";
        cout<<"Total Pembayaran  : "; cout<<"Rp. "<<kirim.total_bayar()<<"\n";
        cout<<"Pembayaran        : Rp. "; cin>>kirim.bayar;
        cout<<"Kembalian         : "; cout<<"Rp. "<<kirim.kembalian()<<"\n";
        ofstream file1("Bukti Pembayaran.txt");//Output Keluaran File Program dalam bentuk bukti pembayaran
        file1<<"============================================\n";
        file1<<"\tEXPEDISI BANYUMAS ANTAR BARANG"<<"\n";
        file1<<"============================================"<<"\n";
        file1<<"          RESI PEMBAYARAN PAKET\n";
        file1<<"============================================\n";
        file1<<"Nama Pengirim  : "; file1<<kirim.nama_pengirim<<"\n";
        file1<<"Alamat Pengirim  : "; file1<<kirim.alamat_pengirim<<"\n";
        file1<<"Kecamatan Pengirim : ";
        if (kirim.kecamatan_pengirim==1) {file1<<"Kecamatan Ajibarang\n";}
        else if (kirim.kecamatan_pengirim==2) {file1<<"Kecamatan Banyumas\n";}
        else if (kirim.kecamatan_pengirim==3) {file1<<"Kecamatan Baturaden\n";}
        else if (kirim.kecamatan_pengirim==4) {file1<<"Kecamatan Cilongok\n";}
        else if (kirim.kecamatan_pengirim==5) {file1<<"Kecamatan Gumelar\n";}
        else if (kirim.kecamatan_pengirim==6) {file1<<"Kecamatan Jatilawang\n";}
        else if (kirim.kecamatan_pengirim==7) {file1<<"Kecamatan Kalibagor\n";}
        else if (kirim.kecamatan_pengirim==8) {file1<<"Kecamatan Karanglewas\n";}
        else if (kirim.kecamatan_pengirim==9) {file1<<"Kecamatan Kebasen\n";}
        else if (kirim.kecamatan_pengirim==10) {file1<<"Kecamatan Kedung Banteng\n";}
        else if (kirim.kecamatan_pengirim==11) {file1<<"Kecamatan Kembaran\n";}
        else if (kirim.kecamatan_pengirim==12) {file1<<"Kecamatan Kemranjen\n";}
        else if (kirim.kecamatan_pengirim==13) {file1<<"Kecamatan Lumbir\n";}
        else if (kirim.kecamatan_pengirim==14) {file1<<"Kecamatan Patikraja\n";}
        else if (kirim.kecamatan_pengirim==15) {file1<<"Kecamatan Pekuncen\n";}
        else if (kirim.kecamatan_pengirim==16) {file1<<"Kecamatan Purwojati\n";}
        else if (kirim.kecamatan_pengirim==17) {file1<<"Kecamatan Purwokerto Barat\n";}
        else if (kirim.kecamatan_pengirim==18) {file1<<"Kecamatan Purwokerto Selatan\n";}
        else if (kirim.kecamatan_pengirim==19) {file1<<"Kecamatan Purwokerto Timur\n";}
        else if (kirim.kecamatan_pengirim==20) {file1<<"Kecamatan Purwokerto Utara\n";}
        else if (kirim.kecamatan_pengirim==21) {file1<<"Kecamatan Rawalo\n";}
        else if (kirim.kecamatan_pengirim==22) {file1<<"Kecamatan Sokaraja\n";}
        else if (kirim.kecamatan_pengirim==23) {file1<<"Kecamatan Somagede\n";}
        else if (kirim.kecamatan_pengirim==24) {file1<<"Kecamatan Sumbang\n";}
        else if (kirim.kecamatan_pengirim==25) {file1<<"Kecamatan Sumpiuh\n";}
        else if (kirim.kecamatan_pengirim==26) {file1<<"Kecamatan Tambak\n";}
        else if (kirim.kecamatan_pengirim==27) {file1<<"Kecamatan Wangon\n";}
        file1<<"Nama Penerima  : "; file1<<kirim.nama_penerima<<"\n";
        file1<<"Alamat Penerima  : "; file1<<kirim.alamat_penerima<<"\n";
        file1<<"Kecamatan Penerima : ";
        if (kirim.kecamatan_penerima==1) {file1<<"Kecamatan Ajibarang\n";}
        else if (kirim.kecamatan_penerima==2) {file1<<"Kecamatan Banyumas\n";}
        else if (kirim.kecamatan_penerima==3) {file1<<"Kecamatan Baturaden\n";}
        else if (kirim.kecamatan_penerima==4) {file1<<"Kecamatan Cilongok\n";}
        else if (kirim.kecamatan_penerima==5) {file1<<"Kecamatan Gumelar\n";}
        else if (kirim.kecamatan_penerima==6) {file1<<"Kecamatan Jatilawang\n";}
        else if (kirim.kecamatan_penerima==7) {file1<<"Kecamatan Kalibagor\n";}
        else if (kirim.kecamatan_penerima==8) {file1<<"Kecamatan Karanglewas\n";}
        else if (kirim.kecamatan_penerima==9) {file1<<"Kecamatan Kebasen\n";}
        else if (kirim.kecamatan_penerima==10) {file1<<"Kecamatan Kedung Banteng\n";}
        else if (kirim.kecamatan_penerima==11) {file1<<"Kecamatan Kembaran\n";}
        else if (kirim.kecamatan_penerima==12) {file1<<"Kecamatan Kemranjen\n";}
        else if (kirim.kecamatan_penerima==13) {file1<<"Kecamatan Lumbir\n";}
        else if (kirim.kecamatan_penerima==14) {file1<<"Kecamatan Patikraja\n";}
        else if (kirim.kecamatan_penerima==15) {file1<<"Kecamatan Pekuncen\n";}
        else if (kirim.kecamatan_penerima==16) {file1<<"Kecamatan Purwojati\n";}
        else if (kirim.kecamatan_penerima==17) {file1<<"Kecamatan Purwokerto Barat\n";}
        else if (kirim.kecamatan_penerima==18) {file1<<"Kecamatan Purwokerto Selatan\n";}
        else if (kirim.kecamatan_penerima==19) {file1<<"Kecamatan Purwokerto Timur\n";}
        else if (kirim.kecamatan_penerima==20) {file1<<"Kecamatan Purwokerto Utara\n";}
        else if (kirim.kecamatan_penerima==21) {file1<<"Kecamatan Rawalo\n";}
        else if (kirim.kecamatan_penerima==22) {file1<<"Kecamatan Sokaraja\n";}
        else if (kirim.kecamatan_penerima==23) {file1<<"Kecamatan Somagede\n";}
        else if (kirim.kecamatan_penerima==24) {file1<<"Kecamatan Sumbang\n";}
        else if (kirim.kecamatan_penerima==25) {file1<<"Kecamatan Sumpiuh\n";}
        else if (kirim.kecamatan_penerima==26) {file1<<"Kecamatan Tambak\n";}
        else if (kirim.kecamatan_penerima==27) {file1<<"Kecamatan Wangon\n";}
        file1<<"Berat (Kg)  : "; file1<<kirim.berat_barang()<<" kg\n";
        file1<<"Layanan (REG / EXP)  : ";
        if (kirim.jl==1) {file1<<"REG\n";}
        else if (kirim.jl==2) {file1<<"EXP\n";}
        file1<<"=========================================\n";
        file1<<"Harga Per Kg      : "; file1<<"Rp. "<<kirim.harga_kg()<<"\n";
        file1<<"Total Harga       : "; file1<<"Rp. "<<kirim.total_harga()<<"\n";
        file1<<"Harga Packing     : " ; file1<<"Rp. "<<kirim.hp<<"\n";
        file1<<"Harga Barang      : " ; file1<<"Rp. "<<kirim.hb<<"\n";
        file1<<"Harga Asuransi    : " ; file1<<"Rp. "<<kirim.asuransi_barang()<<"\n";
        file1<<"Diskon Pengiriman : "; file1<<"Rp. "<<kirim.diskon_pengiriman()<<"\n";
        file1<<"=========================================\n";
        file1<<"Total Pembayaran  : "; file1<<"Rp. "<<kirim.total_bayar()<<"\n";
        file1<<"Pembayaran        : Rp. "<<kirim.bayar<<"\n";
        file1<<"Kembalian         : "; file1<<"Rp. "<<kirim.kembalian()<<"\n";
        file1.close();
        getch();
        Tanya1 :
        cout<<"Apakah Anda Ingin Kembali Ke Menu Utama? (Y / T) :";cin>>m;
        if ((m=='y')||(m=='Y'))
            goto MenuUtama;
        else if ((m=='t')||(m == 't'))
            goto selesai;
        else
            goto Tanya1;
        break;
        }
        case 2 :
        {
        Cpengiriman cek;
        cout<<"\tEXPEDISI BANYUMAS ANTAR BARANG"<<"\n";
        cout<<"============================================"<<"\n";
        cout<<" Daftar Harga Pengiriman Kabupaten Banyumas\n";
        cout<<"============================================"<<"\n";
        cout<<"\t1.Kecamatan Ajibarang\n";
        cout<<"\t2.Kecamatan Banyumas\n";
        cout<<"\t3.Kecamatan Baturaden\n";
        cout<<"\t4.Kecamatan Cilongok\n";
        cout<<"\t5.Kecamatan Gumelar\n";
        cout<<"\t6.Kecamatan Jatilawang\n";
        cout<<"\t7.Kecamatan Kalibagor\n";
        cout<<"\t8.Kecamatan Karanglewas\n";
        cout<<"\t9.Kecamatan Kebasen\n";
        cout<<"\t10.Kecamatan Kedung Banteng\n";
        cout<<"\t11.Kecamatan Kembaran\n";
        cout<<"\t12.Kecamatan Kemranjen\n";
        cout<<"\t13.Kecamatan Lumbir\n";
        cout<<"\t14.Kecamatan Patikraja\n";
        cout<<"\t15.Kecamatan Pekuncen\n";
        cout<<"\t16.Kecamatan Purwojati\n";
        cout<<"\t17.Kecamatan Purwokerto Barat\n";
        cout<<"\t18.Kecamatan Purwokerto Selatan\n";
        cout<<"\t19.Kecamatan Purwokerto Timur\n";
        cout<<"\t20.Kecamatan Purwokerto Utara\n";
        cout<<"\t21.Kecamatan Rawalo\n";
        cout<<"\t22.Kecamatan Sokaraja\n";
        cout<<"\t23.Kecamatan Somagede\n";
        cout<<"\t24.Kecamatan Sumbang\n";
        cout<<"\t25.Kecamatan Sumpiuh\n";
        cout<<"\t26.Kecamatan Tambak\n";
        cout<<"\t27.Kecamatan Wangon\n";
        cout<<"Kode Kecamatan Pengirim [Pilih Sesuai No] : "; cin>>cek.kecamatan_pengirim;
        cout<<"Kode Kecamatan Penerima [Pilih Sesuai No] : "; cin>>cek.kecamatan_penerima;
        cout<<"Layanan Pengiriman :\n1.REG\n2.EXP\nPilih Layanan : "; cin>>cek.jl;
        cout<<"Harga Pengiriman / Kg : Rp. " << cek.harga_kg()<<endl;
        getch();
        Tanya2 :
        cout<<"Apakah Anda Ingin Kembali Ke Menu Utama? (Y / T) :";cin>>m;
        if ((m=='y')||(m=='Y'))
            goto MenuUtama;
        else if ((m=='t')||(m == 't'))
            goto selesai;
        else
            goto Tanya2;
        break;
        }
        default :
        {
            kesempatan :
            cout<<"Anda Salah Memasukkan Pilihan\n";
            cout<<"Apakah Anda Ingin Mengulangi Pilihan? (Y / T) :";cin>>m;
            if ((m=='y')||(m=='Y'))
                goto MenuUtama;
            else if ((m=='t')||(m == 't'))
                goto selesai;
            else
                goto kesempatan;
            break;
        }
    }
    selesai :
    cout<<"\nTerimakasih \n";
 getch();
}
