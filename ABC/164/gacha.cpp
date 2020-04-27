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
	set<string> st;

	REP(i,N){
		string S; cin >> S;
		st.insert(S);
	}

	cout << st.size() << endl;

	return 0;

}
