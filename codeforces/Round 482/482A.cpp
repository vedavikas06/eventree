//cf482A.cpp
#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define sf scanf
#define pf printf
#define f first
#define s second
#define clr(x,y) memset(x,y,sizeof x)
#define LL long long
#define L int
#define mx 100009
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;




int main(){



ios_base::sync_with_stdio(false);

cin.tie(NULL);

vector<int> v;

LL n;

cin >> n;

if(n==0){
	cout << "0" << endl;
}else{

if((n+1)%2==0){
	cout << (n+1)/2 << endl;
}else{
	cout << n+1 << endl;
}

}

return 0;


}
