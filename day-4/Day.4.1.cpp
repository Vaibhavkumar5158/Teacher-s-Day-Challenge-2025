class MinStack {
public:
    vector<pair<int,int>> v;
    MinStack() {
        
    }
    
    void push(int val) {
        if(v.empty()){
            v.push_back({val,val});
            return;
        }
        // more than 1 element
        auto top = v.back();
        int new_min_till_now = min(val, top.second);
        v.push_back({val,new_min_till_now});
        
    }
    
    void pop() {
        v.pop_back();
        
    }
    // A ,B ,C ,D
    int top() {
        return v.back().first;     // right most element return  //28.11 code explain
        
    }

    int getMin() {
        return v.back().second;   
    }
};