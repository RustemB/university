#include <cstdio>
#include <cstdlib>
#include <ctime>

int main() {
  int num;

  srand(time(NULL));

  printf("Guess number [from 0 to 100]...\n");
  num = rand() % 101;

  while (true) {
    int un;
    printf("> ");
    scanf("%d", &un);
    if (un == num) {
      printf("Yay! You did it!\n");
      break;
    } else if (num < un) {
      printf("Too high!!!\n");
    } else {
      printf("Too low...\n");
    }
  }

  return 0;
}
