#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

double f(double a, double b, double c, double x) {
    return a*x*x + b*x + c;
}

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double e, f0;
    cin >> e >> f0;

    double v1 = f(a, b, c, e);
    double v2 = f(a, b, c, f0);

    double xmin = min(v1, v2);
    double xmax = max(v1, v2);

    double x0 = -b / (2.0 * a);
    if (x0 >= e && x0 <= f0) {
        double v0 = f(a, b, c, x0);
        xmin = min(xmin, v0);
        xmax = max(xmax, v0);
    }

    cout << fixed << setprecision(2) << xmin << " " << xmax << "\n";

    return 0;
}
