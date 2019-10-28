#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int a, b, x; cin >> a >> b >> x;
	int h  = b - (x / (a*a));
	double d = double(h) / a;
	cout << h << endl;
	cout << d << endl;


	double ans = atan(d) * M_PI;
	cout << ans << endl;

	return 0;

}
