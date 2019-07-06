#include<iostream>

using namespace std;


int main()
{
  int P, Q, R;
  cin >> P >> Q >> R;

  int sum;

  sum = P+Q;

  if(sum >= P+R)  sum = P+R;
  if(sum >= Q+R)  sum = Q+R;

  cout << sum << endl;

  return 0;
}
