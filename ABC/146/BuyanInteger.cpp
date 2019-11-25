#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	
	ll A, B, X; cin >> A >> B >> X;

	ll N = 1;
	ll d = 1;
	ll ans = 0;

	while((A*N+B*d)<X){
		N *= 10;
		d++;
	}
	N--;
	d--;

	while(N){
		if(A*N+B+d <= X){
			ans = N;
			break;
		}
		N--;
	}
	if(N == -1) ans = 0;

	cout << ans << endl;

	return 0;

}
