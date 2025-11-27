#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    double x, y, z;
    cin >> x >> y >> z;
    double ans, ns;
    ns = 2*x + y - z;
    ans = ( 7 + pow(ns, ns) ) / ns;
    cout << fixed << setprecision(12) << ans;
    return 0;
}
