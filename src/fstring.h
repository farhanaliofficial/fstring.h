#ifndef F_STRING
#define F_STRING

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define MEM_ERROR "Failed to allocate memory for string!"

typedef struct String{
    char *value;
    size_t length;
} string;

string* new_string(const char *istr);
char* get_string(string *str);
size_t length_string(string *str);
int free_string(string *str);
int cat_string(string *str, string *nstr);
int cat_string(string *str, string *nstr);
int cat_cstring(string *str, const char *nstr);
int cmp_string(string *str, string *str2);
int cmp_cstring(string *str, const char *str2);
int sub_string(string *str, string *str2);
int sub_cstring(string *str, const char *str2);

#endif
