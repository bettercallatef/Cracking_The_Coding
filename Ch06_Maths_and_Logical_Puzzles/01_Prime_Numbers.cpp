#include <iostream>
using namespace std;

bool isPrime(int n) {
    // Handle edge cases
    if (n <= 1) return false;    // 0 and 1 are not prime numbers
    if (n == 2 || n == 3) return true;  // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0) return false;  // Exclude multiples of 2 and 3
    
    // Check for factors from 5 to sqrt(n), skipping even numbers and multiples of 3
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int number;
    
    // Input from user
    cout << "Enter a number: ";
    cin >> number;
    
    // Check if the number is prime and output the result
    if (isPrime(number))
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

    return 0;
}
