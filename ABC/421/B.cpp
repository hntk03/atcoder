#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())
#define all(a) (a).begin(), (a).end()

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

ll f(ll n){
	string s = to_string(n);
	reverse(s.begin(), s.end());

	ll num = 0;
	for(char c : s){
		num *= 10;
		num += c - '0';
	}

	return num;
}

int main(void){

	int X, Y; cin >> X >> Y;

	const int N = 10;
	vector<ll> a(N);

	a[0] = X;
	a[1] = Y;

	FOR(i,2,N){
		a[i] = f(a[i-1] + a[i-2]);
	}

	cout << a[N-1] << endl;
	return 0;

}
