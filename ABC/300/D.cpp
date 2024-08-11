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

vector<bool> Eratosthenes(int N){

	vector<bool> isPrime(N+1, true);
	isPrime[0] = isPrime[1] = false;

	for(int p=2;p<=N;p++){
		if(!isPrime[p]) continue;

		for(int q = p*2;q<=N;q+=p){
			isPrime[q] = false;
		}
	}

	return isPrime;
}

int main(void){

	ll N; cin >> N;

	vector<bool> isPrime = Eratosthenes(1e6);
	vector<int> p;
	REP(i,1e6+1){
		if(isPrime[i]) p.push_back(i);
	}

	int m = p.size();
	int ans = 0;
	REP(ai,m){
		ll a = p[ai];
		if(a*a*a*a*a > N) break;
		for(int bi=ai+1;bi<m;bi++){
			ll b = p[bi];
			if(a*a*b*b*b > N) break;
			for(int ci=bi+1;ci<m;ci++){
				ll c = p[ci];
				if(a*a*b*c*c > N) break;
				ans++;
			}
		}
	}

	cout << ans << endl;

	return 0;

}
