/* https://www.geeksforgeeks.org/longest-span-sum-two-binary-arrays/ */

#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define f(i, a, n) for(int i = a; i < n; i++)
#define pb(a) push_back(a)
#define mp(a, b) make_pair(a, b)
#define mod 1000000007
int gcd(int a, int b) { if (!b) return a; return gcd(b, a % b); }  
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
using namespace std;

int longestCommonSum(int arr1[], int arr2[], int n) 
{ 
    // Find difference between the two 
    int arr[n]; 
    for (int i=0; i<n; i++) 
      arr[i] = arr1[i] - arr2[i]; 
      
    // Creates an empty hashMap hM 
    unordered_map<int, int> hM; 
  
    int sum = 0;     // Initialize sum of elements 
    int max_len = 0; // Initialize result 
  
    // Traverse through the given array 
    for (int i = 0; i < n; i++) 
    { 
        // Add current element to sum 
        sum += arr[i]; 
  
        // To handle sum=0 at last index 
        if (sum == 0) 
            max_len = i + 1; 
  
        // If this sum is seen before,  
        // then update max_len if required 
        if (hM.find(sum) != hM.end()) 
          max_len = max(max_len, i - hM[sum]); 
            
        else // Else put this sum in hash table 
            hM[sum] = i; 
    } 

    /*for(auto i : hM){   
      cout << i.first << " " << i.second << endl; // for debugging
    }*/
  
    return max_len; 
}  


int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int a[n];int b[n];

    for(int i=0;i<n;i++){
      cin >> a[i];
      }

      for(int i=0;i<n;i++){
      cin >> b[i];
      }

      cout << longestCommonSum(a,b,n) << endl;

  }
}
