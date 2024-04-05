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

	ll N, D, P;	cin >> N >> D >> P;

	vector<ll> F(N);
	REP(i,N) cin >> F[i];

	REP(i,N%D) F.push_back(0);

	sort(F.begin(), F.end());
	reverse(F.begin(), F.end());

	ll ans = 0;
	ll sum = 0;
	REP(i,F.size()){
		sum += F[i];
		if((i-1)%D == 0 and i != 0){
			if(sum > P){
				ans += P;
			}else{
				ans += sum;
			}
			sum = 0;
		}
	}

	cout << ans << endl;


	return 0;

}
