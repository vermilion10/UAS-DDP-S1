// desc: menghitung jumlah jeruk berdasarkan label kualitas (E/L/R) dari sejumlah N jeruk
// author: ctto
// date: 09 december 2024

#include <stdio.h>

//-----------------------------------------------------------------------------------------------//
// Prosedur untuk menginput jumlah jeruk dan label kualitas masing-masing jeruk                  //
// Input: array untuk menyimpan label jeruk, pointer jumlah jeruk                                //
// Output: array terisi label jeruk dan jumlah jeruk                                             //
//-----------------------------------------------------------------------------------------------//
void inputJeruk(char arr[], int *n) {
    scanf("%d", n);    
    getchar();
    for (int i = 0; i < *n; i++) {
        scanf("%c", &arr[i]);  
        if (i < *n - 1) getchar();  
    }
}

//-----------------------------------------------------------------------------------------------//
// Fungsi untuk menghitung jumlah jeruk dengan label tertentu                                    //
// Input: array label jeruk, jumlah jeruk, label yang dicari                                     //
// Output: jumlah jeruk dengan label yang sesuai                                                 //
//-----------------------------------------------------------------------------------------------//
int hitungJeruk(char arr[], int n, char label) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == label) {
            count++;
        }
    }
    return count;
}

//-----------------------------------------------------------------------------------------------//
// Program Utama                                                                                 //
//-----------------------------------------------------------------------------------------------//
int main() {
    
    char jeruk[200];   
    int N;             
    int ekspor;        
    int lokal;         
    int rendah;        
    
    inputJeruk(jeruk, &N);  
    ekspor = hitungJeruk(jeruk, N, 'E');
    lokal = hitungJeruk(jeruk, N, 'L');
    rendah = hitungJeruk(jeruk, N, 'R');
    
    
    printf("%d\n", ekspor);
    printf("%d\n", lokal);
    printf("%d\n", rendah);
    
    return 0;
}
