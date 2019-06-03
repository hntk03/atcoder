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
	int win = 0, lose = 0;
	REP(i,S.length()){
		if(S[i] == 'o') win++;
		else lose++;
	}
	win += 15-S.length();
	
	if(win >= 8) cout << "YES" << endl;
	else cout << "NO" << endl;


	return 0;

}
