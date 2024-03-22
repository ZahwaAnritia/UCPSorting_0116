#include <iostream>
using namespace std;

int arr[16];
int zahwa;

void selectionSort(int arr[16], int zahwa) {
    for (int j = 0; j < zahwa - 1; j++) {
        int min_index = j;

        
        for (int i = j + 1; i < zahwa; i++) {
            if (arr[i] < arr[min_index]) {
                min_index = i;
            }
        }

        int temp = arr[j];
        arr[j] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main() {
    int arr[] = { 4, 3, 12, 9, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    selectionSort(arr, n);

    cout << "\nArray setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

//Tipe soal B
    //1. Bubble Sort membandingkan dan menukar elemen-elemen dengan cara berulang (n-1)
    //membandingkan elemen bersebelahan (secara berurutan)
    //yang pertama harus paling besar
    //2. Shell Sort membandingkan dengan menyortir data yang lebih banyak
    //3. jika ada beberapa data yang sudah terurut, maka algoritma yang digunakan yaitu insertionSort, karena intertionSort adalah algoritma yang banyak
    //terdapat kasus yang diurut, dengan insertionSort data dibagi menjadi dua bagian antara yang belum terurut dan yang sudah terurut
    //n=n-1
