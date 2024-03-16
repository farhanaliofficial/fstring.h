#include "fstring.h"

string* new_string(const char *istr){
    if(istr == NULL){
        perror("Null string");
        return NULL;
    }
    string *str = malloc(sizeof(struct String));
    if(str == NULL){
        perror(MEM_ERROR);
        return NULL;
    }
    str->value = calloc(1, strlen(istr) + 1);
    if(str->value == NULL){
        perror(MEM_ERROR);
        return NULL;
    }
    strcpy(str->value, istr);
    str->length = strlen(istr);
    return str;
}

char* get_string(string *str){
    return str->value;
}
size_t length_string(string *str){
    return str->length;
}
int free_string(string *str){
    if(str == NULL)
        return 0;
    if(str->value)
        free(str->value);
    free(str);
    return 1;
}


int cat_string(string *str, string *nstr){
    size_t cated_length = str->length + nstr->length;
    char *cated_string = realloc(str->value, cated_length + 1);
    if(cated_string == NULL){
        perror(MEM_ERROR);
        return 0;
    }

    strcat(cated_string, nstr->value);
    str->value = cated_string;
    str->length = cated_length;
    return 1;
}

int cat_cstring(string *str, const char *nstr){
    string* tmp_str = new_string(nstr);
    if(tmp_str == NULL){
        return 0;
    }
    int res = cat_string(str, tmp_str);
    free_string(tmp_str);
    return res;
}


int cmp_string(string *str, string *str2){
    if(str == NULL || str2 == NULL)
        return -1;
    return strcmp(str->value, str2->value);
}


int cmp_cstring(string *str, const char *str2){
    if(str == NULL || str2 == NULL)
        return -1;
    return strcmp(str->value, str2);
}
int sub_string(string *str, string *str2){
    if(str == NULL || str2 == NULL)
        return -1;
    char *sub = strstr(str->value, str2->value);
    if(sub == NULL)
        return -1;
    return sub - str->value;
}
int sub_cstring(string *str, const char *str2){
    string *tmp_str = new_string(str2);
    int res = sub_string(str, tmp_str);
    free(tmp_str);
    return res;
}
