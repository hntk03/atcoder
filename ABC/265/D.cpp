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

int main(void){

	int N; cin >> N;	
	vector<ll> b(3);
	REP(i,3) cin >> b[i];

	vector<ll> A(N);
	REP(i,N) cin >> A[i];

	vector<ll> S(N+1);
	REP(i,N) S[i+1] = S[i] + A[i];

	set<ll> st;
	REP(i,N+1) st.insert(S[i]);

	REP(i,N+1){
		ll ns = S[i];
		REP(j,3){
			ns += b[j];
			if(!st.count(ns)) break;
			if(j == 2){
				cout << "Yes" << endl;
				return 0;
			}
		}
	}

	cout << "No" << endl;

	return 0;

}
