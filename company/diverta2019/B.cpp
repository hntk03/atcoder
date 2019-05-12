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

	int R, G, B, N; cin >> R >> G >> B >> N;

	int ans = 0;
	REP(i,N/R+1){
		REP(j,N/G+1){
			int d = N - (i*R+j*G);
			if(d%B == 0 and d >= 0) ans++;
		}
	}

	cout << ans << endl;



	return 0;

}
