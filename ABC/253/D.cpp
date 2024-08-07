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

ll calc(ll x){
	return (x*(x+1))/2;
}


ll calc2(ll x, ll N){
	ll s = N / x;
	return x*calc(s);
}

ll gcd(ll a, ll b){
  if(a%b == 0){
    return b;
  }else{
    return gcd(b, a%b);
  }
}

ll lcm(ll a, ll b){
  return a*b / gcd(a, b);
}

int main(void){

	ll N, A, B; cin >> N >> A >> B;
	
	ll sum = calc(N);
	ll ASum = calc2(A, N);
	ll BSum = calc2(B, N);

	ll lcmSum = calc2(lcm(A,B),N);
	

	ll ans = sum - ASum - BSum + lcmSum;
	cout << ans << endl;

	return 0;

}
