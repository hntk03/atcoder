#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	int N, Q; cin >> N >> Q;

	vector<int> v(N+1,0);
	
	REP(i,Q){
		int l, r; cin >> l >> r;
		v[l-1]++;
		v[r]--;
	}

	FOR(i,1,N){
		v[i] += v[i-1];
	}

	string ans = "";
	REP(i,N){
		ans += (char)(v[i] % 2 + '0');
	}

	cout << ans << endl;
	return 0;

}
