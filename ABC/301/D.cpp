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

	string S; cin >> S;
	ll N; cin >> N;

	auto ten = [&](string s){
		ll x = 0;
		for(char c : s){
			x = x*2+(c-'0');
		}
		return x;
	};

	auto f = [&](string s){
		REP(i,s.size()){
			if(s[i] == '?') s[i] = '0';
		}

		return ten(s) <= N;
	};

	if(!f(S)){
		cout << -1 << endl;
		return 0;
	}

	REP(i,S.size()){
		if(S[i] == '?'){
			S[i] = '1';
			if(!f(S)) S[i] = '0';
		}
	}

	cout << ten(S) << endl;
	return 0;

}
