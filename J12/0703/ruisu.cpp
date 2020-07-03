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

bool ok(char a){

	bool tmp = true;
	switch(a){
		case 'a':
			tmp = false;
			break;
		case 'e':
			tmp = false;
			break;
		case 'i':
			tmp = false;
			break;
		case 'o':
			tmp = false;
			break;
		case 'u':
			tmp = false;
			break;
		case 'y':
			tmp = false;
			break;
defalut:
			tmp = true;
			break;
	}

	return tmp;
}

int ALL(string s){
	int N = s.length();

	int cnt = 0;
	REP(i,N){
		if(isupper(s[i])) s[i] = s[i] - 'A' + 'a';
		if(islower(s[i]) and ok(s[i])) cnt++;
	}

	return cnt;
}

int main(void){

	int N; cin >> N;

	vector<string> w(N);
	REP(i,N) cin >> w[i];

	map<char, int> mp;
	mp['b'] = 1;
	mp['c'] = 1;
	mp['d'] = 2;
	mp['w'] = 2;
	mp['t'] = 3;
	mp['j'] = 3;
	mp['f'] = 4;
	mp['q'] = 4;
	mp['l'] = 5;
	mp['v'] = 5;
	mp['s'] = 6;
	mp['x'] = 6;
	mp['p'] = 7;
	mp['m'] = 7;
	mp['h'] = 8;
	mp['k'] = 8;
	mp['n'] = 9;
	mp['g'] = 9;
	mp['z'] = 0;
	mp['r'] = 0;


	string ans;
	REP(i,N){
		int S = w[i].length();
		if(ALL(w[i]) != 0){
			REP(j,S){
				if(isupper(w[i][j])){
					w[i][j] = w[i][j] - 'A' + 'a';
				}
				if(islower(w[i][j]) and ok(w[i][j])){
					ans += mp[w[i][j]] + '0';
				}
			}
			ans += ' ';
		}
	}

	int A = ans.length();
	int idx = A;


	REP(i,ans.length()){
		if(!('0' <= ans[A-i-1] and ans[A-i-1] <= '9')) idx--;
		else break;
	}
	cout << ans.substr(0, idx) << endl;

	return 0;

}
