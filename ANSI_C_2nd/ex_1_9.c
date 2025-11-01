/*  The C Programming Language 2nd Edition */

#include <stdio.h>

int main(void)
{

/* original attempt 
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
  } */

  char curr, prev;

  prev = '\0';

  while((curr = getchar()) != EOF){
    if(prev != ' ' || curr != ' '){
      putchar(curr); 
    }
    prev = curr;
  }

  return 0;
}
