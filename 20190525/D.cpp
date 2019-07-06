#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  priority_queue<pair<int,int>> q;

  for(int i = 0; i < N; i++){
    int A;
    cin >> A;

    q.push(make_pair(A,1));
  }

  for(int i = 0; i < M; i++){
    int B, C;
    cin >> B >> C;

    q.push(make_pair(C,B));
  }

  long long sum = 0;
  for(int i = 0; i < N; i++){
    auto p = q.top();
    q.pop();
    sum += p.first;

    if(p.second > 1){
      p.second--;
      q.push(p);
    }
  }

  cout << sum;

  return 0;
}
