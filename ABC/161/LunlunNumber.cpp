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

	int K; cin >> K;
	vector<ll> a;

	FOR(i,1,10) a.push_back(i);

	while(1){
		if(K <= a.size()){
			cout << a[K-1] << endl;
			return 0;
		}
		K -= a.size();
		vector<ll> old;
		swap(old, a);
		for(ll x : old){
			for(int i=-1; i<=1;++i){
				int d = x % 10 + i;
				if(d < 0 || d > 9) continue;
				ll nx = x * 10 + d;
				a.push_back(nx);
			}
		}
	}



	return 0;

}
