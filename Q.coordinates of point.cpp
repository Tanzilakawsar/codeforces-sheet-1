#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;
    int serial;
    if (X == 0 && Y == 0)
        serial = 0; // Origin
     else if (X == 0)
        serial = 1; // Y-axis
    else if (Y == 0)
        serial = 2; // X-axis
     else if (X > 0 && Y > 0)
        serial = 3; // Q1
     else if (X < 0 && Y > 0)
        serial = 4; // Q2
     else if (X < 0 && Y < 0)
        serial = 5; // Q3
     else if (X > 0 && Y < 0)
        serial = 6; // Q4

    switch (serial) {
        case 0:
            cout << "Origem" << endl;
            break;
        case 1:
            cout << "Eixo Y" << endl;
            break;
        case 2:
            cout << "Eixo X" << endl;
            break;
        case 3:
            cout << "Q1" << endl;
            break;
        case 4:
            cout << "Q2" << endl;
            break;
        case 5:
            cout << "Q3" << endl;
            break;
        case 6:
            cout << "Q4" << endl;
            break;
        default:
            cout << "Unknown position" << endl;
    }

    return 0;
}
