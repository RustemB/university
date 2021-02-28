#include "stdio.h"
#include "./strings.h"

void strlen_test() {
    printf("\n### STRLEN ###\n");
    printf("strlen1(\"%s\") = %d // (must be 0)\n", "", strlen1(""));
    printf("strlen2(\"%s\") = %d // (must be 0)\n", "", strlen2(""));
    printf("strlen3(\"%s\") = %d // (must be 0)\n", "", strlen3(""));
    printf("strlen4(\"%s\") = %d // (must be 0)\n", "", strlen4(""));

    printf("strlen1(\"%s\") = %d // (must be 5)\n", "Linux", strlen1("Linux"));
    printf("strlen2(\"%s\") = %d // (must be 7)\n", "Windows", strlen2("Windows"));
    printf("strlen3(\"%s\") = %d // (must be 5)\n", "macOS", strlen3("macOS"));
    printf("strlen4(\"%s\") = %d // (must be 7)\n", "FreeBSD", strlen4("FreeBSD"));
    printf("\n");
}

void strcmp_test() {
    printf("\n### STRCMP ###\n");
    printf("strcmp1(\"%s\", \"%s\") = %d // (must be 0)\n", "", "", strcmp1("", ""));
    /* printf("strcmp2(\"%s\", \"%s\") = %d\n // (must be 0)", "", "", strcmp2("", "")); */
    /* printf("strcmp3(\"%s\", \"%s\") = %d\n // (must be 0)", "", "", strcmp3("", "")); */
    /* printf("strcmp4(\"%s\", \"%s\") = %d\n // (must be 0)", "", "", strcmp4("", "")); */
    printf("\n");
}

int main() {
    strlen_test();
    strcmp_test();
    return 0;
}
