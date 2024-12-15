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

bool isInDiv2(int r){
	return 1200 <= r and r <= 2399;
}

bool isInDiv1(int r){
	return 1600 <= r and r <= 2799;
}

int main(void){

	int N, R; cin >> N >> R;
	
	int now = R;
	REP(i,N){
		int D, A; cin >> D >> A;

		bool canUp = false;
		if(D == 1){
			canUp = isInDiv1(now);
		}else{
			canUp = isInDiv2(now);
		}

		if(canUp) now += A;
	}

	cout << now << endl;

	return 0;

}
