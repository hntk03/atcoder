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

	string s; cin >> s;
	set<char> st;

	st.insert(s[0]);
	st.insert(s[1]);
	st.insert(s[2]);

	int ans = st.size();
	if(ans == 1) cout << 1 << endl; 
	else if(ans == 2) cout << 3 << endl;
	else cout << 6 << endl;
	
	return 0;

}
