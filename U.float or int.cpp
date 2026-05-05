#include <iostream>
#include <cmath>

int main() {
    double N;
    std::cin >> N;

    if (N == std::floor(N)) {

        std::cout << "int " << static_cast<int>(N) << std::endl;
    } else {
        int intPart = static_cast<int>(N);
        double decimalPart = N - intPart;
        std::cout << "float " << intPart << " " << decimalPart << std::endl;
    }

    return 0;
}

