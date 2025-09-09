#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;int main() {
int n, k;
int k2 = 0;
cin >> n >> k;
vector<int> a(n);
for (int i = 0; i < n; i++) {
cin >> a[i];
if (i < k && a[i] == n - i){
k++;
}
}
for (int i = 0; i < n; i++){
while (a[i] > n - k && a[i] != n - i){
swap(a[i], a[n - a[i]]);
k += i < k && a[i] == n - i;
}
}
for (auto x : a) cout << x << " ";
cout << endl;
return 0;
}
