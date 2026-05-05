#include <iostream>
using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;
(A % B == 0 || B % A == 0) ? cout << "Multiples" << endl : cout << "No Multiples" << endl;

    return 0;
}
