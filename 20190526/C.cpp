#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
  int ans = 0;

  int N, M;
  cin >> N >> M;

  vector <int> a(N);

  for(int i = 0; i < M; i++)
  {
    int k;
    cin >> k;
    for(int j = 0; j < k; j++)
    {
      int s;
      cin >> s;
      s--;
      a[s] |= 1 << i;
    }
  }

  int p = 0;
  for(int i = 0; i < M; i++)
  {
    int x;
    cin >> x;
    p |= x << i;
  }

  for(int s = 0; s < (1 << N); s++)
  {
    int t = 0;
    for(int i = 0; i < N; i++)
    {
      if( (s >> i) & 1)
      {
        t ^= a[i];
      }
    }

    if(t == p){
      ans++;
    }
  }

  cout << ans;

  return 0;
}
