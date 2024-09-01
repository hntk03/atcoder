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

pair<int, int> input(){
	int x, y; cin >> x >> y;
	pair<int, int> p = make_pair(x, y);
	return p;
}

int product(pair<int, int> a, pair<int, int> b){
	int p = a.first * b.first + a.second * b.second;
	return p;
}

int main(void){

	pair<int, int> A = input();
	pair<int, int> B = input();
	pair<int, int> C = input();

	pair<int, int> AB = make_pair(A.first - B.first, A.second - B.second);
	pair<int, int> AC = make_pair(A.first - C.first, A.second - C.second);
	pair<int, int> BC = make_pair(B.first - C.first, B.second - C.second);

	if(product(AB, AC) == 0 or product(AB, BC) == 0 or product(AC, BC) == 0){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}

	return 0;

}
