#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

/* importing */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/* types and structures */

/**
 * struct datatype - struct
 * @letter: letter  initial of datatype
 * @func:function pointer
 */
typedef struct datatype
{
	char *var_t;
	void (*fp)(va_list);
} var_type;


/* macros valores constantes */

/* prototypes */

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void c_char(va_list args);
void i_integer(va_list args);
void f_float(va_list args);
void s_string(va_list args);
/* macros functions */

#endif /* _VARIADIC_FUNCTIONS_H */
