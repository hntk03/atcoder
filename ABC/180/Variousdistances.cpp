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


ll manhattan(vector<ll> x){
	ll sum = 0;
	REP(i,x.size()){
		sum += abs(x[i]);
	}
	return sum;
}

double uq(vector<ll> x){
  double sum = 0;
	REP(i,x.size()){
		ll tmp = abs(x[i]);
		sum += tmp*tmp;
	}
	return sqrt(sum);
}

ll che(vector<ll> x){

	ll tmp = abs(x.front());

	FOR(i,1,x.size()){
		tmp = max(tmp, abs(x[i]));
	}

	return tmp;
}

int main(void){

	int N; cin >> N;
	vector<ll> x(N);

	REP(i,N) cin >> x[i];

	cout << manhattan(x) << endl;
	printf("%.10f\n", uq(x));
	cout << che(x) << endl;
	


	return 0;

}
