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
	int len = S.length();

	int ans = 1 << 30;
	int cnt = 0;
	REP(i,len){
		int x = S[i] - '0';
		if(x != i%2) cnt++;
	}

	ans = min(ans, cnt);
	cnt = 0;
	REP(i,len){
		int x = S[i] - '0';
		if(x != (i+1)%2) cnt++;
	}

	ans = min(ans, cnt);
	cout << ans << endl;

	return 0;

}
