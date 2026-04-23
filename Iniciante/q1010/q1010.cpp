#include <iostream>
#include <iomanip>


using namespace std;

int main() {
    int cod1, num1, cod2, num2;
    double v1, v2;
    cin >> cod1 >> num1 >> v1 >> cod2 >> num2 >> v2;
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << (num1 * v1 + num2 * v2) << endl;
    return 0;
}