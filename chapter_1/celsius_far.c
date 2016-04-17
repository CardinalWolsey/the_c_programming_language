#include <stdio.h>

main() {

  float far, celsius;
  int step, start, end;

  start = 0;
  step = 20;
  end = 300;

  celsius = start;
  while (celsius <= end) {
    far = (celsius * (9.0/5.0)) + 32.0;
    printf("%3.0f %6.1f\n", celsius, far);
    celsius = celsius + step;
  }
}
