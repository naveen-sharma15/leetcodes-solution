class MyQueue {
public:
 stack<int>s1,s2;
 int peekEL=-1;
    MyQueue() {
   
    }
    
    void push(int x) {
        if(s1.empty())
        {
            peekEL=x;
        }
        s1.push(x);
    }
    
    int pop() {
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int val=s2.top();
        s2.pop();
        return val;
       
    }
    
    int peek() {
      if(s2.empty())
      {
          return peekEL;
      }
      return s2.top();
    }
    
    bool empty() {
        if(s1.empty()&&s2.empty())
        {
            return true;
        }
        else {
            return false;
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */