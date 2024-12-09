// desc: sortir dan mencari jumlah durian yang memiliki berat tertentu dari sejumlah N durian yang diinputkan
// author: fathin yassarahman
// date: 09 desember 2024

#include <stdio.h>

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

int hitungDuren(int arr[], int n, int target){
    int count = 0;
    for (int i = 0; i < n; i ++){
        if (arr[i] == target){
            count ++;
        }
    }
    return count;
}

void inputDuren(int arr[], int *n, int *target){
    scanf("%d", n);
    for (int i = 0; i < *n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", target);
    
}

void printDuren(int arr[], int n){
    for (int i = 0; i < n; i ++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}


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