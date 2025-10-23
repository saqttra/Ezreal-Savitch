// Problem 344
// Solved on Mon 17 Mar, 2025 by Saqttra

#include <stdio.h>

void reverseString(char* s, int sSize){
  for (size_t i = 0; i < sSize / 2; i++){
    // i will act as our "ptr" at beg of str
    // j          '''          at end of str
    size_t j = sSize - 1 - i;

    // To avoid using a temp var, we'll use bit operator ^
    s[i] = s[i] ^ s[j];
    s[j] = s[i] ^ s[j];
    s[i] = s[i] ^ s[j];
  }

  /* 
    Why divide by 2, and not just let it iterate the whole array?

    If we put just put 'i < sSize' instead of 'i < sSize / 2' as our
    condition, one of the two following scenarios will occur:

    1. If the str len is even
      The str will be correctly reversed until 'i' reaches the mid of the str.
      However, after surpassing it, the str will return to its original position
      during the swapping.

      e.g: 
      Before: do
      After: do

    2. If the str len is odd
      The str will be correctly reversed until 'i' reaches the mid of the str.
      However, since the str is odd, one of the chars remains "alone", and when
      applying the operator ^ to itself, it will turn it into a null char, 
      corrupting the str.
      The rest of the str will return to its original position.

      e.g: 
      Before: hello
      After: he\0lo

    We divide by 2 because we just need to take care of the first half of the str,
    the swapping will handle the rest.
  
  */
}

// Example:
int main(){

  char str[] = "hello";
  // -1, to ignore null char '\0'
  reverseString(str, sizeof(str) - 1);

  // Verify
  printf("%s\n", str);

  return 0;
}
