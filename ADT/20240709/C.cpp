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

double radian(int degree){
	return degree * M_PI / 180.0;
}

int main(void){

	int a, b, d; cin >> a >> b >> d;

	double newX = a * cos(radian(d)) - b * sin(radian(d));
	double newY = a * sin(radian(d)) + b  * cos(radian(d));

	printf("%.10f %.10f\n", newX, newY);

	return 0;

}
