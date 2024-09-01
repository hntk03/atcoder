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
	vector<tuple<int, int, int>> cards(N);
	REP(i,N){
		int A, C; cin >> A >> C;
		cards[i] = make_tuple(C, A, i+1);
	}

	sort(cards.begin(), cards.end());
	vector<bool> remain(N, true);

	int idx = 0;
	FOR(i,1,N){
		if(get<1>(cards[idx]) > get<1>(cards[i])){
			remain[i] = false;
		} else{
			idx = i;
		}
	}

	vector<int> ans;
	REP(i,N) if(remain[i]) ans.push_back(get<2>(cards[i]));

	sort(ans.begin(), ans.end());
	cout << ans.size() << endl;
	for(int x : ans) cout << x << " ";
	cout << endl;

	return 0;

}
