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

	if(N%2 == 0){
		cout << "No" << endl;
		return 0;
	}

	int mid = N / 2;

	bool one = true;
	REP(i,mid){
		if(S[i] != '1') one = false;
	}

	bool two = true;
	FOR(i,mid+1,N){
		if(S[i] != '2') two = false;
	}

	bool in = S[mid] == '/';

	if(one and two and in) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
