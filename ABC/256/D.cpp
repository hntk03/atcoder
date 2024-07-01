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

bool isOverlapping(pair<int, int> a, pair<int, int> b){
	return b.first <= a.second and a.first <= b.second;
}

int main(void){

	int N; cin >> N;	
	vector<pair<int, int> > S(N);
	REP(i,N){
		int X, Y; cin >> X >> Y;
		S[i] = make_pair(X, Y);
	}

	sort(S.begin(), S.end());

	pair<int, int> now = S.front();
	vector<pair<int, int>> ans;
	FOR(i,1,N){
		if(isOverlapping(now, S[i])){
			now.second = max(now.second, S[i].second);
		}else{
			ans.push_back(now);
			now = S[i];
		}
	}

	ans.push_back(now);

	REP(i,ans.size()){
		cout << ans[i].first << " " << ans[i].second << endl;
	}

	return 0;

}
