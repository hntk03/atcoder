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
	string T = "atcoder";
	int N = T.size();

	map<char, int> mp;
	REP(i,N) mp[T[i]] = i;

	vector<int> A(N);
	REP(i,N) A[i] = mp[S[i]];
	
	int ans = 0;
	REP(i,N){
		REP(j,i){
			if(A[j] > A[i]) ans++;
		}
	}

	cout << ans << endl;
	return 0;

}
