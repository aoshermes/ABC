#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;


int main()
{
  int N;
  cin >> N;

  vector<int> W(N);

  for(int i = 0; i < N; i++)
  {
    cin >> W[i];
  }

  int sumdiff = 100;

  for(int i = 0; i < N; i++)
  {
    int T = i;
    int sumlow, sumup;

    sumlow = 0;
    sumup = 0;

    for(int j = 0; j < N; j++)
    {
      if(T >= j)  sumlow += W[j];
      else  sumup += W[j];
    }

    int temp = abs(sumup - sumlow);

    if(sumdiff > temp)  sumdiff = temp;

  }

  cout << sumdiff << endl;

  return 0;
}
