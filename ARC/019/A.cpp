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

	string S; cin >> S;
	int ans = 0;
	REP(i,S.length()){
		if(S[i] == 'O') ans *= 10;
		else if(S[i] == 'D'){
			ans *= 10;
		}else if(S[i] == 'I'){
			ans *= 10;
			ans += 1;
		}else if(S[i] == 'Z'){
			ans *= 10;
			ans += 2;
		}else if(S[i] == 'S'){
			ans *= 10;
			ans += 5;
		}else if(S[i] == 'B'){
			ans *= 10;
			ans += 8;
		}else{
			ans *= 10;
			ans += (S[i] - '0');
		}
	}

	cout << ans << endl;

	return 0;

}
