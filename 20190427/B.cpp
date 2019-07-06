#include<iostream>
#include<vector>

using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> value;
  for(int i=0; i<N; i++)
  {
    int x;
    cin >> x;

    value.push_back(x);
  }

  vector<int> cost;
  for(int i=0; i<N; i++)
  {
    int x;
    cin >> x;

    cost.push_back(x);
  }

  int benefit = 0;
  for(int i=0; i<N; i++)
  {
    int x = value[i] - cost[i];

    if(x>0) benefit += x;
  }

  cout << benefit;

  return 0;
}
