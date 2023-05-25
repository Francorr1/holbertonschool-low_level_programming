#ifndef PROTEKTOR
#define PROTEKTOR

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/* Function prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t l, size_t h);

#endif
