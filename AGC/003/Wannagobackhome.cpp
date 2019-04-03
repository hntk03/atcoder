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

	vector<int> cnt(4,0);

	REP(i,S.length()){
		if(S[i] == 'N') cnt[0]++;
		else if(S[i] == 'S') cnt[1]++;
		else if(S[i] == 'W') cnt[2]++;
		else if(S[i] == 'E') cnt[3]++;
	}

	bool ans = true;
	
	if(cnt[0] > 0 and cnt[1] == 0) ans = false;
	else if(cnt[1] > 0 and cnt[0] == 0) ans = false;
	if(cnt[2] > 0 and cnt[3] == 0) ans = false;
	else if(cnt[3] > 0 and cnt[2] == 0) ans = false;

	cout << (ans ? "Yes" : "No") << endl;
	return 0;

}
