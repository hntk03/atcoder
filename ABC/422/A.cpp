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

	int world = S[0] - '0';
	int stage = S[2] - '0';

	if(stage == 8){
		stage = 1;
		world += 1;
	}else{
		stage++;
	}
	
	cout << world << '-' << stage << endl;
	return 0;

}
