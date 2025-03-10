#include <bits/stdc++.h>
using namespace std;

#define MAX 100000  // Ensure large enough storage

int multiply(int x, int res[], int res_size)
{
    int carry = 0;
    for (int i = 0; i < res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }

    // Handling carry properly
    while (carry && res_size < MAX)
    {
        res[res_size++] = carry % 10;
        carry /= 10;
    }

    if (carry) {
        cout << "Error: Exceeded storage limit!\n";
        exit(1);
    }

    return res_size;
}

string power(int x, int n) 
{
    if (n == 0) return "1";

    int res[MAX] = {0};  // Initialize to zero
    int res_size = 0;
    int temp = x;

    while (temp != 0)
    {
        res[res_size++] = temp % 10;
        temp /= 10;
    }

    for (int i = 2; i <= n; i++)
        res_size = multiply(x, res, res_size);

    string result;
    result.reserve(res_size);  // Optimize memory allocation

    for (int i = res_size - 1; i >= 0; i--)
        result += (res[i] + '0');  // Convert int to char properly

    return result;
}

// Function to check if str1 >= str2 (used for subtraction)
bool isGreaterOrEqual(string str1, string str2)
{
    if (str1.length() > str2.length()) return true;
    if (str1.length() < str2.length()) return false;
    return str1 >= str2; // Lexicographical comparison
}

// Function to perform big integer subtraction (x - y)
string subtractStrings(string x, string y)
{
    if (!isGreaterOrEqual(x, y)) {
        swap(x, y); // Ensure x >= y for non-negative result
        cout << "-"; // Print minus sign for negative result
    }

    string result = "";
    int n1 = x.length(), n2 = y.length();
    int carry = 0;

    // Perform digit-wise subtraction
    for (int i = 0; i < n1; i++)
    {
        int digit1 = x[n1 - 1 - i] - '0';
        int digit2 = (i < n2) ? y[n2 - 1 - i] - '0' : 0;

        int diff = digit1 - digit2 - carry;
        if (diff < 0) {
            diff += 10;
            carry = 1;
        } else {
            carry = 0;
        }
        result.push_back(diff + '0');
    }

    // Remove leading zeros
    while (result.length() > 1 && result.back() == '0') {
        result.pop_back();
    }

    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    int a, b;
    cin >> a >> b;
    
    if (a == 0 && b == 0) {
        cout << "Undefined (0^0)" << endl;
        return 0;
    }

    string x = power(a, b);
    string y = power(b, a);

    cout << subtractStrings(x, y) << endl;

    return 0;
}
