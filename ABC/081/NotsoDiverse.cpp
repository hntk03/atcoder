#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	int N, K; cin >> N >> K;
	vector<int> cnt(N+1, 0);

	REP(i,N){
		int A; cin >> A;
		cnt[A]++;
	}

	SORT(cnt);

	int ans = 0;
	REP(i,N-K){
		ans += cnt[i];
	}

	cout << ans << endl;

	return 0;

}
