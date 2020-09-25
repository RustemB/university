#define R 20
#define X 42
#define Y X
#include <cstdio>

int main() {
  for (int y = -Y / 2; y < Y / 2; y++) {
    for (int x = -X / 2; x < X / 2; x++) {
      if ((x * x + y * y < R * R)) {
        printf("#");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
