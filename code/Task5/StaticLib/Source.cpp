#include <iostream>
#include "../Task5/Header.h"


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
int* even_col_odd_val(int** array, int size, int* amount_of_nums) {
    for (int i = 0; i < size; ++i) {
        for (int j = 1; j < size; j += 2) {
            if (array[i][j] % 2 == 1) {
                *amount_of_nums += 1;
            }
        }
    }
    int res_size = 0;
    if (amount_of_nums == 0) {
        res_size = 1;
    }
    else {
        res_size = *amount_of_nums;
    }
    int* res_array = new int[res_size];
    int p = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = 1; j < size; j += 2) {
            if (array[i][j] % 2 == 1) {
                res_array[p] = array[i][j];
                ++p;
            }
        }
    }
    if (amount_of_nums == 0) {
        res_array[0] = 0;
    }
    return res_array;
}
double arithmetic_mean(int** array, int size) {
    if (size == 0) {
        return 0;
    }
    else {
        double sum = 0;
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < N; ++j) {
                sum = sum + array[i][j];
            }
        }
        double result = sum / (size * size);
        return result;
    }
}