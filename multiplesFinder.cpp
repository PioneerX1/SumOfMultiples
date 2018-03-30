/**
Mick Sexton
Sum of Multiples 3 and 5 below 1000.

Explanation:
My program iterates through a while loop counting up to just below the 1000 value, conditional adding the count value to the total sum. This approach works because it ensures no duplicates, like 15 being added to the sum twice because it has multiples of 3 and 5. The final answer is 233168.

Instructions to Run:
You will need a C compiler or XCode. Simply download this multiplesFinder.cpp.
Command Line instructions:
  1. Type "make multiplesFinder"
  2. Once it is compiled, type "./multiplesFinder"
**/

#include <iostream>

int getMultipleSum() {
  int multipleOne = 3;
  int multipleTwo = 5;
  int ceiling = 1000;
  int sum = 0;
  int count = 1;

  while (count < ceiling) {
    if (count % multipleOne == 0 && count % multipleTwo == 0) {
      sum += count;
    } else if (count % multipleOne == 0) {
      sum += count;
    } else if (count % multipleTwo == 0) {
      sum += count;
    } else {
      // do not add to sum
    }
    count++;
  }
  return sum;
}

int main() {
  std::cout << getMultipleSum() << std::endl;
}
