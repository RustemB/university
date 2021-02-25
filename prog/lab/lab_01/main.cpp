#include "unistd.h"
#include <csignal>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#define N 10

void bubble_sort(int *, int);
void selection_sort(int *, int);
void insertion_sort(int *, int);

void help() {
    printf("0 - bubble sort\n");
    printf("1 - selection sort\n");
    printf("2 - insertion sort\n");
}

void interupt_handker(int s) {
    printf("\e[1;1H\e[2J");
    printf("\e[?25h");
    exit(0);
}

int main(int argc, char *argv[]) {
    signal(SIGINT, interupt_handker);

    if (argc < 2) {
        help();
        return 0;
    }
    printf("\e[?25l");
    printf("\e[1;1H\e[2J");
    srand(time(NULL));
    int a[N];
    for (int i = 0; i < N; i++) {
        a[i] = rand() % 20;
    }
    printf("\e[1;1H\e[2J");
    for (int i = 0; i < N; i++) {
        printf("%4d", a[i]);
        fflush(stdout);
        usleep(250000);
    }
    printf("\n");

    if (!strcmp(argv[1], "0"))
        bubble_sort(a, N);
    else if (!strcmp(argv[1], "1"))
        selection_sort(a, N);
    else if (!strcmp(argv[1], "2"))
        insertion_sort(a, N);
    else
        help();

    printf("\e[1;1H\e[2J");
    for (int i = 0; i < N; i++)
        printf("\e[1;36m%4d\e[m", a[i]);
    printf("\n");
    printf("\e[?25h");
    return 0;
}

void bubble_sort(int *a, int n) {
    int i, t, j, s = 1;
    for (j = n; s; j--) {
        s = 0;
        printf("\e[1;1H\e[2J");
        for (int k = 0; k < n; k++) {
            if (k == j) {
                printf("\e[1;31m%4d\e[m", a[k]);
            } else if (k > j) {
                printf("\e[1;36m%4d\e[m", a[k]);
            } else {
                printf("%4d", a[k]);
            }
        }
        printf("\n");
        sleep(1);
        for (i = 1; i < j; i++) {
            printf("\e[1;1H\e[2J");
            for (int k = 0; k < n; k++) {
                if (k == j) {
                    printf("\e[1;31m%4d\e[m", a[k]);
                } else if (k == i) {
                    printf("\e[1;33m%4d\e[m", a[k]);
                } else if (k == i - 1) {
                    printf("\e[1;35m%4d\e[m", a[k]);
                } else if (k > j) {
                    printf("\e[1;36m%4d\e[m", a[k]);
                } else {
                    printf("%4d", a[k]);
                }
            }
            printf("\n");
            sleep(1);

            if (a[i] < a[i - 1]) {
                t = a[i];
                a[i] = a[i - 1];
                a[i - 1] = t;
                s = 1;
                printf("\e[1;1H\e[2J");
                for (int k = 0; k < n; k++) {
                    if (k == j) {
                        printf("\e[1;31m%4d\e[m", a[k]);
                    } else if (k == i) {
                        printf("\e[1;35m%4d\e[m", a[k]);
                    } else if (k == i - 1) {
                        printf("\e[1;33m%4d\e[m", a[k]);
                    } else if (k > j) {
                        printf("\e[1;36m%4d\e[m", a[k]);
                    } else {
                        printf("%4d", a[k]);
                    }
                }
                printf("\n");
                sleep(1);
            }
        }
    }
}

void selection_sort(int *a, int n) {
    int i, j, m, t;
    for (i = 0; i < n; i++) {
        for (j = i, m = i; j < n; j++) {
            if (a[j] < a[m]) {
                m = j;
            }
            printf("\e[1;1H\e[2J");
            for (int k = 0; k < n; k++) {
                if (k == i) {
                    printf("\e[1;31m%4d\e[m", a[k]);
                } else if (k == j) {
                    printf("\e[1;33m%4d\e[m", a[k]);
                } else if (i > k) {
                    printf("\e[1;36m%4d\e[m", a[k]);
                } else if (k == m) {
                    printf("\e[1;32m%4d\e[m", a[k]);
                } else {
                    printf("%4d", a[k]);
                }
            }
            printf("\n");
            usleep(500000);
        }
        printf("\e[1;1H\e[2J");
        for (int j = 0; j < n; j++) {
            if (j == i) {
                printf("\e[1;31m%4d\e[m", a[j]);
            } else if (j == m) {
                printf("\e[1;32m%4d\e[m", a[j]);
            } else if (i > j) {
                printf("\e[1;36m%4d\e[m", a[j]);
            } else {
                printf("%4d", a[j]);
            }
        }
        printf("\n");
        sleep(1);

        t = a[i];
        a[i] = a[m];
        a[m] = t;

        printf("\e[1;1H\e[2J");
        for (int j = 0; j < n; j++) {
            if (j == i) {
                printf("\e[1;32m%4d\e[m", a[j]);
            } else if (j == m) {
                printf("\e[1;31m%4d\e[m", a[j]);
            } else if (i > j) {
                printf("\e[1;36m%4d\e[m", a[j]);
            } else {
                printf("%4d", a[j]);
            }
        }
        printf("\n");
        sleep(1);
    }
}

void insertion_sort(int *a, int n) {
    for (size_t i = 1; i < n; ++i) {
        int tmp = a[i];
        size_t j = i;
        while (j > 0 && tmp < a[j - 1]) {
            a[j] = a[j - 1];
            --j;
        }
        a[j] = tmp;
        printf("\e[1;1H\e[2J");
        for (int k = 0; k < n; k++) {
            if (k == i) {
                printf("\e[1;32m%4d\e[m", a[k]);
            } else if (k == j) {
                printf("\e[1;33m%4d\e[m", a[k]);
            } else {
                printf("%4d", a[k]);
            }
        }
        printf("\n");
        sleep(1);
        a[j] = tmp;
        printf("\e[1;1H\e[2J");
        for (int k = 0; k < n; k++) {
            if (k == j) {
                printf("\e[1;32m%4d\e[m", a[k]);
            } else if (k == i) {
                printf("\e[1;33m%4d\e[m", a[k]);
            } else {
                printf("%4d", a[k]);
            }
        }
        printf("\n");
        sleep(1);
    }
}
