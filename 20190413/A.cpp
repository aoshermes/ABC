#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;


int main()
{
  int A, B;
  cin >> A >> B;

  int score = 0;

  if(A >= B){
    score += A;
    A -= 1;
  }
  else{
    score += B;
    B -= 1;
  }

  score += max(A,B);

  cout << score << endl;

  return 0;
}
