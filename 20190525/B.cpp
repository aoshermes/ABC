#include<iostream>
#include<algorithm>
#include<string>

using namespace std;


int main()
{
  int r, D, x2000;
  cin >> r >> D >> x2000;

  int xi = x2000;
  for(int i=0; i<10; i++)
  {
    int xii;
    xii = r*xi - D;
    cout << xii << endl;
    xi = xii;
  }

  return 0;
}
