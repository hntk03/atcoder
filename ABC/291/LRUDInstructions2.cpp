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
	string S; cin >> S;

	bool ans = false;

	set<pair<int, int> > st;
	pair<int, int> now = make_pair(0, 0);
	st.insert(now);
	for(auto c : S){
		if(c == 'R') now.first++;
		else if(c == 'L') now.first--;
		else if(c == 'U') now.second++;
		else now.second--;

		if(st.find(now) != st.end()) ans = true;
		st.insert(now);
	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
