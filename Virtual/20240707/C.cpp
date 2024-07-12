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

int five(int x){
	return x*x*x*x*x;
}

int main(void){

	int X; cin >> X;	

	REP(A,1000){
		REP(B,1000){
			if(five(A) - five(B) == X){
				printf("%d %d\n", A, B);
				return 0;
			}
		}
	}

	return 0;

}
