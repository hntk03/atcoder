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

	int N, Q; cin >> N >> Q;
	vector<bool> masu(N+2);

	int ans = 0;
	REP(i,Q){
		int A; cin >> A;
		if(masu[A]){ // 黒に塗られてる
			if(masu[A-1] and masu[A+1]) ans++;
			else if(!masu[A-1] and !masu[A+1]) ans--;
			masu[A] = false;
		}else{ // 白に塗られてる
			if(masu[A-1] and masu[A+1]) ans--;
			else if(masu[A-1] or masu[A+1]) ans = ans;
			else ans++;
			masu[A] = true;
		}
		cout << ans << endl;
	}

	return 0;

}
