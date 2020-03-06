#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

int main(void){

	string S; cin >> S;
	int N = S.length();
	vector<int> ans(S.length(), 0);
	vector<int> cnt(2, 0);
	bool r = false;
	bool l = false;
	int tmp = 0;
	REP(i,N){
		cnt[i%2]++;
		if(!r and !l and S[i] == 'R'){
			r = true;
		}else if(r and S[i] == 'L'){
			l = true;
			r = false;
			tmp = i;
			cout << tmp << endl;
		}else if(!r and l and (S[i] == 'R' or i == N-1)){
			cout << 'a';
			r = true;
			l = false;
			cout << cnt[0] << " " << cnt[1] <<  endl; 
			ans[tmp] = cnt[tmp%2];
			ans[tmp-1] = cnt[(tmp-1)%2];
			vector<int> cnt(2, 0);
		}
	}

	REP(i,N){
		cout << ans[i] << " ";

	}

	return 0;

}
