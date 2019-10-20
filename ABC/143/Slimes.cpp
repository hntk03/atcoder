#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){


	int N; cin >> N;
	char s[1000000]; cin >> s;

	char buf = s[0];

	int ans = 1;
	FOR(i,1,N){
		if(buf != s[i]){
			buf = s[i];
			ans++;
		}
	}

	cout << ans << endl;

	return 0;

}
