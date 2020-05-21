#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	string S; cin >> S;
	vector<int> A(4);
	REP(i,4){
		A[i] = S[i] - '0';
	}

	REP(i,8){
		int tmp = i;

		int sum = A[0];
		FOR(j,1,4){
			if(tmp&1) sum += A[j];
			else sum -= A[j];
			tmp = tmp >> 1;
		}

		if(sum == 7){
			tmp = i;
			REP(j,3){
				cout << A[j];
				if(tmp&1) cout << "+";
				else cout << "-";
				tmp = tmp >> 1;
			}
			cout << A.back() << "=7" << endl;

			return 0;
		}


	}





	return 0;

}
