class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int, vector<int>> st;
        for(int asteroid:asteroids){
            if(st.empty()) st.push(asteroid);
            else if (st.top()>0 && asteroid>0) st.push(asteroid);
            else if (st.top()<0) st.push(asteroid);
            else{
                if(st.top() > abs(asteroid)) continue;
                else if(st.top() == abs(asteroid)) st.pop();
                else{
                    while(!st.empty() && st.top()>0 && st.top()<abs(asteroid)) st.pop();
                    if(st.empty()) st.push(asteroid);
                    else if(st.top()<0) st.push(asteroid);
                    else if(st.top() == abs(asteroid)) st.pop();
                    else continue;
                }
                
            }
        }

        int k = st.size() - 1;
        vector<int> remaining(k+1);

        while(!st.empty()){
            remaining[k] = st.top();
            st.pop();
            k--;
        }
        
        return remaining;

    }
};
