/*algorithm :
1) Loop through grid ele row and col wise
2) call bfs on the ele if its val is "1"
3) replace the val of that ele treversed by bfs to 0
4) return if edge case
5) return to main function and increment count to 1
6) Repeat
EXAMPLE : [0,0,0,1,0,1]
          [1,0,0,0,1,0]
          [1,0,0,0,0,0]
          [1,1,1,1,0,1]
OUTPUT : 5      
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void bfs(vector<vector<char>>& grid,int i,int j)
    { 
        if(i>grid.size()-1 || j<0 || i<0 || j>grid[i].size()-1 || grid[i][j]=='0') return ;
        grid[i][j]='0';
        bfs(grid,i-1,j);
        bfs(grid,i+1,j);
        bfs(grid,i,j+1);
         bfs(grid,i,j-1);
   
    }
    int numIslands(vector<vector<char>>& grid) {
             if(grid.size()<1 || grid[0].size()<1) return 0;
        int count=0;
        int r=grid.size();
        int c=grid[0].size();

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    bfs(grid,i,j);
                    count+=1;
                }
            }
        }
        return count;
    }
    
};