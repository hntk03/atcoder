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

	int N; cin >> N;
	string S; cin >> S;
	int Q; cin >> Q;

	vector<int> t(Q), x(Q);
	vector<char> c(Q);

	REP(i,Q){
		cin >> t[i] >> x[i] >> c[i];
	}

	int last = -1;
	REP(i,Q){
		if(t[i] != 1){
			last = i;
		}
	}

	REP(i,last){
		if(t[i] == 2) continue;
		if(t[i] == 3) continue;
		S[x[i]-1] = c[i];
	}

	if(last == -1){

	}else if(t[last] == 2){
		REP(i,S.length()){
			if(isupper(S[i])){
				S[i] = S[i] - 'A' + 'a';
			}
		}
	}else{
		REP(i,S.length()){
			if(islower(S[i])){
				S[i] = S[i] - 'a' + 'A';
			}
		}
	}

	FOR(i,last+1,Q){
		S[x[i]-1] = c[i];
	}

	cout << S << endl;

	return 0;

}
