#include<iostream>
#include<algorithm>

using namespace std;


int main()
{
  int N, K;
  cin >> N >> K;


  double gP = 0.0;
  for(int i=1; i<=N; i++)
  {
    int S;
    double P;
    S = i;
    P = 1.0/(double)N;

    while(S <= K-1)
    {
      P *= 0.5;
      S *= 2;
    }

    gP += P;
  }

  printf("%.12f\n",gP);

  return 0;
}
