#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    double x, y, z;
    cin >> x >> y >> z;
    double ans, ns;
    ans = ((2*x + y) / z *(y*y*y - z)) /((x + 2*y + 3*z) / (z - 2*y - 3*x) + x*x + z*z);
    cout << fixed << setprecision(12) << ans;
    return 0;
}
