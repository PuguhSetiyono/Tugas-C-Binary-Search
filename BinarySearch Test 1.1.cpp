#include <iostream>
using namespace std;

//Deklarasikan fungsi binarySearch dengan parameter arr, i, r, dan x.
int binarySearch(int arr[], int i, int r, int x) {
   //Di dalam fungsi binarySearch, buat loop while dengan kondisi i <= r.
   while (i <= r) {
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
   //Di dalam fungsi main, buat array (arr) dengan nilai {2, 4, 6, 8, 10}.
   int arr[] = {2, 4, 6, 8, 10};
   int size = 5;

   //Tentukan elemen yang dicari x dengan nilai 6.
   int x = 6;

   //Panggil fungsi binarySearch dengan parameter arr, 0, n - 1, dan x, dan simpan hasilnya di variabel result.
   int result = binarySearch(arr, 0, size - 1, x);

   //Jika result sama dengan -1, cetak "Elemen tidak ditemukan" ke layar.
   (result == -1) ? cout << "Elemen tidak ditemukan"

   //Jika result tidak sama dengan -1, cetak "Elemen ditemukan di indeks ke-" diikuti dengan nilai result ke layar.
                  : cout << "Elemen ditemukan di indeks ke-" << result;

   return 0;
}

