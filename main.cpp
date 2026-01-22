#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    double delta, x1, x2;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    delta = b*b - 4*a*c;

    if (delta < 0) {
        cout << "No real roots" << endl;
    }
    else if (delta == 0) {
        x1 = -b / (2*a);
        cout << "One real root: " << x1 << endl;
    }
    else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        cout << "Two real roots: " << x1 << " and " << x2 << endl;
    }

    return 0;
}
