#include
 
<iostream>


using
 
namespace
 
std;

int
 
sumDigits(int n)
 
{
  if (n == 0) {
    return
 
0;
  } else {
    return (n % 10) + sumDigits(n / 10);
  }
}

int
 
main()
 
{
  int n;
  cin >> n;

  int sum = sumDigits(n);
  cout << sum << endl;

  return 0;
}