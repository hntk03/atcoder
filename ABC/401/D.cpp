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
	string S; cin >> S;

	REP(i,N){
		if(S[i] == 'o'){
			if(i) S[i-1] = '.';
			if(i+1 < N) S[i+1] = '.';
		}
	}

	int x = K - count(S.begin(), S.end(), 'o');
	vector<pair<int, int>> ps;
	{
		int i = 0;
		while(i < N){
			if(S[i] == '?'){
				int l = i;
				while(i < N and S[i] == '?')i++;
				int r = i;
				ps.emplace_back(l, r);
			}else i++;
		}
	}

	int mx = 0;
	for(auto [l, r] : ps) mx += (r-l+1)/2;

	if(x == 0){
		for(auto [l, r] : ps){
			for(int i = l; i < r; i++) S[i] = '.';
		}
	}else if(x == mx){
		for(auto [l, r] : ps){
			if((r-l)%2 == 0) continue;
			REP(i,r-l){
				S[l+i] = "o."[i%2];
			}
		}
	}

	cout << S << endl;
	return 0;
}
