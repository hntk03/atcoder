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

vector<ll> nums;

void dfs(int i, ll num){
	if(i == 12) return;

	nums.push_back(num);

	num *= 10;
	dfs(i+1, num);
	dfs(i+1, num+2);
	dfs(i+1, num+4);
	dfs(i+1, num+6);
	dfs(i+1, num+8);

}

int main(void){

	ll N; cin >> N;	

	nums.push_back(0);
	dfs(0, 0);

	sort(nums.begin(), nums.end());

	cout << nums[N] << endl;

	return 0;

}
