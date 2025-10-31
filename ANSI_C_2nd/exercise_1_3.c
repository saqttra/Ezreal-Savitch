/* The C Programming Language 2nd Edition */

#include <stdio.h>

int main(void)
{ 
  float celcius, fahr;
  int step, upper;

  step = 20;
  upper = 300;

  fahr = 0;
  printf("Fahrenheit to Celcius\n");
  while(fahr <= upper){
    celcius = 5.0f / 9.0f * (fahr - 32.0f);
    printf("%3.0f\t%6.1f\n", fahr, celcius);
    fahr += step;
  }
}
