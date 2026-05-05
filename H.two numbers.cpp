#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int A, B;
    cin >> A >> B;
    double result = static_cast<double>(A) / B;

    int floorResult = floor(result);
    int ceilResult = ceil(result);
    int roundResult = round(result);

    cout << "floor " << A << " / " << B << " = " << floorResult << endl;
    cout << "ceil " << A << " / " << B << " = " << ceilResult << endl;
    cout << "round " << A << " / " << B << " = " << roundResult << endl;

    return 0;
}

