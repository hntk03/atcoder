#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

int main(void){

	int N; cin >> N;
	string ans;


	while(N != 0){
		if(N % 2 != 0){
			N--;
			ans = '1' + ans;
		}else ans = '0' + ans;
		N /= -2;
	}
	if(ans == "") ans = '0';
	
	cout << ans << endl;


	return 0;

}
