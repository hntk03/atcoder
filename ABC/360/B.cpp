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

	string S, T; cin >> S >> T;	

	FOR(i,1,S.length()){
		vector<string> split;
		int N = (S.length() + i - 1) / i;
		REP(j,N){
			string now = S.substr(j*i,i);
			split.push_back(now);
		}

		REP(j,i+1){
			string X = "";
			REP(k,split.size()){
				if(j >= split[k].size()) continue;
				X += split[k][j];
			}

			if(X == T){
				cout << "Yes" << endl;
				return 0;
			}
		}

	}

	cout << "No" << endl;
	return 0;

}
