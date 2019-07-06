#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
  int N, M;
  cin >> N >> M;

  int initflag = 0;
  int errflag = 0;
  int Lmax, Rmin;
  for(int i=0; i<M; i++)
  {
    int L, R;

    cin >> L >> R;

    if(0 == initflag)
    {
      Lmax = L;
      Rmin = R;
      initflag = 1;
    }
    else{
      if(L > Rmin || R < Lmax)
      {
        errflag = 1;
        break;
      }

      if(L >= Lmax) Lmax = L;
      if(R <= Rmin) Rmin = R;
    }
  }

  if(0 == errflag)  cout << (Rmin - Lmax) + 1;
  else cout << 0;

  return 0;
}
