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

int main(void){

	int N; cin >> N;
	vector<int> a(N);
	REP(i,N) cin >> a[i];

	SORT(a);

	int ans = 0;
	int now = 1;
	REP(i,N){
		if(a[i] == now){
			ans++;
			now++;
		}else{
			if(i < N-2){
				ans++;
				N -= 2;
				now++;
				i--;
			}else{
				break;
			}
		}
	}

	cout << ans << endl;


	return 0;

}
