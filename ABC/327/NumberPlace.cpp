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

	vector<vector<int> > A(9, vector<int>(9));

	REP(i,9){
		REP(j,9){
			cin >> A[i][j];
		}
	}

	bool ans = true;

	REP(i,9){
		set<int> st;
		REP(j,9){
			st.insert(A[i][j]);
		}
		if(st.size() != 9) ans = false;
	}

	REP(i,9){
		set<int> st;
		REP(j,9){
			st.insert(A[j][i]);
		}
		if(st.size() != 9) ans = false;
	}

	REP(i,3){
		REP(j,3){
			set<int> st;
			REP(k,3){
				REP(l,3){
					st.insert(A[3*i+k][3*j+l]);
				}
			}
			if(st.size() != 9) ans = false;
		}
	}


	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
