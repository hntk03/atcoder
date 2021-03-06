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

	int N; scanf("%d", &N);

	vector<pair<int, int>> ans(N);
	int a;
	REP(i,N){
		scanf("%d", &a);
		ans[i] = make_pair(a,i+1);
	}

	sort(ans.begin(), ans.end());
	
	for(int i=N-1; i > -1; i--) printf("%d\n", ans[i].second);
	

	return 0;

}
