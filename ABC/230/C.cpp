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

ll N, A, B;
ll P, Q, R, S;

bool checkK1(ll i, ll j){
	ll K1 = i - A;
	ll K2 = j - B;

	return K1 == K2;
}


bool checkK2(ll i, ll j){
	ll K1 = i - A;
	ll K2 = B - j;

	return K1 == K2;
}

int main(void){

	cin >> N >> A >> B;	
	cin >> P >> Q >> R >> S;

	ll c1lower = max(1-A, 1-B);
	ll c1upper = min(N-A, N-B);

	ll c2lower = max(1-A, B-N);
	ll c2upper = min(N-A, B-1);

	A--; B--;
	P--; Q--;
	R--; S--;

	for(ll i=P;i<(Q+1LL);i++){
		for(ll j=R;j<(S+1LL);j++){

			ll K = i - A;
			if(checkK1(i, j) and c1lower <= K and K <= c1upper) cout << '#';
			else if(checkK2(i,j) and c2lower <= K and K <= c2upper) cout << '#';
			else cout << '.';
		}
		cout << endl;
	}

	return 0;

}
