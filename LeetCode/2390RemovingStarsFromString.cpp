// Problem 2390
// Solved on Mon 17 Mar, 2025 by Saqttra

#include <stack>
#include <iostream>

class Solution {
  public:
    std::string removeStars(std::string s){
      std::string newStr;
      newStr.reserve(s.size());

      for (size_t i = 0; i < s.size(); i++){
        if(s[i] == '*'){
          newStr.pop_back();
        }else{
          newStr.push_back(s[i]);
        }
      }

      newStr.shrink_to_fit();
      return newStr;
    }
};

// Example:
int main(void){

  Solution p2390;
  std::cout << p2390.removeStars("leet**cod*e") << '\n';
  std::cout << p2390.removeStars("erase*****") << '\n';
  
  return 0;
}
