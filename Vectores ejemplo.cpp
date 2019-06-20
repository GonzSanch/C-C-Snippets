#include <iostream>
#include <vector>

int main () {
std::vector<int> numbers = {1,2,3,4,5,6,7,8,9,10};
int sum = 0;
int product = 1;
  
for (int i=0; i < numbers.size();i++){
  if (numbers[i] % 2 == 0) {
    sum = numbers[i]+sum;
  }  else  {
    product = numbers[i]*product;
  }
}
  std::cout << sum << "\n";
  std::cout << product;
}