#include <bits/stdc++.h>

using namespace std;

typedef long long ll; 

void decode() {
	int n, m;
	cin >> n >> m;
	int ans = 0;
	for(int i = 0; i * i <= n && i <= m; ++i) {
		int j = n - i * i;
		if(i + j * j == m) {
			ans += 1;
		}
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
