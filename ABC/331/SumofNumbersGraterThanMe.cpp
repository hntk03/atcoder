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

	vector<int> A(N);
	REP(i,N) cin >> A[i];

	ll sum = 0;
	REP(i,N) sum += A[i];

	map<ll, ll> mp;

	REP(i,N) mp[A[i]]++;

	vector<pair<ll, ll> > cnt;

	for(auto x : mp){
		cnt.push_back(make_pair(x.first, x.second));
	}

	sort(cnt.begin(), cnt.end());

	mp.clear();


	for(auto x : cnt){
		sum -= x.first * x.second;
		mp[x.first] = sum;
	}

	REP(i,N) cout << mp[A[i]] << " ";
	cout << endl;

	return 0;

}
