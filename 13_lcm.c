#include <stdio.h>

int lcm(int x, int y) {
  int i, temp, large, small;
  if (x > y) {
    temp = x;
    x = y;
    y = temp;
  }

  large = y;
  small = x;
  i = large;

  while (1) {
    if(i % small == 0)
      return i;
    i = i + large;
  }
}

int main() {
  int x = 30;
  int y = 40;

  printf("LCM of %i and %i is: %i",x,y,lcm(x,y));
  return 0;
}
