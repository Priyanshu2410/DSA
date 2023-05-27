// // 1491. Average Salary Excluding the Minimum and Maximum Salary


// class Solution {
// public:
//     double average(vector<int>& salary) {
//         sort(salary.begin(),salary.end());
//         double sum=0;double avg=0.00000;
//         for(int i=1;i<salary.size()-1;i++){
//             sum+=salary[i];
//         }
//         avg=sum/(salary.size()-2);
//         return avg;
//     }
// };