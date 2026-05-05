#include <iostream>
using namespace std;

int main() {
    long long A, B, C, D;

    // Read the input numbers
    cin >> A >> B >> C >> D;

    // Compute the product of the four numbers
    long long product = A * B * C * D;

    // Extract the last two digits
    int last_two_digits = product % 100;

    // Print the result with leading zeros if necessary
    cout << (last_two_digits < 10 ? "0" : "") << last_two_digits << endl;

    return 0;
}

