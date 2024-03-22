#include <iostream>
using namespace std;

int arr[16];
int zahwa;

void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada array";
        cin >> zahwa;
        if (zahwa <= 16)
            break;
        else {
            cout << "\zahwaArray dapat mempunyai maksimal 20 elemen.\zahwa";

        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < zahwa; i++) {
        cout << "Data ke-" << (i + 1) << ":";
        cin >> arr[i];

    }
  
}

void selectionSort(int arr[16], int zahwa) {
  
    for (int j = 0; j < zahwa - 1; j++) { //step 1
        int min_index = j; //step 2a

        
        for (int i = j + 1; i < zahwa; i++) { //step 2b
            if (arr[i] < arr[min_index]) { //step 2c
                min_index = i;
            }
        }

        int temp = arr[j]; 
        arr[j] = arr[min_index]; //step 3
        arr[min_index] = temp;
    }
}

int main() {
    int arr[16] = { 4, 3, 12, 9, 11 };
    int zahwa = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < zahwa; i++) {
        cout << arr[i] << " ";
    }

    selectionSort(arr, zahwa);

    cout << "\nArray setelah diurutkan: ";
    for (int i = 0; i < zahwa; i++) {
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
