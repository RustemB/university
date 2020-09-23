#include <cmath>
#include <cstdio>
#include <math.h>

int main() {
  int f, s, t;
  printf("Let's calculate area of triangle by it's three sides.\n");
  printf("Enter three sides of valide triangle separated bt space: ");
  scanf("%d %d %d", &f, &s, &t);

  if (f + s > t && f + t > s && t + s > f) {
    float semiper = (f + s + t) / 2.0;
    float area = sqrtf(semiper * (semiper - f) * (semiper - s) * (semiper - t));
    printf("The area of given triangle is %g\n", area);
  } else {
    printf("Triangle isn't valide!!!\n");
    return 1;
  }
  return 0;
}
