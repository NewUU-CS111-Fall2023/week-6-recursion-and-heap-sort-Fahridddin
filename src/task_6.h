#include <iostream>

using namespace std;

int findSecondLargest(int currentLargest, int secondLargest, int currentNumber) {
  if (currentNumber == 0) {
    return secondLargest;
  } else if (currentNumber > currentLargest) {
    return findSecondLargest(currentNumber, secondLargest, currentNumber);
  } else if (currentNumber > secondLargest) {
    return findSecondLargest(currentLargest, currentNumber, currentNumber);
  } else {
    return findSecondLargest(currentLargest, secondLargest, currentNumber);
  }
}

int main() {
  int currentLargest = 0;
  int secondLargest = 0;
  int currentNumber;

  while (true) {
    cin >> currentNumber;
    if (currentNumber == 0) {
      break;
    }

    if (currentNumber > currentLargest) {
      secondLargest = currentLargest;
      currentLargest = currentNumber;
    } else if (currentNumber > secondLargest) {
      secondLargest = currentNumber;
    }
  }

  cout << secondLargest << endl;

  return 0;
}