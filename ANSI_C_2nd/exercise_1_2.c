/*  The C Programming Language 2nd Edition */

#include <stdio.h>

int main(void)
{
  printf("Hello\c world!\n");
  /* exercise_1_2.c:7:16: error: unknown escape sequence '\c'
     7 |   printf("Hello\c world!\n");
       |                ^~                                 */
  return 0;
}
