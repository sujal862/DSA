#include <iostream>

using namespace std;

int calculateFactorialAndCountZeros(int n) {
    int count = 0;

    // The loop iterates through powers of 5 and counts the factors of 5 in the factorial.
    // This directly gives the number of trailing zeros in the factorial.
    for (int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }

    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Call the function to calculate the number of trailing zeros in the factorial of n.
    int trailingZerosCount = calculateFactorialAndCountZeros(n);

    // Print the result.
    cout << "Number of Trailing Zeros: " << trailingZerosCount << endl;

    return 0;
}
