#include "./strings.h"
#include "stdlib.h"

typedef char* str;

// {{{ strlen
int strlen1(str s) {
    const str a = s;
    for (; *s; s++)
        ;
    return s - a;
}

int strlen2(str s) { return *s ? 1 + strlen2(s + 1) : 0; }

int strlen3(str s) {
    int cnt = 0;
    while (*s++)
        ++cnt;
    return cnt;
}

int strlen4(str s) {
    int cnt = 0;
    for (; *s++; cnt++)
        ;
    return cnt;
}
// }}}

// {{{ strcmp
int strcmp1(str l, str r) {
    for (; *l == *r && *l; l++, r++)
        ;
    return *(unsigned char *)l - *(unsigned char *)r;
}

int strcmp2(str l, str r) {
    
    return 0;
}

int strcmp3(str, str);
int strcmp4(str, str);
// }}}

// {{{ strint
void strins1(str, str, str, str, int);
void strins2(str, str, str, str, int);
void strins3(str, str, str, str, int);
void strins4(str, str, str, str, int);
// }}}

// {{{ strcopy
void strcopy1(str, str);
void strcopy2(str, str);
void strcopy3(str, str);
void strcopy4(str, str);
// }}}

// {{{ strpos
int strpos1(str, str);
int strpos2(str, str);
int strpos3(str, str);
int strpos4(str, str);
// }}}

// {{{ strcat
str strcat1(int, ...);
str strcat2(int, ...);
str strcat3(int, ...);
str strcat4(int, ...);
// }}}
