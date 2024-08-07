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
	vector<int> A(N);
	map<int, int> mp;
	REP(i,N){
		cin >> A[i];
		mp[A[i]] = i;
	} 

	vector<pair<int, int> > ans;

	REP(i,N){
		int num = i + 1;
		while(A[i] != num){
			int idx = mp[num];
			swap(A[i], A[idx]);
			mp[A[idx]] = idx;
			ans.push_back(make_pair(i+1, idx+1));
		}
	}

	cout << ans.size() << endl;
	REP(i,ans.size()){
		cout << ans[i].first << " " << ans[i].second << endl;
	}

	return 0;

}
