#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())
#define all(a) (a).begin(), (a).end()

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	int N, K; cin >> N >> K;

	vector<string> S(N);
	for(int i=0;i<N;i++){
		cin >> S[i];
	}

	int ans = 0;

	for(int i=0;i<(1<<N);i++){
		string concat = "";
		int d = i;
		for(int b=0;b<N;b++){
			if(d & 1) concat += S[b];
			d = d >> 1;
		}

		map<char, int> m;
		for(int i=0;i<concat.length();i++){
			m[concat[i]]++;
		}

		int cnt = 0;
		for(char c='a';c <= 'z'; c++){
			if(m[c] == K) cnt++;
		}

		ans = max(ans, cnt);

	}

	cout << ans << endl;


	return 0;

}
