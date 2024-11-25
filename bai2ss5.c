#include <stdio.h>
int main() {
    int target = 42;
    int userInput;
    do {
        printf("Nhap mot so: ");
        scanf("%d", &userInput);
    } while (userInput != target);
    printf("Chinh xac! So la %d.\n", target);
    return 0;
}

