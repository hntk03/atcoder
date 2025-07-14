#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())
#define all(a) (a).begin(), (a).end()

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

bool Asin(ll num, int a){

	vector<int> v;
	while(num > 0){
		v.push_back(num%a);
		num /= a;
	}

	REP(i,v.size()/2) if(v[i] != v[v.size()-1-i]) return false;

	return true;
}

ll makeKaibun(ll num){
	ll original = num;
	ll target = num;
	while(original > 0){
		target *= 10;
		target += original%10;
		original /= 10;
	}

	return target;
}

ll makeKaibun2(ll num){

	ll original = num/10;
	ll target = num;
	while(original > 0){
		target *= 10;
		target += original%10;
		original /= 10;
	}

	return target;
}

int main(void){

	int A; cin >> A;
	ll N; cin >> N;

	ll ans = 0;
	ll num = 1;
	while(true){
		int keta = to_string(num).size();

		{
			ll target = makeKaibun2(num);
			if(target > N) break;
			if(Asin(target, A)){
				ans += target;
			} 
		}

		ll target = makeKaibun(num);
		// if(target > N) break;
		if(Asin(target, A) and target <= N){
			ans += target;
		} 

		num++;
	}

	cout << ans << endl;
	return 0;

}
