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
	
	map<int, int> left, right;
	left[A.front()]++;
	FOR(i,1,N) right[A[i]]++;

	int ans = left.size() + right.size();
	FOR(i,1,N){
		left[A[i]]++;
		right[A[i]]--;

		if(right[A[i]] == 0) right.erase(A[i]);

		ans = max(ans, (int)left.size() + (int)right.size());
	}
	
	cout << ans << endl;
	return 0;

}
