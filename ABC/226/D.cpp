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

int gcd(int a, int b){
  if(a%b == 0){
    return b;
  }else{
    return gcd(b, a%b);
  }
}

struct frac{
	ll a, b;
	frac(ll _a = 0, ll _b = 1): a(_a), b(_b){
		if(b == 0){ a = 1; return; }
		if(b < 0) a = -a, b = -b;
		ll g = gcd(abs(a), b);
		a /= g; b /= g;
	}

	bool operator <(const frac& x) const{
		return a*x.b < x.a*b;
	}
};

int main(void){

	int N; cin >> N;
	vector<int> x(N), y(N);
	REP(i,N) cin >> x[i] >> y[i];

	set<frac> st;
	REP(i,N){
		REP(j,i){
			st.insert(frac(x[i]-x[j], y[i]-y[j]));
		}
	}

	cout << st.size()*2 << endl;

	return 0;

}
