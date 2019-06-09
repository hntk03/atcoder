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
	vector<int> W(N);
	int sum = 0;
	REP(i,N){ 
		cin >> W[i];
		sum += W[i];
	}


	int a = W[0];
	int b = sum - W[0];
	int ans = abs(a-b);
	FOR(i,1,N-1){
		a += W[i];
		b -= W[i];
		ans = min(ans, abs(a-b));
	}

	cout << ans << endl;


	return 0;

}
