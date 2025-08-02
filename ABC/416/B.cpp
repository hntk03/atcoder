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

	string T;

	bool maru = true;
	for(char c : S){
		if(c == '#'){
			T += '#';
			maru = true;
		} 
		else{
			if(maru){
				T += 'o';
				maru = false;
			}else{
				T += c;
			}
		}
	}

	cout << T << endl;
	return 0;

}
