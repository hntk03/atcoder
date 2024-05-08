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
	REP(i,N) cin >> A[i];

	vector<int> S = A;
	sort(S.begin(), S.end());
	S.erase(unique(S.begin(), S.end()), S.end());
	reverse(S.begin(), S.end());

	map<int, int> mp;
	REP(i,N) mp[A[i]]++;

	REP(k,N){

		int ans = 0;
		if(k < S.size()){
			ans = mp[S[k]];
		}
		
		cout << ans << endl;

	}

	return 0;

}
