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

	
	vector<int> v(5);
	vector<pair<int, int>> p(5);
	REP(i,5){
		int v; cin >> v;
		int amari = v % 10;
		if(amari == 0) amari = 9;
		p[i] = make_pair(amari, v);
	}

	SORT(p);
	int ans = 0;
	for(int i=4;i>0;--i){
		if((p[i].second % 10) > 0) p[i].second += (10 - p[i].second % 10);
		ans += p[i].second;
	}
	ans += p.front().second;


	cout << ans << endl;


	return 0;

}
