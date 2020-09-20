#include <cmath>
#include <cstdio>
#include <ctime>

int main() {
  time_t now;
  time(&now);
  struct tm *new_year = localtime(&now);
  new_year->tm_year += 1;
  new_year->tm_hour = 0;
  new_year->tm_min = 0;
  new_year->tm_sec = 0;
  new_year->tm_mon = 0;
  new_year->tm_mday = 1;
  double diff = difftime(mktime(new_year), now);
  printf("%g days untill New Year!\n", ceil(diff / 60 / 60 / 24));
  return 0;
}
