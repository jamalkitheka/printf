#ifndef PRINTF_H
#define PRINTF_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _strlen(char *s);
void print_char(char x);
int _strcmp(char *s1, char *s2);
int _printf(const char *format, ...);
void print_string(char *str);
void print_int(int x);
void print_decimal(int x);
void print_float(float x);
void print_hexadecimal(int x);
char* itoa(int val, int base);
void print_char(char x);

#endif
