class MinStack {
	stack<pair<int,int>> s;	
public:

    MinStack() {
        
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

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */