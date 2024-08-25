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

	auto f = [&](){
		int num = 0;
		REP(i,N) num += A[i] > 0;

		return num > 1;
	};

	int ans = 0;
	while(true){
		sort(A.rbegin(), A.rend());
		if(!f()) break;
		A[0]--;
		A[1]--;
		ans++;
	}

	cout << ans << endl;

	return 0;

}
