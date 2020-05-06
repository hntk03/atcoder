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

	int N, A, B; cin >> N >> A >> B;
	string S; cin >> S;

	int num = 0;
	int ab = 0;
	REP(i,N){
		if(S[i] == 'a'){
			if(num < A+B){
				cout << "Yes" << endl;
				num++;
			}else{
				cout << "No" << endl;
			}
		}else if(S[i] == 'b'){
			if(num < A+B and ab < B){
				cout << "Yes" << endl;
				ab++;
				num++;
			}else{
				cout << "No" << endl;
			}
		}else{
				cout << "No" << endl;
		}
	}

	return 0;

}
