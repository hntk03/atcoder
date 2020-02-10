#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

int main(void){

	
	int N; cin >> N;
	set<int> st;
	REP(i,N){
		int A; cin >> A;
		st.insert(A);
	}

	if(st.size() == N) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;

}
