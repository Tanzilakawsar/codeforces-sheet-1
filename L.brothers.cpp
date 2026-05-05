#include <iostream>
#include <string>

int main() {
    std::string s1,s2;
    std::string s3, s4;

    std::cin >> s1 >> s2;

    std::cin >> s3 >> s4;

    if (s2 == s4) {
        std::cout << "ARE Brothers" << std::endl;
    } else {
        std::cout << "NOT" << std::endl;
    }

    return 0;
}

