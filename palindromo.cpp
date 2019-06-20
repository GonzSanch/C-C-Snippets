#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

// Function to reverse a string 
string reverseStr(string str) 
{ 
    int n = str.length(); 
  
    // Swap character starting from two 
    // corners 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]);
    return str;
} 

// Define is_palindrome() here:
bool is_palindrome(string text){
  string reversed = reverseStr(text);
  if (text==reversed){
    return true;
  } else {
    return false;
  }
}

int main() {
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}