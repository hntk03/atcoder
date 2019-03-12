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

bool check(string s){
	if(s.size()%2 == 1) return false;

	int middle = s.size()/2;
	if(s.substr(0,middle) == s.substr(middle,middle)) return true;
	else return false;
}


int main(void){

	string s; cin >> s;


	for(int i=s.size()-1;i>=0;--i){
		bool flag = check(s.substr(0,i));
		if(flag == true){ 
			cout << s.substr(0,i).size() << endl;
			return 0;
		}

	}



	return 0;

}
