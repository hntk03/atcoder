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
	int cnt = 0;
	REP(i,N){
		int a; cin >> a;
		if(a < 3200) st.insert(a/400);
		else cnt++;
	}

	int ans = st.size();
	printf("%d %d\n", ans, ans+cnt);

	return 0;

}
