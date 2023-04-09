class Solution {
private:
    int ans = INT_MAX;
    void solve(int index, vector<int> cookies, vector<int>&a){
        cout<<"IN LAST"<<endl;
        if(index == cookies.size()){
            int m = INT_MIN;
            for(int i = 0; i<a.size(); i++){
                cout<<a[i]<<" ";
                if(m<a[i]){
                    m = a[i];
                }
            }
            if(ans>m){
                ans = m;
            }
            cout<<endl<<ans<<endl;
            return;
        }
        for(int i = 0; i<a.size(); i++){
            a[i]+=cookies[index];
            solve(index+1,cookies,a);
            a[i]-=cookies[index];
            if(a[i]==0) break;
        }
    }
public:
    int distributeCookies(vector<int>& cookies, int k) {
        if(k==cookies.size()){
            int m = INT_MIN;
            for(int i : cookies){
                if(m<i){
                    m=i;
                }
            }
            return m;
        }
        vector<int> a(k,0);
        solve(0,cookies,a);
        return ans;
    }
};
