///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, i, j;
  cin >> n;
  for (i = 1; i <= n; i++)
    {
      if (n % i == 0)
	cout << i << endl;
    }
}
