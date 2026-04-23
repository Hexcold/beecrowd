#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string name;
    double fixo, venda;

    cin >> name >> fixo >> venda;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << fixo + venda * 0.15 << endl;
    return 0;
}