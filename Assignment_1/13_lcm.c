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
  int x , y;
  printf ( "Enter first number: ");
  scanf ( "%d", &x);
  printf ( "Enter second number: ");
  scanf ( "%d", &y);

  printf("LCM of %d and %d is: %d",x,y,lcm(x,y));
  return 0;
}
