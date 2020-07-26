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

	string S; cin >> S;

	vector<int> v;

	int cnt = 0;
	REP(i,S.length()-1){
		if(S.substr(i,2) == "25"){
			i++;
			cnt++;
		}else{
			if(cnt != 0) v.push_back(cnt);
			cnt = 0;
		}
	}
	if(cnt != 0) v.push_back(cnt);

	// REP(i,v.size()){
	// 	pv(v[i]);
	// }

	int ma = 0;
	REP(i,v.size()){
		ma = max(ma, v[i]);
	}
	ma++;

	map<int, int> tf;
	tf[0] = 0;
	FOR(i,1,ma){
		tf[i] = i + tf[i-1];
	}

	int ans = 0;
	REP(i,v.size()){
		ans += tf[v[i]];
	}

	cout << ans << endl;

	return 0;

}
