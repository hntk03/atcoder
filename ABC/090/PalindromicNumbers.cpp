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

	int A, B; cin >> A >> B;

	int ans = 0;
	FOR(a,1,10){
		REP(b,10){
			REP(c,10){
				int x = 10000*a+1000*b+100*c+10*b+a;
				if(x >= A and x <= B) ans++;
			}
		}
	}

	cout << ans << endl;

	return 0;

}
