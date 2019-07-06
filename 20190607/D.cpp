#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>

using namespace std;


int main()
{
  int h, w;
  cin >> h >> w;

  vector<string> s(h);

  for(int i = 0; i < h; i++){
    cin >> s[i];
  }
  vector<vector<int>> cnt(h, vector<int>(w));

  for(int i = 0; i < h; i++){
    vector<int> done(w);
    for(int j = 0; j < w; j++){
      if(s[i][j] == '#')  continue;
      if(done[j]) continue;
      int l = 0;
      while(j+l < w){
        if(s[i][j+l] == '#')  break;
        l++;
      }
      for(int k = 0; k < l; k++){
        cnt[i][j+k] += l;
        done[j+k] = 1;
      }
    }
  }

  for(int j = 0; j < w; j++){
    vector<int> done(h);
    for(int i = 0; i < h; i++){
      if(s[i][j] == '#')  continue;
      if(done[i]) continue;
      int l = 0;
      while(i+l < h){
        if(s[i+l][j] == '#')  break;
        l++;
      }
      for(int k = 0; k < l; k++){
        cnt[i+k][j] += l;
        done[i+k] = 1;
      }
    }
  }

  int ans = 0;
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      ans = max(ans, cnt[i][j]-1);
    }
  }

  cout << ans << endl;

  return 0;
}
