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

void solve(void){

	ll A, B, C; cin >> A >> B >> C;
	if(A<C){
		B += C-A;
		C = A;
	} 
	else{
		B += A-C;
		A = C;
	} 

	if(A < B) cout << A << endl;
	else{
		A -= B;
		C -= B;
		cout << B + (A+C)/3 << endl;
	}
}

int main(void){

	int T; cin >> T;
	REP(i,T) solve();

	return 0;

}
