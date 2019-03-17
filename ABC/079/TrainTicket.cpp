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

	string s; cin >> s;
	string eq;
	vector<int> v(4);
	v[0] = s[0] - '0';
	v[1] = s[1] - '0';
	v[2] = s[2] - '0';
	v[3] = s[3] - '0';

	for(int i=0;;++i){
		bitset<3> bs(i);
		eq = "";
		int ans = v[3];
		eq += s[3];
		REP(i,3){
			if(bs[3-i] == true){
				ans += v[3-i-1];
				eq += ('+' + s[3-i-1]);
			}else{
				ans -= v[3-i-1];
				eq += ('-' + s[3-i-1]);
			}
		}
		if(ans == 7){
				eq += "=7";
				break;
		}
	}

	cout << eq << endl;





	return 0;

}
