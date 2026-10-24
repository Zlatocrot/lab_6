#include <stdio.h>
#include <locale.h>
#include <math.h>  


int prac1(int years) 
{
    int a = 0;
    if (years % 4 == 0 && years % 100 != 0 || years % 400 == 0) {
        a = 1;
    }
    else {
        a = 0;
    }
    return a;
}

double prac2(double x) {
    // Контрольный пример:
    // если x = 4, то F(4) = 45 * 4^2 + 5 = 725
    // если x = 3, то F(3) = (5 * 3) / (10 * 3^2 + 1) = 0.164835
    double F;
    if (x > 3.6) {
        F = 45 * pow(x, 2) + 5;
    }
    else {
        F = (5.0 * x) / (10.0 * pow(x, 2) + 1.0);
    }
    return F;
}


int dz(int A, int B) {
    if (B == 0) 
    {
        printf("Ошибка: деление на ноль\n");
    }
    else 
    {
        printf("%s\n", (A % B == 0) ? "Да, числа делятся нацело" : "Нет, числа не делятся нацело");
    }
    return 0;
}

int main() {

    setlocale(LC_ALL, "ru_RU.UTF-8");

    printf("Задание 1\n\n");
    int years;
    printf("Впишите год: ");
    scanf_s("%d", &years);
    int year = prac1(years);
    if (year == 1) {
        printf("Год %d високосный\n", years);
    }
    else {
        printf("Год %d не високосный\n", years);
    }


    printf("\nЗадание 2\n\n");
    double x;
    printf("Введите x: ");
    scanf_s("%lf", &x);
    double F = prac2(x);
    printf("F(%.6lf) = %.6f  (%s)\n", x, F,
        (x > 3.6) ? "x > 3.6" : "x <= 3.6");


    printf("\nДомашнее задание\n\n");
    int A, B;
    printf("Введите A: ");
    scanf_s("%d", &A);
    printf("Введите B: ");
    scanf_s("%d", &B);
    dz(A, B);
}