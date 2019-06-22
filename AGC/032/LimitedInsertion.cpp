#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N; cin >> N;
	vector<int> b(N);
	REP(i,N) cin >> b[i];
	vector<int> ans;

	REP(i,N){
		int idx = -1;
		REP(j,b.size()){
			if(j+1 == b[j]) idx = j;
		}
		if(idx == -1){
			cout << -1 << endl;
			return 0;
		}else{
			b.erase(b.begin() + idx);
			ans.insert(ans.begin(), idx+1);
		}
	}

	REP(i,ans.size()){
		cout << ans[i] << endl;
	}


	return 0;

}
