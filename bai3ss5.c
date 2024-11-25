#include <stdio.h>
int main() {
    int n, sum = 0;
    //Nhap so nguyen duong
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);
    //Tinh tong
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    //In ket qua
    printf("Tong cac so tu 1 den %d la: %d\n", n, sum);
    return 0;
}

