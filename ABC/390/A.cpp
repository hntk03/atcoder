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

bool check(vector<int> v){
	REP(i,4){
		if(!(v[i] < v[i+1]))  return false;
	}
	return true;
}

int main(void){

	vector<int> A(5);
	REP(i,5) cin >> A[i];

	REP(i,4){
		vector<int> tmp = A;
		swap(tmp[i], tmp[i+1]);
		if(check(tmp)){
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;
	return 0;

}
