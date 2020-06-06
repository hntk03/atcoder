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

	string s; cin >> s;

	s += ' ';
	char m = s.front();
	int cnt = 1;
	FOR(i,1,s.length()){
		if(s[i] != m){
			cout << m << cnt;
			m = s[i];
			cnt = 1;
		}else{
			cnt++;
		}
	}
	cout << endl;


	return 0;

}
