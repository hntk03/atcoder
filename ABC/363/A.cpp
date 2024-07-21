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

	int R; cin >> R;
	if(1 <= R and R <= 99){
		cout << 100 - R << endl;
	} else if(100 <= R and R <=199){
		cout << 200 - R << endl;
	} else if(200 <= R and R <=299){
		cout << 300 - R << endl;
	}


	return 0;

}
