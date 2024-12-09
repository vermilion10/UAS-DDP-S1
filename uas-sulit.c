// desc: sortir dan mencari jumlah durian yang memiliki berat tertentu dari sejumlah N durian yang diinputkan
// author: fathin yassarahman
// date: 09 desember 2024

#include <stdio.h>

// Prosedur untuk menginput jumlah durian, berat masing-masing durian, dan berat yang dicari
// Input: array untuk menyimpan berat durian, pointer jumlah durian, pointer berat yang dicari
// Output: array terisi berat durian, jumlah durian, dan berat yang dicari
void inputDuren(int arr[], int *n, int *target){
    scanf("%d", n);
    for (int i = 0; i < *n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", target);
    
}

// Prosedur untuk menampilkan array berat durian
// Input: array berat durian, jumlah durian
// Output: deretan berat durian dipisahkan spasi
void printDuren(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Prosedur untuk mengurutkan array berat durian dari terkecil ke terbesar
// Input: array berat durian, jumlah durian
// Output: array berat durian terurut
void sortirDuren(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Fungsi untuk menghitung jumlah durian dengan berat tertentu
// Input: array berat durian, jumlah durian, berat yang dicari
// Output: jumlah durian yang memiliki berat sama dengan yang dicari
int hitungDuren(int arr[], int n, int target){ 
    int count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == target){
            count++;
        }
    }
    return count;
}

//main program
int main(){
    int duren[200];
    int N, target;
    int jumlah;
    inputDuren(duren, &N, &target);
    sortirDuren(duren, N);
    printDuren(duren, N);
    jumlah = hitungDuren(duren, N, target);
    if (jumlah > 0){
        printf("%d", jumlah);
    } else {
        printf("tidak ditemukan");
    }
    return 0;
}