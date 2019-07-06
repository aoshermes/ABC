#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> divisor(int a)
{
  vector<int> head, tail;

  for(int i=1; i*i<=a; i++){
    if(a%i == 0){
      head.push_back(i);
      if(i*i != a){
        tail.push_back(a/i);
      }
    }
  }
  while(tail.size() != 0){
    head.push_back(tail[tail.size()-1]);
    tail.pop_back();
  }

  return head;
}


int main()
{
  vector<int> div0, div1;
  int N;
  cin >> N;

  vector<int> data;
  for(int i=0; i<N; i++)
  {
    int x;
    cin >> x;

    data.push_back(x);
  }

  sort(data.begin(),data.end());

  int div0max, div1max;
  int enableCnt;

  div0 = divisor(data[0]);
  div0max = 1;
  for(int i=div0.size()-1; i>0; i--){
    enableCnt = N;
    for(int j=1; j<N; j++){
      if(data[j]%div0[i] != 0) enableCnt--;
      if(enableCnt<N-1) break;
    }
    if(enableCnt>=N-1){
      div0max = div0[i];
      break;
    }
  }

  div1 = divisor(data[1]);
  div1max = 1;
  for(int i=div1.size()-1; i>0; i--){
    enableCnt = N;
    for(int j=2; j<N; j++){
      if(data[j]%div1[i] != 0) enableCnt--;
      if(enableCnt<N) break;
    }
    if(enableCnt>=N){
      div1max = div1[i];
      break;
    }
  }

  cout << max(div0max,div1max);


  return 0;
}
