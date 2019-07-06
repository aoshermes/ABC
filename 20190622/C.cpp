#include<iostream>
#include<cmath>

using namespace std;


unsigned long long lcm(unsigned long long x, unsigned long long y)
{
	unsigned long long a = x * y;

	if (x < y) {
		unsigned long long tmp = x;
		x = y;
		y = tmp;
  }

	unsigned long long r = x % y;
  	while (r!=0) {
		x = y;
		y = r;
		r = x % y;
	}
	return a / y;
}

int main()
{
  unsigned long long A, B, C, D;
  cin >> A >> B >> C >> D;

  unsigned long long all_num = B - A + 1;

  unsigned long long int C_num = (B / C) - ((A-1) / C);
  unsigned long long int D_num = (B / D) - ((A-1) / D);

  unsigned long long cd = lcm(C, D);

  long long int CD_num = (B / cd) - ((A-1) / cd);

  cout << all_num - C_num - D_num + CD_num << endl;

  return 0;
}
