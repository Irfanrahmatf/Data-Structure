#include <iostream>

using namespace std;

int main()
{
  int array[50], i, n;
  float rata, total=0;

  cout << "===============================================\n";
  cout << " Program Menghitung Banyak Data Rata-rata\n";
  cout << "===============================================\n";
  cout << "Masukkan banyaknya elemen array: ";
  cin >> n;

  for(i=0; i<n; i++){
    cout << "Nilai Ke-" << i+1 << " : ";
    cin >> array[i];
    total = total + array[i];
  }

  rata = total/n;
  cout << "Hasil nilai total adalah : " << total << endl;
  cout << "Hasil rata-rata adalah : " << rata << endl;

  return 0;

}
