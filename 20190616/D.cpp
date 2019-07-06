#include<iostream>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<vector>

using namespace std;


int main()
{
  int n;
  long long k;
  cin >> n >> k;

  vector<int> a(n);
  rep(i,n){
    cin >> a[i];
  }

  long long s = 0;
  int j = 0;
  long long ans = 0;
  rep(i,n){
    while(j < n && s+a[j] < k){
      s += a[j];
      j++;
    }
    ans += j-i;
    s -= a[i];
  }

  ans = (long long)n*(n+1)/2 - ans;

  cout << ans << endl;

  return 0;
}
