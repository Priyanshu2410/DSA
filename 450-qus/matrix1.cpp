// <<<<<<< HEAD
// Spirally traversing a matrix

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int i=0;
//         int j=matrix[0].size()-1;
//         while(i<matrix.size() && j>=0)
//         {
//             if(target==matrix[i][j])
//             {
//                 return true;
//             }
//             else if(target<matrix[i][j])
//             {
//                 j--;
//             }
//             else
//             {
//                 i++;
//             }
            
//         }
//         return false;
//     }
// =======
// Spirally traversing a matrix

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int i=0;
//         int j=matrix[0].size()-1;
//         while(i<matrix.size() && j>=0)
//         {
//             if(target==matrix[i][j])
//             {
//                 return true;
//             }
//             else if(target<matrix[i][j])
//             {
//                 j--;
//             }
//             else
//             {
//                 i++;
//             }
            
//         }
//         return false;
//     }

// };