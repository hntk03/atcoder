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

	int Y; cin >> Y;

	int ans = 0;
	if(Y%4 != 0){
		ans = 365;
	}else if(Y % 100 != 0){
		ans = 366;
	}else if(Y % 400 != 0){
		ans = 365;
	}else{
		ans = 366;
	}
	
	cout << ans << endl;
	return 0;

}
