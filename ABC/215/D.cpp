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

	int N, M; cin >> N >> M;
	const int L = 100001;
	vector<bool> x(L);
	REP(i,N){
		int A; cin >> A;
		x[A] = true;
	}

	vector<int> d;
	for(int i=2;i<L;i++){
		bool flag = false;
		for(int j = i; j < L; j+=i){
			if(x[j]) flag = true;
		}
		if(flag) d.push_back(i);
	}

	vector<bool> ok(M+1, true);
	for(int i : d){
		for(int j = i; j<=M;j += i){
			ok[j] = false;
		}
	}

	int cnt = 0;
	for(int i=1;i<=M;i++) if(ok[i]) cnt++;
	cout << cnt << endl;
	for(int i=1;i<=M;i++) if(ok[i]) cout << i << endl;

	return 0;

}
