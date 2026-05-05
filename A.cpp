#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int Q;
    string S;
    cin >> Q >> S;

    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

    unordered_map<char, char> encryptMap, decryptMap;


    for (size_t i = 0; i < Original.size(); ++i) {
        encryptMap[Original[i]] = Key[i];
        decryptMap[Key[i]] = Original[i];
    }

    string result;
    if (Q == 1) {

        for (char c : S) {
            result += encryptMap[c];
        }
    } else if (Q == 2) {

        for (char c : S) {
            result += decryptMap[c];
        }
    }

    cout << result << endl;
    return 0;
}
