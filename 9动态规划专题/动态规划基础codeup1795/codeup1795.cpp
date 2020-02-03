#include <bits/stdc++.h>
using namespace std;

// r[0]=0
// r[1]=1
// r[i] = r[i-2]+r[i-1]
long long fib(size_t n) {
    static vector<long long> r{0, 1};
    r.reserve(n + 1);
    for (int i = r.size(); i <= n; i++) {
        r.push_back(r[i - 2] + r[i - 1]);
    }
    return r[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    while (cin >> n) {
        cout << fib(n) << endl;
    }
}
