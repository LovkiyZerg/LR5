#include <iostream>
#include "../Task3/Header.h"

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
int* diag_even_elements(int** array, int n, int k, int* res_size) {
    int count = 0;
    int j = 0;
    if (k < n) {
        for (int i = 0; i < k; ++i) {
            if (array[i][j] % 2 == 0) {
                ++count;
            }
            ++j;
        }
        if (count == 0) {
            *res_size = 1;
        }
        else {
            *res_size = count;
        }
        int* result = new int[*res_size];
        j = 0;
        int f = 0;
        for (int i = 0; i < k; ++i) {
            if (array[i][j] % 2 == 0) {
                result[f] = array[i][j];
                ++f;
            }
            ++j;
        }
        if (count == 0) {
            result[0] = 0;
        }
        return result;
    }
    else {
        for (int i = 0; i < n; ++i) {
            if (array[i][j] % 2 == 0) {
                ++count;
            }
            ++j;
        }
        if (count == 0) {
            *res_size = 1;
        }
        else {
            *res_size = count;
        }
        int* result = new int[*res_size];
        j = 0;
        int f = 0;
        for (int i = 0; i < n; ++i) {
            if (array[i][j] % 2 == 0) {
                result[f] = array[i][j];
                ++f;
            }
            ++j;
        }
        if (count == 0) {
            result[0] = 0;
        }
        return result;
    }
}
int multiplication_of_array(int* array, int start, int end) {
    if (start == end && end == 0) {
        return 0;
    }
    else if (start == end) {
        return 1;
    }
    else {
        return array[start] * multiplication_of_array(array, start + 1, end);
    }
}