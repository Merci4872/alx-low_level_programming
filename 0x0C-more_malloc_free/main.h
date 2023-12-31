#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int _putchar(char c);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int is_digit(char *num);
void multiply_and_print(char *num1, char *num2);

#endif /* MAIN_H */

