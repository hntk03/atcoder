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
		int a; cin >> a;
		cnt[a]++;
	}

	SORT(cnt);

	int sum = 0;
	REP(i,K){
		sum += cnt[N-i];
	}

	int ans = N - sum;
	cout << ans << endl;



	return 0;

}
