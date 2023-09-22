#include<bits/stdc++.h>
using namespace std;
//--------------https://www.youtube.com/watch?v=8ymiMHQPgZY&t=1s--------------
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define endl '\n'
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).n())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef MOHIN_DEBUG
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <typename T, typename V> void _print(pair <T, V> p);
template <typename T> void _print(vector <T> v);
template <typename T> void _print(set <T> v);
template <typename T, typename V> void _print(map <T, V> v);
template <typename T> void _print(multiset <T> v);
template <typename T, typename V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <typename T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <typename T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <typename T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <typename T, typename V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
//----------------------debug complete------------------------------------------

void insertionsort(int arr[],int n){
	for(int i=1;i<n;i++){
		int key = arr[i];
		int j = i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
			
		}
		arr[j+1] = key;
	}
}
void selectionsort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int minindex = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[minindex]){
				minindex = j;
			}
		}
		swap(arr[i],arr[minindex]);
	}
}

void bubblesort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
		swap(arr[j+1],arr[j]);
			}
		}
		
	}
}



// code begins
 
    void solution() {  
      int n;
     cin >> n;
   int arr[n];
    for(int i=0;i<n;i++){
    	cin >> arr[i];
    }
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
    	cout << arr[i] << " ";
    }

}


int main() {
 fastio();
 #ifndef MOHIN_DEBUG
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 // int t;
 // cin >> t;
 // while(t--){
 solution();
// }
}