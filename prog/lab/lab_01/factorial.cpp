#include <cstdio>

typedef unsigned long long int ulli;

ulli fact(ulli n) { return n < 2 ? 1 : n * fact(n - 1); }

int main() {
  ulli num;
  printf("Enter number [max to 65]: ");
  scanf("%llu", &num);
  ulli fac = fact(num);
  printf("%llu! = %llu\n", num, fac);
  return 0;
}
