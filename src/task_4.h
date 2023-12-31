#include
 
<iostream>


using
 
namespace
 
std;

bool
 
isPrime(int n)
 
{
    if (n <= 1) {
        return
 
false;
    } else
 
if (n <= 3) {
        return
 
true;
    } else
 
if (n % 2 == 0 || n % 3 == 0) {
        return
 
false;
    } else {
        int limit = sqrt(n);
        for (int i = 5; i <= limit; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }
}

int main() {
    int n;
    cin >> n;

    if (isPrime(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}