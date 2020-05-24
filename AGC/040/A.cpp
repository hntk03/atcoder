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
	int N = s.length() + 1;
	vector<int> a(N, 0);

	REP(i,N-1){
		if(s[i] == '<') a[i+1] = max(a[i+1], a[i]+1);
	}

	for(int i=N-1;i>=0;--i){
		if(s[i] == '>') a[i-1] = max(a[i-1], a[i]+1);
	}

	cout << accumulate(all(a), 0) << endl;

	return 0;

}
