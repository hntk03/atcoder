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

	int N; cin >> N;
	string S; cin >> S;

	vector<int> white(N+1, 0);
	vector<int> black(N+1, 0);

	FOR(i,1,N+1){
		if(S[i-1] == '.'){ 
			white[i] = white[i-1] + 1;
			black[i] = black[i-1];
		}else if(S[i-1] == '#'){
			white[i] = white[i-1];
			black[i] = black[i-1] + 1;
		}
	}
	
	int ans = 1 << 30;
	REP(i,N){
		int to_white = black[i+1] - black[0];
		int to_black = white[N] - white[i+1];
		ans = min(ans, to_white + to_black);
	}

	cout << ans << endl;


	return 0;

}
