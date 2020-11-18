
/*       
          Name: Shaik Sarfraj
          Program Name : Palindrome Program    (as per list)                           
*/

/*###########################Palindrome Program################################## */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int rem, rev = 0, org = n;
	while(n != 0)
	{
		rem = n%10;
		rev = rev*10 + rem;
		n = n/10;
	}
	if(org == rev)
		cout << org << " is a Palindrome" << endl;
	else
		cout << org << " is not a Palindrome " << endl;

	return 0;
}

/*###########################Program End################################## */