#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 10000000;


int main(void){

	int N; cin >> N;
	int ans = 0;
	int min_value = INF;

	REP(i,N){

		int p; cin >> p;
		if(p < min_value){
			ans++;
			min_value = p;
		}
	}
	
	cout << ans << endl;


	return 0;

}
