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

vector<ll> Red(11, 0L);
vector<ll> Blue(11, 0L);

int main(void){

  ll N, X, Y; cin >> N >> X >> Y;	

	Red[N] = 1L;

	while(N>=2){
		Red[N-1] += Red[N];
		Blue[N] += Red[N]*X;

		Red[N-1] += Blue[N];
		Blue[N-1] += Blue[N]*Y;

		N--;
	}

	cout << Blue[1] << endl;

	return 0;

}
