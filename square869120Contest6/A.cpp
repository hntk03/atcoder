#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	int N, T; cin >> N >> T;
	vector<int> A(N-1);
	REP(i,N-1) cin >> A[i];

	int sum = 0;
	REP(i,N-1){
		sum += A[i];
	}

	int ans = sum / T;
	if(sum % T != 0) ans++;

	cout << ans << endl;

	return 0;

}
