// desc: menentukan jenis segitiga berdasarkan panjang ketiga sisinya
// author: ctto
// date: 09 december 2024

#include <stdio.h>

//-----------------------------------------------------------------------------------------------//
// Fungsi untuk mengecek apakah tiga sisi dapat membentuk segitiga                               //
// Input: tiga sisi segitiga (a, b, c)                                                           //
// Output: 1 jika bisa membentuk segitiga, 0 jika tidak                                          //
//-----------------------------------------------------------------------------------------------//
int isTriangle(int a, int b, int c) {
    return (a + b > c) && (b + c > a) && (a + c > b);
}

//-----------------------------------------------------------------------------------------------//
// Fungsi untuk menentukan jenis segitiga                                                        //
// Input: tiga sisi segitiga (a, b, c)                                                           //
// Output: string yang menunjukkan jenis segitiga                                                //
//-----------------------------------------------------------------------------------------------//
const char* getTriangleType(int a, int b, int c) {
    if (!isTriangle(a, b, c)) {
        return "Not a Triangle";
    }
    
    if (a == b && b == c) {
        return "Equilateral Triangle";
    }
    
    if (a == b || b == c || a == c) {
        return "Isosceles Triangle";
    }
    
    return "Scalene Triangle";
}

//-----------------------------------------------------------------------------------------------//
// Program Utama                                                                                 //
//-----------------------------------------------------------------------------------------------//
int main() {
    
    int N;              
    int a, b, c;        

    scanf("%d", &N);    
    
    for (int i = 0; i < N; i++) {
        scanf("%d %d %d", &a, &b, &c);
        printf("%s\n", getTriangleType(a, b, c));
    }
    
    return 0;
}
