class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector<int> arr;
       int  bottom=matrix.size()-1,right=matrix[0].size()-1,left=0,top=0,mini=min(bottom+1,right+1);
      while(top <= bottom && left <= right)
{
      if(top <= bottom && left <= right)
        for(int i=left;i<=right;i++){
arr.push_back(matrix[top][i]);
        }
        top++;
              if(top <= bottom && left <= right)
                for(int i=top;i<=bottom;i++){
arr.push_back(matrix[i][right]);
        }
        right--;
              if(top <= bottom && left <= right)
          for(int i=right;i>=left;i--){
 arr.push_back(matrix[bottom][i]);
        }
        bottom--;
              if(top <= bottom && left <= right)
          for(int i=bottom;i>=top;i--){
arr.push_back(matrix[i][left]);
        }
        left++;
        }
        return arr;
    }
};