#include <cstdio>
#include <cstdlib>

int main(int argc, const char **argv) {
  int lim;
  if (argc > 1) {
    lim = atoi(argv[1]);
  } else {
    lim = 100;
  }

  for (int i = 1; i <= lim; i++) {
    if (i % 3 == 0 && i % 5 == 0)
      printf("FizzBuzz\n");
    else if (i % 3 == 0)
      printf("Fizz\n");
    else if (i % 5 == 0)
      printf("Buzz\n");
    else
      printf("%d\n", i);
  }
  return 0;
}
