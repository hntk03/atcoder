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

	int N; cin >> N;

	int ans = 0;
	for(int c=1;c<=N;c += 2){
		int cnt = 0;
		for(int i=1;i<=c;++i){
			if(c % i == 0) ++cnt;
		}
		if(cnt == 8) ++ans;
	}

	cout << ans << endl;
	return 0;

}
