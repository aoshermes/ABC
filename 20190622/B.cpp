#include<iostream>

using namespace std;


int main()
{
  int N, L;
  cin >> N >> L;

  int taste = 0;
  int abs_min = 100000;
  int eaten;
  for(int i = 0; i < N; i++){
    int score = (L + i);

    taste += score;

    if(abs_min > abs(score)){
      abs_min = abs(score);
      eaten = score;
    }
  }

  cout << (taste - eaten) << endl;

  return 0;
}
