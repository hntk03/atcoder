#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


const int MAX = 100002;

int main(void){

	int N, M; cin >> N >> M;
	vector<int> a(MAX, 0);

	REP(i,M){
		int L, R; cin >> L >> R;
		a[L]++;
		a[R+1]--;
	}
	
	FOR(i,1,MAX){
		a[i] += a[i-1];
	}

	int ans = 0;
	REP(i,MAX){
		if(a[i] == M) ans++;
	}

	cout << ans << endl;
	return 0;

}
