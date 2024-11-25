#include <stdio.h>

int main() {
    int choice;
    double num1, num2;
    //Nhap 2 so bat ki
    printf("Nhap so thu nhat: ");
    scanf("%lf", &num1);
    printf("Nhap so thu hai: ");
    scanf("%lf", &num2);
    do {
    //Hien thi menu
        printf("\n===== CALCULATOR =====\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        if (choice == 1)
            printf("Ket qua: %.2lf\n", num1 + num2);
        else if (choice == 2)
            printf("Ket qua: %.2lf\n", num1 - num2);
        else if (choice == 3)
            printf("Ket qua: %.2lf\n", num1 * num2);
        else if (choice == 4) {
            if (num2 != 0)
                printf("Ket qua: %.2lf\n", num1 / num2);
            else
                printf("Khong the chia cho 0!\n");
        } else if (choice != 5)
            printf("Lua chon khong hop le!\n");
    } while (choice != 5);
    printf("Thoat chuong trinh.\n");
    return 0;
}

