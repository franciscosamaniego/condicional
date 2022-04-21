#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int m = atoi(argv[1]);
  for (int i = 1; i <= 100; i++) {
    if (i % m == 3) printf("%d\n", i);
  }
  return 0;
}
