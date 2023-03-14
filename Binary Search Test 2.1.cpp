#include <iostream>
using namespace std;

//Deklarasikan fungsi binarySearch dengan parameter arr, i, r, dan x.
int binarySearch(int arr[], int i, int r, int x) {
	//Di dalam fungsi binarySearch, buat loop while dengan kondisi i <= r.
   for (;i <= r; ) {
   	//Hitung nilai tengah m dengan cara i + (r - i) / 2.
      int m = i + (r - i) / 2;
      
      //Jika elemen arr[m] sama dengan x, kembalikan nilai m.
      if (arr[m] == x) return m;
      
      //Jika elemen arr[m] kurang dari x, ubah nilai i menjadi m + 1.
      if (arr[m] < x) i = m + 1;
      
      //Jika elemen arr[m] lebih besar dari x, ubah nilai r menjadi m - 1.
      else r = m - 1;
   }
   //Jika elemen tidak ditemukan setelah loop while selesai, kembalikan nilai -1.
   return -1; // elemen tidak ditemukan
}
//Fungsi Main
int main() {
	//Deklarasikan variabel n dan x.
   int n, x;
   
   //Tampilkan pesan atau output untuk memasukkan jumlah array dan simpan nilai dalam variabel n.
   cout << "Masukkan array: ";
   
   //Deklarasikan array dengan ukuran n dan nama arr.
   cin >> n;
   int arr[n];
   
   //Tampilkan pesan untuk memasukkan elemen dalam array secara terurut dan simpan nilai dalam array arr.
   cout << "Masukkan elemen dalam array secara terurut: ";
   for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }
//Tampilkan pesan untuk memasukkan elemen yang dicari dan simpan nilai dalam variabel x.
   cout << "Hasil elemen yang dicari terletak pada indeks: ";
   cin >> x;
   
// Panggil fungsi binarySearch dengan parameter arr, 0, n - 1, dan x dan simpan nilai yang dikembalikan dalam variabel result.
   int result = binarySearch(arr, 0, n - 1, x);

//Jika nilai result sama dengan -1, tampilkan pesan "Elemen tidak ditemukan".
   if (result == -1) {
      cout << "Elemen tidak ditemukan" << endl;
   } 
 //Jika nilai result bukan -1, tampilkan pesan "Elemen ditemukan di indeks ke-" ditambah nilai result.
   else {
      cout << "Elemen ditemukan di indeks ke-" << result << endl;
   }
   
   return 0;
}
