#include <stdio.h>
#include <cmath>
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

	int N, M; scanf("%d %d", &N, &M);

	vector<pair<int, int>> store(N);
	REP(i,N){
		int A, B;
		scanf("%d %d", &A, &B);
		store[i] = make_pair(A,B);
	}

	SORT(store);

	long long ans = 0;
	int cnt = 0;
	REP(i,N){
		if(cnt+store[i].second<M){
			ans += (long long)(store[i].first*store[i].second);
			cnt += store[i].second;
		}else{
			ans += (long long)(M-cnt)*store[i].first;
			break;
		}
	}


	printf("%lld\n", ans);

	return 0;

}
