/*  The C Programming Language 2nd Edition */

#include <stdio.h>

int main(void)
{
  char c;
  int guard;

  guard = 0;

  while((c = getchar()) != EOF){
    if(c == ' '){
      if(guard == 0)
        putchar(c);
      guard++;
    }
    else {
      guard = 0;
      putchar(c);
    }
  }

  return 0;
}
