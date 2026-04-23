#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num, h;
    double v;
    cin >> num >> h >> v;
    cout << "NUMBER = " << num << "\nSALARY = U$ " << fixed << setprecision(2) << (h * v) << endl;
    return 0;
}