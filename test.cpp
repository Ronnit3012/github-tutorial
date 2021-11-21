#include <bits/stdc++.h>
#define ll long long
using namespace std;

void op() {
    cout<< "Hello World\n";
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

std::ios_base::sync_with_stdio(false);
cin.tie(NULL);

    ll int t, l;
    cin>>t;
    for(l=0; l<t; l++) {
        op();
    }

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
    return 0;
}