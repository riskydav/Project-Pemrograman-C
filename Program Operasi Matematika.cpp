#include <iostream>

using namespace std;

int main()
{
    int Op1 = 10;
    int Op2 = 5;
    int Hasil, Operasi;
    cout << "1. Operasi Penjumlahan" << endl;
    cout << "2. Operasi Pengurangan" << endl;
    cout << "3. Operasi Perkalian" << endl;
    cout << "4. Operasi Pembagian" << endl;
    cout << "Pilih nomor operasi : ";
    cin >> Operasi;
    
    if (Operasi == 1){Hasil = Op1 + Op2;
    cout << "Hasil Penjumlahan = " << Hasil << endl;}
    
    else if (Operasi == 2){Hasil = Op1 - Op2;
    cout << "Hasil Pengurangan = " << Hasil << endl;}
    
    else if (Operasi == 3){Hasil = Op1 * Op2;
    cout << "Hasil Perkalian = " << Hasil << endl;}
    
    else if (Operasi == 4){Hasil = Op1 / Op2;
    cout << "Hasil Pembagian = " << Hasil << endl;}
    
    else {cout << "Tidak ada operasi" << endl;}
    
    return 0;
    
}
