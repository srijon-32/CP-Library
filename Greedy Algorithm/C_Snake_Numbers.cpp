#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to generate Snake numbers recursively
void generateSnakeNumbers(long long currentNumber, int topDigit, long long L, long long R, long long& count) {
    if (currentNumber > R) return; // Stop if the number exceeds R

    // Count the number if it is within the range
    if (currentNumber >= L && currentNumber <= R) {
        count++;
    }

    // Generate the next digits
    for (int nextDigit = 0; nextDigit < 10; ++nextDigit) {
        if (nextDigit < topDigit) { // Ensure the next digit is smaller than the top digit
            generateSnakeNumbers(currentNumber * 10 + nextDigit, topDigit, L, R, count);
        }
    }
}

int main() {
    long long L, R;
    // cout << "Enter the range (L and R): ";
    cin >> L >> R;

    long long count = 0;

    // Generate Snake numbers starting with each possible top digit (1 to 9)
    for (int topDigit = 1; topDigit < 10; ++topDigit) {
        generateSnakeNumbers(topDigit, topDigit, L, R, count);
    }

    cout << count << endl;
    return 0;
}
