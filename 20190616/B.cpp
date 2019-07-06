#include<iostream>
#include<vector>

using namespace std;


int main()
{
  int N, X;
  cin >> N >> X;

  vector<int> L;

  for(int i = 0; i < N; i++){
    int l;
    cin >> l;

    L.push_back(l);
  }

  int D = 0;

  int bound = 1;

  for(int i = 0; i < N; i++){
    D += L[i];

    if(D <= X) bound++;
    else break;
  }

  cout << bound << endl;

  return 0;
}
