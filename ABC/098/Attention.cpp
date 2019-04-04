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

	int N; cin >> N;
	string S; cin >> S;

	vector<int> W_sum(N+1,0);
	vector<int> E_sum(N+1,0);

	FOR(i,1,N+1){
		int isW = (S[i-1] == 'W' ? 1 : 0);
		int isE = (S[i-1] == 'E' ? 1 : 0);

		W_sum[i] = W_sum[i-1] + isW;
		E_sum[i] = E_sum[i-1] + isE;

	}

	int ans = E_sum[N] - E_sum[1];
	FOR(i,1,N-1){
		int w_cnt = W_sum[i] - W_sum[0];
		int e_cnt = E_sum[N] - E_sum[i+1];
		ans = min(ans, w_cnt + e_cnt);
	}
	ans = min(ans, W_sum[N-1]);

	cout << ans << endl;
	return 0;

}
