#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N; cin >> N;
	vector<int> H(N);
	REP(i,N) cin >> H[i];

	bool flag = true;
	H[0]--;
	FOR(i,1,N){
		if(H[i]-1 >= H[i-1]) H[i]--;
		else if(H[i] >= H[i-1]) continue;
		else flag = false;
	}

	if(flag == true) cout << "Yes" << endl;
	else cout << "No" << endl;



	return 0;

}
