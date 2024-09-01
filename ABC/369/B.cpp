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
	string S;
	REP(i,N){
		cin >> A[i];
		char s; cin >> s;
		S += s;
	}

	vector<int> L, R;
	REP(i,N){
		if(S[i] == 'L') L.push_back(A[i]);
		else R.push_back(A[i]);
	}

	if(L.size() == 0) L.push_back(0);
	if(R.size() == 0) R.push_back(0);

	int ans = INF;
	for(int l : L){
		for(int r : R){
			int cost = 0;
			REP(i,N){
				if(S[i] == 'L'){
					cost += abs(A[i] - l);
					l = A[i];
				}else{
					cost += abs(A[i] - r);
					r = A[i];
				}
			}
			ans = min(ans, cost);
		}
	}

	cout << ans << endl;

	return 0;

}
