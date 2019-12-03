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
	int X = (int)(N / 1.08);
	
	if(((int)X * 1.08) == N) cout << X << endl;
	else if((int)((X+1) * 1.08) == N) cout << X + 1 << endl;
	else cout << ":(" << endl;
	

	return 0;

}
