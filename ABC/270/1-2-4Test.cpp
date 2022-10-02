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

	int A, B; cin >> A >> B;
	int ans = 0;

	bool flag = false;
	if(A >= 4){
		ans += 4;
		A -= 4;
		flag = true;
	} 
	if(B >= 4){
		B-= 4;
		if(!flag) ans += 4;
	}
	flag = false;
	if(A >= 2){
		ans += 2;
		A -= 2;
		flag = true;
	}
	if(B >= 2){
		B -= 2;
		if(!flag) ans += 2;
	}

	flag = false;
	if(A >= 1){
		ans += 1;
		A -= 1;
		flag = true;
	}
	if(B >= 1){
		B -= 1;
		if(!flag) ans += 1;
	}

	cout << ans << endl;







	return 0;

}
