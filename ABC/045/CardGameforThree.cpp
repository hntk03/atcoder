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

	string Sa, Sb, Sc; cin >> Sa >> Sb >> Sc;

	int idx_a = 1;
	int idx_b = 0;
	int idx_c = 0;
	char turn = Sa[0];
	while(true){
		switch(turn){
			case 'a':
				turn = Sa[idx_a];
				idx_a++;
				break;
			case 'b':
				turn = Sb[idx_b];
				idx_b++;
				break;
			case 'c':
				turn = Sc[idx_c];
				idx_c++;
				break;
		}
		if(idx_a == Sa.length() and turn == 'a'){
			cout << 'A' << endl;
			return 0;
		}
		else if(idx_b == Sb.length() and turn == 'b'){
			cout << 'B' << endl;
			return 0;
		}
		else if(idx_c == Sc.length() and turn == 'c'){
			cout << 'C' << endl;
			return 0;
		}
	}


	return 0;

}
