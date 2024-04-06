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

	set<string> st;
	REP(i,N){
		string S; cin >> S;
		string T = S;
		reverse(T.begin(), T.end());

		if(st.find(S) == st.end() and st.find(T) == st.end()){
			st.insert(S);
		}
	}

	cout << st.size() << endl;

	return 0;

}
