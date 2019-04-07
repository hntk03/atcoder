#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

long long N;
long long ans = 0;

void dfs(long long v, int a, int b, int c){

	if(v > N) return ;
	else if(v >= 1 and v <= N and a > 0 and b > 0 and c > 0){
		ans++;
	}

	dfs(10*v+7,a+1, b, c);
	dfs(10*v+5, a, b+1, c);
	dfs(10*v+3, a, b, c+1);

	return ;

}


int main(void){


	cin >> N;
	dfs(0,0,0,0);
	cout << ans << endl;


	return 0;

}
