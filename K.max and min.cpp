#include <iostream>
using namespace std;

int main() {
    long long A, B, C;


    cin >> A >> B >> C;

    long long minNumber, maxNumber;

    if (A <= B && A <= C)
        minNumber = A;
     else if (B <= A && B <= C)
        minNumber = B;
    else
        minNumber = C;


    if (A >= B && A >= C)
        maxNumber = A;
     else if (B >= A && B >= C)
        maxNumber = B;
    else
        maxNumber = C;



    cout << minNumber << " " << maxNumber << endl;

    return 0;
}
