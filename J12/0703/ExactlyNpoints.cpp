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

	ll N; cin >> N;

	ll sum = 0;
	int idx = 1;
	while(sum <= N){
		sum += idx++;
	}
	int ng = sum - N;
	
	FOR(i,1,idx){
		if(ng == i) continue;
		cout << i << endl;

	}

	return 0;

}
