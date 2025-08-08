#include<bits/stdc++.h>
#include<queue>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
typedef long long ll;
typedef vector<pair<ll, ll>> vpll;
typedef vector<ll> vll;
typedef priority_queue<long long> pqll; //.push() , .top(), .size(), top element is biggest
#define endl '\n'
#define ub(v,n) upper_bound(v.begin(), v.end(), n)
#define lb(v,n) lower_bound(v.begin(), v.end(), n) 
#define as(v) sort(v.begin(), v.end())
#define ds(v) sort(v.begin(), v.end(), greater<>())
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

template <class T1, class T2, class Pred = std::less<T2>>struct sort_pair_second 
{bool operator()(const pair<T1,T2>&left, const pair<T1,T2>&right) {Pred p;return p(left.second, right.second);}};
#define freqsort(v) sort(v.begin(), v.end(), sort_pair_second<ll, ll>());
template <class T> void input(vector<T> &v){for(auto &x:v)cin>>x;}
void cout_vll(const vll&arr){for(auto it:arr){cout<<it<<" ";}cout<<endl;}
//----------------------------
/*
general ==>
upper_bound returns first element STRICTLY greater than the given value
lower_bound returns smallest element GREATER OR EQUAL to given value

ordered_set ==> 
order_by_key It returns to the number of items that are strictly smaller than our item k in O(logn)
*/

void solve(){

    

}


int main(){
    int tt; cin >> tt; while(tt--){solve();}
}


/*
There are three ways to survive in a ruined world.
I have forgotten some of them now.
However, one thing is certain: you who are currently reading these words will survive.
*/