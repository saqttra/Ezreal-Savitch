/* The C Programming Language 2nd Edition */

#include <stdio.h>

int main(void)
{
  float fahr;
  printf("Fahrenheit to Celcius\n");
  for(fahr = 300; fahr >= 0; fahr -= 20){
   printf("%3.0f\t%6.1f\n", fahr, (5.0f / 9.0f) * (fahr - 32.0f));
  }
}
