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

//cでもc++でも
ll gcd(ll a, ll b){
  if(a%b == 0){
    return b;
  }else{
    return gcd(b, a%b);
  }
}

//cでもc++でも
ll lcm(ll a, ll b){
  return a*b / gcd(a, b);
}

ll N, M, K;
ll lc;

bool f(ll x){
	ll cnt = x/N + x/M - 2*(x/lc);
	return cnt >= K;
}

int main(void){

	cin >> N >> M >> K;
	lc = lcm(N, M);
	
	ll l = 0, r = 1e18;
	while(abs(r-l)>1){
		ll c = (l+r)/2;
		if(!f(c)){
			l = c;
		}else if(f(c)){
			r = c;
		}
	}

	cout << r << endl;

	return 0;

}
