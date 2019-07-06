#include<iostream>
#include<vector>

using namespace std;


int main()
{
  int N;
  cin >> N;

  int D[N] = {};

  for(int i = 0; i < N; i++){
    int d;
    cin >> d;

    D[d] += 1;

  }

  int sum = 0;
  int cnt = 0;
  int i = 0;
  while(1){
    sum += D[i];
    if(sum == N/2){
      cnt++;
    }
    if(sum > N/2) break;
  }
  for(int i = 0; i < D[N]; i++){
    sum += D[i];
    if(sum == N/2){
      while(i < N){
        if(sum == N/2){
          cnt++;
        }
        i++;
      }
    }
  }

  cout << cnt << endl;

  return 0;
}
