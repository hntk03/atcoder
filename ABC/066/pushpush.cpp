#include <bits/stdc++.h>

using namespace std;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){


	int n; cin >> n;
	vector<int> a(n);
	REP(i,n) cin >> a[i];

	vector<int> b;

	REP(i,n){
		if(n%2 == 0){
			if(i%2 == 0){
				b.push_back(a[i]);
			}else{
				b.insert(b.begin(), a[i]);
			}
		}else{
			if(i%2 == 0){
				b.insert(b.begin(), a[i]);
			}else{
				b.push_back(a[i]);
			}
		}
	}

	REP(i,n-1){
		cout << b[i] << " ";
	}
	cout << b[n-1] << endl;

	return 0;

}
