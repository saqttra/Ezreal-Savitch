/* The C Programming Language 2nd Edition */

#include <stdio.h>

int main(void)
{
  char c;
  int nWS, nTab, nLn;

  nWS = nTab = nLn = 0;

  while((c = getchar()) != EOF){
    switch (c){
    case ' ':
      nWS++;
      break;
    case '\t':
      nTab++;
      break;
    case '\n':
      nLn++;
      break;
    }
  }

  printf(
    "num. ws: %d\n"
    "num. tabs: %d\n"
    "num. nlines: %d\n",
    nWS, nTab, nLn
  );

  return 0;
}
