#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	stack<pair<int,int>> s;
	
	public:
		

		minStack() 
		{ 
			// Write your code here.
		}
		
	
		void push(int num)
		{

			if(s.empty())
                s.push({num, num});
            else if(s.top().second<num)
			s.push({num,s.top().second});
			else
			s.push({num,num});
                }

		int pop()
		{

			if(s.empty()) return -1;
			int t=s.top().first;
			s.pop();
			return t;
		}
		
	
		int top()
		{
		
			if(s.empty()) return -1;
			else
			return s.top().first;
		}
		
		
		int getMin()
		{
			// Write your code here.
			if(s.empty()) return -1;
			else
			return s.top().second;
		}
};