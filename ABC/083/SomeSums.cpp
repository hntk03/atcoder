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

	int N, A, B; cin >> N >> A >> B;

	int ans = 0;
	FOR(i,1,N+1){
		int tmp = i;
		int sum = 0;
		while(tmp){
			sum += tmp%10;
			tmp /= 10;
		}
		if(sum >= A and sum <= B) ans += i;

	}

	cout << ans << endl;

	return 0;

}
