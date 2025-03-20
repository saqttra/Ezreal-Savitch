// Problem 178
// Solved on Wed 19 Mar, 2025 by Saqttra

#include <iostream>

class Solution{
  public:
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
};

int main(void){

  Solution p178;
  std::cout << p178.mergeAlternately("abc", "pqr") << '\n';
  std::cout << p178.mergeAlternately("ab", "pqrs") << '\n';
  std::cout << p178.mergeAlternately("abcd", "pq") << '\n';
  
  return 0;
}
