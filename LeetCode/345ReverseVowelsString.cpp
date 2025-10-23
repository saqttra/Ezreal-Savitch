// Problem 345
// Solved on Wed 19 Mar, 2025 by Saqttra

#include <vector>
#include <iostream>

class Solution {
  public:
  std::string reverseVowels(std::string s) {
    std::vector<char> cache;
    cache.reserve(s.size());

    int i = s.size();
    while(i >= 0){
      switch (s[i]){
      case 'a': case 'e': case 'i': case 'o': case 'u':
      case 'A': case 'E': case 'I': case 'O': case 'U':
        cache.push_back(s[i]);
        break;
      default:
        break;
      }
      i--;
    }

    size_t j = 0;
    for (size_t i = 0; i < s.size(); i++){
      switch (s[i]){
      case 'a': case 'e': case 'i': case 'o': case 'u':
      case 'A': case 'E': case 'I': case 'O': case 'U':
        s[i] = cache[j++];
        break;
      default:
        break;
      }
    }
    return s;
  }
};

int main(void){

  Solution p345;
  std::cout << p345.reverseVowels("IceCreAm") << '\n';
  return 0;
}
