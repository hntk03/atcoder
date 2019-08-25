#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int M, D; cin >> M >> D;

	int ans = 0;
	FOR(i, 1, M+1){
		FOR(j, 1, D+1){
			int p = (j/10)*(j%10);
			if(i == p and (j/10) >= 2 and (j%10) >= 2){
				ans++;
			} 
		}
	}

	cout << ans << endl;

	return 0;

}
