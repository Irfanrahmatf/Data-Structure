#include<iostream>
using namespace std;
void swapping(int &a, int &b) {     //swap a dan b
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void merge(int *array, int l, int m, int r) {
   int i, j, k, nl, nr;
   //ukuran/size sub-arrays kanan dan kiri
   nl = m-l+1; nr = r-m;
   int larr[nl], rarr[nr];
   //isi sub-arrays kanan dn kiri
   for(i = 0; i<nl; i++)
      larr[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
   i = 0; j = 0; k = l;
   
   while(i < nl && j<nr) {
      if(larr[i] <= rarr[j]) {
         array[k] = larr[i];
         i++;
      }else{
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl) {       //element tambahan di kiri
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nr) {     //element tambahan di kanan
      array[k] = rarr[j];
      j++; k++;
   }
}
void mergeSort(int *array, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      // urutan array pertama dan kedua
      mergeSort(array, l, m);
      mergeSort(array, m+1, r);
      merge(array, l, m, r);
   }
}
int main() {
   int n;
   cout << "Masukkan jumlah element: ";
   cin >> n;
   int arr[n];     //buat array dengan jumlah elemen yang diinputkan
   cout << "Masukkan element:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Sebelum di sort: ";
   display(arr, n);
   mergeSort(arr, 0, n-1);     //(n-1) untuk indeks terakhir
   cout << "Sesudah di sort: ";
   display(arr, n);
}
