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
	map<int, int> mp;

	REP(i,N){
		double MT, mT; cin >> MT >> mT;
		if(MT >= 35) mp[0]++;
		if(MT >= 30 and MT < 35) mp[1]++;
		if(MT >= 25 and MT < 30) mp[2]++;
		if(mT >= 25) mp[3]++;
		if(mT < 0 and MT >= 0) mp[4]++;
		if(MT < 0) mp[5]++;
	}

	REP(i,5){
		cout << mp[i] << " ";
	}
		cout << mp[5] << endl;
	


	return 0;

}
