#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

/* directives and such */
#include <stdarg.h>  /* used for variadic functions */
#include <stdio.h>   /* used for printf */
#include <string.h>  /* used for data type string */
#include <stdlib.h>  /* used for malloc */

/* function prototypes */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* _VARIADIC_FUNCTIONS_H_ */
