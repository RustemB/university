#include <cstdio>
#include <cstdlib>
#include <ctime>

int main() {
  int len, cnt;
  srand(time(NULL));

  printf("+----------------------+\n");
  printf("|  Password generator  |\n");
  printf("+----------------------+\n\n");

  printf("Enter password length: ");
  scanf("%d", &len);
  printf("Enter count of generated passwords: ");
  scanf("%d", &cnt);
  
  for (int i = 0; i < cnt; i++) {
    for (int k = 0; k < len; k++) {
      switch (rand() % 3) {
        case 0:
          printf("%c", rand() % 10 + 48);
          break;
        case 1:
          printf("%c", rand() % 26 + 65);
          break;
        case 2:
          printf("%c", rand() % 26 + 97);
          break;
      }
    }
    printf("\n");
  }
  
  return 0;
}
