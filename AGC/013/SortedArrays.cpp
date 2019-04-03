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

	int N; cin >> N;
	vector<int> A(N);
	REP(i,N) cin >> A[i];

	int ans = 0;
	bool inc = false;
	bool dec = false;
	if(A[0] < A[1]) inc = true;
	else dec = true;

	int i;
	for(i=1;i<N;++i){
		if(A[i-1] < A[i] and dec == true){
			inc = true;
			dec = false;
			ans++;
		}else if(A[i-1] > A[i] and inc == true){
			inc = false;
			dec = true;
			ans++;
		}
	}
	if(i == N)

	cout << ans << endl;
	return 0;

}
