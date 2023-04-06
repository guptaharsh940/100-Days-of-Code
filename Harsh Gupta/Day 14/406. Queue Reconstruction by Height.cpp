class Solution {
private:

    void sort(vector<vector<int>>& people){
        for(int i = 0; i<people.size(); i++){
            for(int j = i+1; j<people.size(); j++){
                if(people[i][0]==people[j][0] && people[i][1]>people[j][1])
                {    
                    people.insert(people.begin()+i, 1, people[j]);
                    people.erase(people.begin()+j+1);
                }
                else if(people[i][0]<people[j][0]){
                    people.insert(people.begin()+i, 1, people[j]);
                    people.erase(people.begin()+j+1);
                }
            }
        }
    }
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> ans;
        int temp;
        sort(people);
        for(vector<int> i: people){
           
            ans.insert(ans.begin()+i[1],1,i);
        }
        
        return ans;
    }
};
