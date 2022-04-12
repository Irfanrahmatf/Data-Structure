#include <iostream>

using namespace std;

int main(){

//identifikasi data
    int n, fib, num=1, sum=0;

//inisialisasi variabel
    cout << "Masukkan bilangan fibonacci :";
    cin >> n;
    
// Proses Fibonacci (Rumus)
    for (int i =1; i<n; i++){
        fib= num + sum;
        sum = num;
        num = fib;
// Menampilkan tanda koma atau titik setelah Bil. Fibonacci
        cout<< fib <<" ";
    }
    cout<<endl;
    cin.get();
    return 0;
}
