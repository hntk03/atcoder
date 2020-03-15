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

	
	ll a, b, c; cin >> a >> b >> c;
	a = a*a;
	b = b*b;
	c = c*c;
	if((a+b) < c) cout << "Yes" << endl;
	else cout << "No" << endl;


	return 0;

}
