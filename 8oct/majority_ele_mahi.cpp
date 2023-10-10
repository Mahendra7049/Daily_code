vector<int> majorityElement(vector<int>& nums) {
        map<int,int> m;
        int n=nums.size();

        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            if(i.second>n/3){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
