#ifndef SORT_H
#define SORT_H


#include <stdlib.h>
#include <stdio.h>
void print_array(const int *array, size_t size);
void radix_sort(int *array, size_t size);
int get_max(int *array, int size);
int get_digit(int number, int n);

#endif /* SORT_H */
