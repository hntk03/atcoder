#include <bits/stdc++.h>

using namespace std;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N; cin >> N;
	vector<long long> cnt(5, 0);
	REP(i,N){
		string s; cin >> s;
		if(s[0] == 'M') cnt[0]++;
		else if(s[0] == 'A') cnt[1]++;
		else if(s[0] == 'R') cnt[2]++;
		else if(s[0] == 'C') cnt[3]++;
		else if(s[0] == 'H') cnt[4]++;
	}

	int P[10] = {0,0,0,0,0,0,1,1,1,2};
	int Q[10] = {1,1,1,2,2,3,2,2,3,3};
	int R[10] = {2,3,4,3,4,4,3,4,4,4};

	long long int ans = 0;
	REP(i,10){
		ans += cnt[P[i]]*cnt[Q[i]]*cnt[R[i]];
	}

	cout << ans << endl;

	return 0;

}
