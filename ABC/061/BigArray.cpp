#include <bits/stdc++.h>

using namespace std;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int MAX = 100001;

int main(void){

	long long int N, K; cin >> N >> K;
	vector<long long int> cnt(MAX, 0);
	REP(i,N){
		int a, b; cin >> a >> b;
		cnt[a] += b;
	}

	long long int sum = 0;
	REP(i,MAX){
		if(sum + cnt[i] < K) sum += cnt[i];
		else{
			cout << i << endl;
			break;
		}
	}





	return 0;

}
