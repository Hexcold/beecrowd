#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    a = max(a, b);
    cout << max(a, c) << " eh o maior\n";
    return 0;
}