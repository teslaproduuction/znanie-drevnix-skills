#include <iostream>
using namespace std;

enum Seasons {
    Winter, Autumn, Summer, Spring
};

int main() {
    Seasons current = Summer;
    switch (current)
    {
        case Winter:
        cout << "It is winter. Time for warm drinks." << endl;
        break;

        case Spring:
        cout << "It is spring. Nature awakens." << endl;
        break;

        case Summer:
        cout << "It is summer. Time for swimming." << endl;
        break;

    default:
        cout << "It is autumn. Time for harvest." << endl;
    }

    return 0;
}
