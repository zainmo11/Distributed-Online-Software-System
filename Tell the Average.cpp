#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const int MOD=1000000007;
int main(){
     FAST;
     int n;
    cin >> n;
    deque<int> v(n);
    for (auto &i: v)cin >> i;
    while (v.size() > 1) {
        int first=v[0] , second= v[1];
        int ans =first+second+(first * second %MOD) ;
        ans%=MOD;
        swap(v[1],v[0]);
        v.pop_front();
        v[0]=ans;
    }
    cout<<v[0]%MOD<<e;
    return 0;
}
