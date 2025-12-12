#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double delta = b*b - 4*a*c;

    if (delta > 0) {
        double sqrt_delta = sqrt(delta);
        double x1 = (-b - sqrt_delta) / (2*a);
        double x2 = (-b + sqrt_delta) / (2*a);

        cout << fixed << setprecision(2) << x1 << "\n";
        cout << fixed << setprecision(2) << x2 << "\n";
    }
    else if (delta == 0) {
        double x = -b / (2*a);
        cout << fixed << setprecision(2) << x << "\n";
    }
    else {
        cout << "brak rozwiazan\n";
    }

    return 0;
}
