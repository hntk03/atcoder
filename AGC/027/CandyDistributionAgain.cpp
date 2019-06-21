#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N, x; cin >> N >> x;
	vector<int> a(N);
	REP(i,N){ 
		cin >> a[i];
	}

	SORT(a);

	int k = 0;
	int sum = 0;
	int ans = 0;
	REP(i,N){
		sum += a[i];
		if(sum <= x) k++;
		else break;
	}
	if(k == N){
		if(sum == x) ans = N;
		else ans = N - 1;
	}else ans = k;

	cout << ans << endl;



	return 0;

}
