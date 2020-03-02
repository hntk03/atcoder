#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

int main(void){


	int N, M; cin >> N >> M;
	vector<int> s(M);
	vector<int> c(M);
	REP(i,M) cin >> s[i] >> c[i];

	int tmp = pow(10, N-1);
	int end = tmp * 10;
	if(N == 1) tmp = 0;

	while(tmp != end){
		string S = to_string(tmp);
		int cnt = 0;
		REP(i,M){
			if(S[s[i]-1] == (char)c[i] + '0') cnt++;
		}
		if(cnt == M){
			cout << tmp << endl;
			return 0;
		}
	tmp++;
	}

	cout << -1 << endl;



	return 0;

}
