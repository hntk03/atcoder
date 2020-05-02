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
	cout << a << " " << b << endl;
	return a - b;

}

int main(void){

	cin >> A >> B >> N;
	ll left = 0;
	ll right = N;
	ll mid;

	while(left<right){
		mid = (left + right) / 2;
		if(f(left) > f(mid)){
			left = mid;
		}
		if(f(right) < f(mid)){
			right = mid;
		}
	}

	cout << left << endl;

	


	return 0;

}
