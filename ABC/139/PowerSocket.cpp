#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	
	int A, B; 
	cin >> A >> B;

	int ans = 0;
	int num = 1;
	while(num < B){
		num += A-1;
		ans++;
	}

	cout << ans << endl;	


	return 0;

}
