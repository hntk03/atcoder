#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

typedef std::tuple<string, int, int> mytuple;
bool mycompare( const mytuple &lhs, const mytuple &rhs ) {
    if (get<0>(lhs) != get<0>(rhs)) return get<0>(lhs) < get<0>(rhs);
    if (get<1>(lhs) != get<1>(rhs)) return get<1>(lhs) > get<1>(rhs);
}


int main(void){

	int N; cin >> N;
	vector<tuple<string, int, int>> city(N);
	REP(i,N){
		string s;
		int p;
		cin >> s >> p;
		city[i] = make_tuple(s, p, i+1);
	}

	sort(city.begin(), city.end(), mycompare);
	REP(i,N){
		cout << get<2>(city[i]) << endl;

	}

	return 0;

}
