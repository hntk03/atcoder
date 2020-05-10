#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	ll N, K; cin >> N >> K;
	vector<int> A(N);

	REP(i,N) cin >> A[i];
	REP(i,N) A[i]--;

	vector<bool> was(N, false);
	int loop = -1;

	int idx = 0;
	int cnt = 0;
	vector<int> l;
	set<int> st;

	REP(i,N){
		if(!was[idx]){
			was[idx] = true;
			l.push_back(idx);
			idx = A[idx];
			cnt++;
		}else{
			loop = idx;
			break;
		}
	}

	REP(i,l.size()){
		if(l[i] == loop){
			idx = i;
			break;
		}
	}

	int ans;
	if(K < idx) ans = l[K];
	else{
		K -= idx;
		K %= (l.size() - idx);
		ans = l[K + idx];
	}
	ans++;
	
	cout << ans << endl;
	



	return 0;

}
