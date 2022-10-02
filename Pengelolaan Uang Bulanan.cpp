// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    double awal, keluar, hasil, masuk;
    int i, k;
    cout << "masukan uang awal bulan : ";
    cin >> awal;
   for(k=1;k<3;k=k){
   for(i=1;i<=28;i++){
    cout << "tanggal " << i << "\n";
    cout << "masukan pengeluaran harian : ";
    cin >> keluar;
    awal = awal - keluar;
    cout << "sisa uang : " << awal <<"\n";
   }
   for(i=29;i<=31;i++){
    cout << "tanggal " << i << "\n";
    cout << "masukan pengeluaran harian (tidak ada tanggal = 0) : ";
    cin >> keluar;
    awal = awal - keluar;
    cout << "sisa uang : " << awal <<"\n";
  }
    cout << "masukan uang awal bulan : ";
    cin >> masuk;
    awal = awal + masuk;
    cout << "sisa uang : " << awal << "\n";
   }
    return 0;
}

