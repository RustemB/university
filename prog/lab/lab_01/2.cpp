#include <cstdio>

int main() {
  char op;
  int fn, sn;
  printf(
      "Select operation arithmetic [+ - * /] or bitwise [& | ^] (q to quit): ");
  scanf("%c", &op);
  if (op == 'q')
    return 0;
  printf("Enter first number: ");
  scanf("%d", &fn);
  printf("Now enter second number: ");
  scanf("%d", &sn);
  switch (op) {
  case '+':
    printf("= %d\n", fn + sn);
    break;
  case '-':
    printf("= %d\n", fn - sn);
    break;
  case '*':
    printf("= %d\n", fn * sn);
    break;
  case '/':
    printf("= %g\n", ((double)fn) / ((double)sn));
    break;
  case '&':
    printf("= %d\n", fn & sn);
    break;
  case '|':
    printf("= %d\n", fn | sn);
    break;
  case '^':
    printf("= %d\n", fn ^ sn);
    break;
  default:
    return 1;
  }
  return 0;
}
