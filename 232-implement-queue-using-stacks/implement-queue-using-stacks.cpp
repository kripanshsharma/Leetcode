class MyQueue {
public:
    stack<int> inputstack;
    stack<int> outputstack;
    MyQueue() {
            
    }
    
    void push(int x) {
       inputstack.push(x); 
    }
    
    int pop() {
        if(outputstack.size()!=0) {
            int temp = outputstack.top();
            outputstack.pop();
            return temp;
            }
        else{
            while(inputstack.size()!=0){
            int temp = inputstack.top();
            inputstack.pop();
            outputstack.push(temp);
            }
            return pop();
        }
        
        
    }
    
    int peek() {
        if(outputstack.size()!=0) return outputstack.top();
          
        else{
            while(inputstack.size()!=0){
            int temp = inputstack.top();
            inputstack.pop();
            outputstack.push(temp);
            }
            return peek();
        }
        
    }
    
    bool empty() {
        if(inputstack.size()==0 && outputstack.size()==0) return true;
        else return false;
        
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