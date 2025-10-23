// Problem 178
// Solved on Wed 19 Mar, 2025 by Saqttra (First Attempt)
// Last attempt on Wed 19 Mar, 2025 by Saqttra

#include <iostream>

class Solution{
  public:
/*  
    My first attempt, based on:

      If a, b ∈ R => when comparing them, the following may happen:
        a > b
        a < b
        a = b

    std::string mergeAlternately(std::string word1, std::string word2){
      std::string newStr;
      newStr.reserve(word1.size() + word2.size());

      if(word1.size() < word2.size()){
        for (size_t i = 0; i < word1.size(); i++){
          newStr.push_back(word1[i]);
          newStr.push_back(word2[i]);
        }
        newStr.append(word2.substr(word1.size()));

        return newStr;
      }

      if(word1.size() > word2.size()){
        for (size_t i = 0; i < word2.size(); i++){
          newStr.push_back(word1[i]);
          newStr.push_back(word2[i]);
        }
        newStr.append(word1.substr(word2.size()));

        return newStr;
      }

      for (size_t i = 0; i < word1.size(); i++){
        newStr.push_back(word1[i]);
        newStr.push_back(word2[i]);
      }
      return newStr;
    }
*/  
    // Optimized attempt.
    // Hint: Keep pushing chars until it reaches the limit on each.
    // However, no matter the size of each str, the str1 always comes first.
    std::string mergeAlternately(std::string word1, std::string word2){
      size_t m = word1.size(), n = word2.size();
      std::string newStr;
      newStr.reserve(m + n);

      size_t i = 0;
      while( i < (m + n)){
        if(i < m) newStr.push_back(word1[i]);
        if(i < n) newStr.push_back(word2[i]);
        i++;
      }

      return newStr;
    }
};

int main(void){

  Solution p178;
  std::cout << p178.mergeAlternately("abc", "pqr") << '\n';
  std::cout << p178.mergeAlternately("ab", "pqrs") << '\n';
  std::cout << p178.mergeAlternately("abcd", "pq") << '\n';
  
  return 0;
}
