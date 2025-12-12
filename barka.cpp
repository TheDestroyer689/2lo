#include <iostream>
using namespace std;

int main() {
    double s_m, w_m; 
    double s_b, w_b; 

    cin >> s_m >> w_m;
    cin >> s_b >> w_b;

    
    double x = s_b / 2.0;

    
    double y = w_m - 4.0 * w_m * (x * x) / (s_m * s_m);

    if (w_b <= y)
        cout << "tak\n";
    else
        cout << "nie\n";

    return 0;
}
