#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

int main() {
    double a;
    cin >> a;
    cout << "A=" << fixed << setprecision(4) << (3.14159 * pow(a,2)) << "\n";
    return 0;
}