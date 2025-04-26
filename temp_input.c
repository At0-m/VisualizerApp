#include <stdio.h>

int main() {
    int number;
    long factorial;

    printf("Введите число:\n");
    scanf("%d", &number);
    while (number!=-1) {
       
        factorial = 1;
        for (int i = 1; i <= number; i++) {
            factorial =factorial* i;
        }
        printf("Факториал равен %ld\n", factorial);
        printf("Введите число");
        scanf("%d", &number);
        
    }

    return 0;
}