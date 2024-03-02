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

vector<string> S;
int ans = 0;

void search(int i, int j, int k, vector<pair<int, int> > coords){

	if(k == 0){
		if(S[i][j] == 'x') return ;
		coords.push_back(make_pair(i,j));
		search(i,j,1,coords);
	}else if(k == 1){
		REP(x,S.size()){
			search(x,j,2,coords)

		}
	}

	if(k == 1){
		REP(x,S[i].length()){


		}

	}

}


int main(void){

	int N; cin >> N;
	vector<string> S(N);
	REP(i,N){
		string s; cin >> s;
		S.push_back(s);
	}

	REP(i,N){
		REP(j,S[i].length()){
			vector<pair<int, int>> coords;
			search(i, j, 0, coords);
		}
	}

	cout << ans << endl;

	return 0;

}
