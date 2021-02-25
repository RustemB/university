#include "./strings.h"
#include "stdlib.h"

int strlen1(char *s) {
    const char *a = s;
    for (; *s; s++)
        ;
    return s - a;
}

int strlen2(char *s) {
    if (*s)
        return 1 + strlen2(s + 1);
    return 0;
}

int strlen3(char *s) {
    size_t cnt = 0;
    while (*s) {
        ++cnt;
        ++s;
    }
    return cnt;
}

int strlen4(char *s);

int strcmp1(char *l, char *r) {
    for (; *l == *r && *l; l++, r++)
        ;
    return *(unsigned char *)l - *(unsigned char *)r;
}

int strcmp2(char *, char *);
int strcmp3(char *, char *);
int strcmp4(char *, char *);

void strins1(char *, char *, char *, char *, int);
void strins2(char *, char *, char *, char *, int);
void strins3(char *, char *, char *, char *, int);
void strins4(char *, char *, char *, char *, int);

void strcopy1(char *, char *);
void strcopy2(char *, char *);
void strcopy3(char *, char *);
void strcopy4(char *, char *);

int strpos1(char *, char *);
int strpos2(char *, char *);
int strpos3(char *, char *);
int strpos4(char *, char *);

char *strcat1(int, ...);
char *strcat2(int, ...);
char *strcat3(int, ...);
char *strcat4(int, ...);
