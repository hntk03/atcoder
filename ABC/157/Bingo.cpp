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

	
	int A[3][3];

	REP(i,3) REP(j,3) cin >> A[i][j];

	int flag[3][3] = {0};
	int N; cin >> N;

	REP(i,N){
		int b; cin >> b;
		REP(j,3){
			REP(k,3){
				if(b == A[j][k]) flag[j][k] = 1;
			}
		}
	}

	bool ans = false;
	if((flag[0][0] + flag[0][1] + flag[0][2]) == 3) ans = true;
	else if((flag[1][0] + flag[1][1] + flag[1][2]) == 3) ans = true;
	else if((flag[2][0] + flag[2][1] + flag[2][2]) == 3) ans = true;
	else if((flag[0][0] + flag[1][0] + flag[2][0]) == 3) ans = true;
	else if((flag[0][1] + flag[1][1] + flag[2][1]) == 3) ans = true;
	else if((flag[0][2] + flag[1][2] + flag[2][2]) == 3) ans = true;
	else if((flag[0][0] + flag[1][1] + flag[2][2]) == 3) ans = true;
	else if((flag[0][2] + flag[1][1] + flag[2][0]) == 3) ans = true;

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;


	return 0;

}
