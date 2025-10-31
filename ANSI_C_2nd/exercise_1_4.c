/* The C Programming Language 2nd Edition */

#include <stdio.h>

int main(void)
{
  float celcius, fahr;
  int step, upper;

  step = 20;
  upper = 300;

  celcius = 0;
  printf("Celcius to Fahrenheit\n");
  while(celcius <= upper){
    fahr = celcius / (5.0f / 9.0f) + 32;
    printf("%3.0f\t%6.1f\n", celcius, fahr);
    celcius += step;
  }
}
