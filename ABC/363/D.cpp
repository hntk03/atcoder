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

bool isP(int x){
	string s = to_string(x);

	REP(i,s.length()/2){
		if(s[i] != s[s.length()-i-1]) return false;
	}

	return true;
}


int main(void){

	ll N; cin >> N;	

	vector<ll> p;
	REP(i,10) p.push_back(i);
	FOR(i,1,10) p.push_back(i*10+i);

	if(N <= p.size()){
		cout << p[N-1] << endl;
		return 0;
	}
	
	N -= p.size();

	FOR(i,3,18){
		if(N )
		ll now = ;

	}


	REP(i,100000000){
		if(isP(i)){
			string s = to_string(i);
			cout << s << " " <<  s.substr(0,(s.length()+2-1)/2) << endl;
		}
	}


	return 0;

}
