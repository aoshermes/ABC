#include<iostream>
#include<algorithm>
#include<string>

using namespace std;


int main()
{
  string S1234;
  cin >> S1234;

  string S12, S34;

  S12 = S1234.substr(0,2);
  S34 = S1234.substr(2);

  int num12 = atoi(S12.c_str());
  int num34 = atoi(S34.c_str());

  if( (num12 == 0 || num12 >= 13) && (num34 >= 1 && num34 <= 12) ) cout << "YYMM";
  else if( (num12 >= 1 && num12 <= 12) && (num34 == 0 || num34 >= 13) ) cout << "MMYY";
  else if( (num12 >= 1 && num12 <= 12) && (num34 >= 1 && num34 <= 12) ) cout << "AMBIGUOUS";
  else cout << "NA";

  return 0;
}
