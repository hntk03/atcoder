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

	ll N, M; cin >> N >> M;
	ll K; cin >> K;

	ll X = lcm(N, M);


	ll cnt = 0;
	FOR(i,1,X){
		if(i % N == 0 and i % M != 0) cnt++;
		else if(i % N != 0 and i % M == 0) cnt++;
	}

	ll pos = K % (cnt+1);

	ll now = 0;
	for(ll i=X*(K/cnt-1);;i++){

		if(i % N == 0 and i % M != 0) now++;
		else if(i % N != 0 and i % M == 0) now++;

		if(now == pos){
			cout << i << endl;
			break;
		}

	}

	return 0;

}
