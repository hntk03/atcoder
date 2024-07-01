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

	int N;
	ll X; cin >> N >> X;

	string S; cin >> S;

	string T;
	for(char c : S){
		if(c == 'U'){
			if(T.size() and T.back() != 'U') T.pop_back();
			else T += c;
		}else{
			T += c;
		}
	}
	
	for(char c : T){
		if(c == 'U') X /= 2;
		if(c == 'L') X *= 2;
		if(c == 'R') X = 2*X + 1;
	}

	cout << X << endl;

	return 0;

}
