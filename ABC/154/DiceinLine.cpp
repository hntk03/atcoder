#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;



double calc(int i){
	int sum = i*(i+1)/2;
	return (double)sum/i;
}

int main(void){

	int N, K; cin >> N >> K;
	vector<int> p(N);
	REP(i,N) cin >> p[i];

	double sum = 0.0;
	double ans = 0.0;
	
	REP(i,K){
		sum += calc(p[i]);
	}

	ans = sum;
	int left = 0;
	int right = K;
	REP(i,N-K){
		sum -= calc(p[left++]);
		sum += calc(p[right++]);
		ans = max(sum, ans);
	}
	
	cout << setprecision(15) << ans << endl;


	return 0;

}
