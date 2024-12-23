#include <iostream>
#include "../Task4/Header.h"

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

int* zeroes_indexes(double** array, int size, int* num_of_zeroes) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (array[i][j] == 0) {
                *num_of_zeroes += 1;
            }
        }
    }
    int* indexes = new int[*num_of_zeroes * 2];
    int f = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (array[i][j] == 0) {
                indexes[f] = i;
                indexes[f + 1] = j;
                f += 2;
            }
        }
    }
    return indexes;
}