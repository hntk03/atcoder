#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;
ll A, B, N; 

ll f(ll x){
	ll a = A*x / B;
	ll b = A * (x / B);
	return a - b;

}

int main(void){

	cin >> A >> B >> N;
	ll x = min(N, B-1);

	cout << f(x) << endl;

	return 0;

}
