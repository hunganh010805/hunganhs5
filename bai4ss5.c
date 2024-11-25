#include <stdio.h>
int main() {
    int n;
    //Nhap so tu 1 den 10
    printf("Nhap mot so nguyen tu 1 den 10: ");
    scanf("%d", &n);
    //In bcc
    printf("Bang cuu chuong cua %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}

