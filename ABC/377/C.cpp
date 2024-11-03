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

	int N, M; cin >> N >> M;

	set<pair<int, int>> st;

	auto isInMap = [&](int i, int j) -> bool {
		return 0 <= i and i < N and 0 <= j and j < N;
	};


	REP(i,M){
		int a, b; cin >> a >> b;
		a--; b--;

		st.insert(make_pair(a, b));

		if(isInMap(a+2, b+1)) st.insert(make_pair(a+2, b+1));
		if(isInMap(a+1, b+2)) st.insert(make_pair(a+1, b+2));
		if(isInMap(a-1, b+2)) st.insert(make_pair(a-1, b+2));
		if(isInMap(a-2, b+1)) st.insert(make_pair(a-2, b+1));
		if(isInMap(a-2, b-1)) st.insert(make_pair(a-2, b-1));
		if(isInMap(a-1, b-2)) st.insert(make_pair(a-1, b-2));
		if(isInMap(a+1, b-2)) st.insert(make_pair(a+1, b-2));
		if(isInMap(a+2, b-1)) st.insert(make_pair(a+2, b-1));

	}

	cout << (ll)N * N - st.size() << endl;

	return 0;

}
