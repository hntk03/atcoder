#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	int L, R; cin >> L >> R;
	vector<int> L_cnt(50, 0);
	vector<int> R_cnt(50, 0);

	REP(i,L){
		int l; cin >> l;
		L_cnt[l]++;
	}
	REP(i,R){
		int r; cin >> r;
		R_cnt[r]++;
	}

	int ans = 0;
	FOR(i,10,41){
		ans += min(L_cnt[i], R_cnt[i]);
	}

	cout << ans << endl;
	return 0;

}
