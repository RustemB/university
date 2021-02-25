#include <cstddef>
#include <cstdio>
#include <cstring>
#include <malloc.h>

void part1(void);
void part2(void);
void part3(void);
void part4(void);
void sieve(int *, int);
void print_bits(size_t const, void const *const);

void help() {
    printf("1 - интерактивная работа с битами\n");
    printf("2 - dumping short, int, long long\n");
    printf("3 - dumping float, double, long double\n");
    printf("4 - Решето Эратосфена\n");
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        help();
        return 0;
    }

    if (!strcmp(argv[1], "1")) {
        part1();
    } else if (!strcmp(argv[1], "2")) {
        part2();
    } else if (!strcmp(argv[1], "4")) {
        part4();
    }

    return 0;
}

void part1() {
    short num;
    printf("Введите число [-32000; 32000] >> ");
    fflush(stdout);
    scanf("%hd", &num);
    printf("%hd: ", num);
    print_bits(sizeof(num), &num);

    int ch;
    while (1) {
        printf("Выбирите действие:\n"
               "1 - Установить бит в 1\n"
               "2 - Установить бит в 0\n"
               "3 - Опросить бит\n"
               "4 - Изменить бит\n"
               "0 - Выйти\n");
        scanf("%d", &ch);
        if (!(ch < 5 && ch > 0)) {
            break;
        }
        printf("Введите номер бита >> ");
        fflush(stdout);
        short bitn;
        scanf("%hd", &bitn);
        if (ch == 1) {
            num |= ((short)1) << bitn;
        } else if (ch == 2) {
            num &= ~(((short)1) << bitn);
        } else if (ch == 3) {
            printf("%hd: ", num);
            short bit = (num >> bitn) & ((short)1);
            for (short i = 15; i >= 0; i--) {
                if (i == 7) {
                    printf(" ");
                }
                if (i == bitn) {
                    printf("%hd", bit);
                } else {
                    printf(" ");
                }
            }
            printf("\n");
            continue;
        } else if (ch == 4) {
            num ^= ((short)1) << bitn;
        }
        printf("%hd: ", num);
        print_bits(sizeof(num), &num);
    }
}

void part2() {
    short num;
    printf("Введите число short >> ");
    fflush(stdout);
    scanf("%hd", &num);
    short rev_num = ~(num - 1);
    printf(" DEC: %hd", num);
    printf("DUMP: ");
    print_bits(sizeof(num), &num);
    printf("  ПК: ");
    if (num >= 0) {
        
    }
}

void part4() {
    int *a, n = 1000000;
    a = (int *)malloc((n + 1) * sizeof(int));
    sieve(a, n);
}

void sieve(int *a, int n) {
    int i = 0, j = 0;

    for (i = 2; i <= n; i++) {
        a[i] = 1;
    }

    for (i = 2; i <= n; i++) {
        if (a[i] == 1) {
            for (j = i; (i * j) <= n; j++) {
                a[(i * j)] = 0;
            }
        }
    }
    FILE * file = fopen("primes", "w");
    for (i = 2; i <= n; i++) {
        if (a[i] == 1) {
            fprintf(file, "%d ", i);
        }
    }
    fclose(file);
}

void print_bits(size_t const size, void const *const ptr) {
    unsigned char *b = (unsigned char *)ptr;
    unsigned char byte;
    int i, j;

    for (i = size - 1; i >= 0; i--) {
        if (i % 2 == 0) {
            printf(" ");
        }
        for (j = 7; j >= 0; j--) {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
    puts("");
}
