#include <iostream>
#include "../Task1/Header.h"

void get_execute(int* execute) {
    *execute = 0;
    while (1) {
        std::cin >> *execute;
        if (std::cin.fail() || (*execute != 1 && *execute != 0)) {
            std::cin.clear();
            std::cin.ignore(35767, '\n');
            std::cout << "Неверный ввод! Введите число заново" << std::endl;
            *execute = 0;
        }
        else {
            std::cin.ignore(35767, '\n');
            break;
        }
    }
}
void get_int(int* x) {
    *x = 0;
    while (1) {
        std::cin >> *x;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(35767, '\n');
            std::cout << "Неверный ввод! Введите число заново" << std::endl;
            *x = 0;
        }
        else {
            std::cin.ignore(35767, '\n');
            break;
        }
    }
}
void get_double(double* x) {
    *x = 0;
    while (1) {
        std::cin >> *x;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(35767, '\n');
            std::cout << "Неверный ввод! Введите число заново" << std::endl;
            *x = 0;
        }
        else {
            break;
        }
    }
}
void solve_equation(double* A, double* B, double* res, int size) {
    for (int i = 0; i < size; ++i) {
        if (A[i] == 0) {
            res[i] = 0;
        }
        else {
            res[i] = (-1) * B[i] / A[i];
        }
    }
}