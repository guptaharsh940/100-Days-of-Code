class KthLargest {
private:
    int element;
    priority_queue<int> q;
public:
    KthLargest(int k, vector<int>& nums) {
        element = k;
        for(int i =0; i<nums.size(); i++){
            if(q.size()==element && q.top()>(-nums[i])){
                q.pop();
                q.push(-nums[i]);
            }
            else if(q.size()<element){
                q.push(-nums[i]);
            }
            
        }
    }

    int add(int val) {

        if(q.size()<element){
            q.push(-val);
        }
        else if(q.size()==element && q.top()>(-val)){
            q.pop();
            q.push(-val);
        }
        return -q.top();
    }
};

