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

	int N, M; cin >> N >> M;

	vector<pair<int, int>> v(M);

	REP(i,M){
		int A, B; cin >> A >> B;
		A--; B--;
		if(B < A) swap(A, B);
		v[i] = make_pair(A, B);
	}

	SORT(v);


	vector<int> cnt(N, INF);
	vector<int> ans(N);
	cnt[0] = 0;
	ans[0] = 0;
	REP(i,M){
		int A = v[i].first;
		int B = v[i].second;
		cnt[A] = min(cnt[B]+1, cnt[A]);
		cnt[B] = min(cnt[A]+1, cnt[B]);
	}

	bool ok = true;
	REP(i,M) if(cnt[i] == INF) ok = false;

	if(ok){
		cout << "Yes" << endl;
		FOR(i,1,N){
			cout << cnt[i] << endl;
		}
	}else{
		cout << "No" << endl;
	}


	return 0;

}
