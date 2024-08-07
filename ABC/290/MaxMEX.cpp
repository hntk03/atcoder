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

	int N, K; cin >> N >> K;	

	set<int> st;
	REP(i,N){
		int A; cin >> A;
		st.insert(A);
	} 

	int ans = 0;
	REP(i,K){
		if(st.find(i) == st.end()){
			cout << i << endl;
			return 0;
		}
	}

	cout << K << endl;
	return 0;
}
