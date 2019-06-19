#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N, x; cin >> N >> x;
	vector<int> a(N);
	int sum = 0;
	REP(i,N){ 
		cin >> a[i];
		sum += a[i];
	}

	SORT(a);

	int ans = 0;
	if(sum == x){
		ans = N;
	}else{
		sum = 0;
		int idx = 0;
		REP(i,N){
			cout << "a[i]:" << a[i] << endl;
			sum += a[i];
			if(sum <= x) idx++;
			else{
				break;
			}
		}
		ans = idx - 1;
	}


	cout << ans << endl;



	return 0;

}
