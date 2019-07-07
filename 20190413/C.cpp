#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;


int main()
{
  string S;
  cin >> S;

  int cntB = 0;
  for(int i = 0; i < S.length(); i++){
    if(i % 2 == 0){
      if(S[i] != '0'){
        cntB++;
      }
    }
    else{
      if(S[i] != '1'){
        cntB++;
      }
    }
  }

  int cntW = 0;
  for(int i = 0; i < S.length(); i++){
    if(i % 2 == 0){
      if(S[i] != '1'){
        cntW++;
      }
    }
    else{
      if(S[i] != '0'){
        cntW++;
      }
    }
  }


  cout << min(cntB, cntW) << endl;

  return 0;
}
