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
int H, W;

bool equal(vector<string> A, vector<string> B){

	REP(i,H){
		REP(j,W){
			if(A[i][j] != B[i][j]) return false;
		}
	}

	return true;
}

int main(void){

	cin >> H >> W;
	vector<string> A(2*H), B(2*H);

	REP(i,H) cin >> A[i];
	REP(i,H) cin >> B[i];

	REP(i,H) A[i] += A[i];
	REP(i,H) A[i+H] = A[i];

	REP(i,H){
		REP(j,W){
			bool flag = true;
			REP(k,H){
				REP(l,W){
					if(A[i+k][j+l] != B[k][l]) flag = false;
				}
			}

			if(flag){
				cout << "Yes" << endl;
				return 0;
			}
		}
	}

	cout << "No" << endl;
	return 0;

}
