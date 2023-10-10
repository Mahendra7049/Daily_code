string longestCommonPrefix(vector<string>& s) {
        sort(s.begin(),s.end());
        string ans="";
        string first=s[0];
        string last=s[s.size()-1];
        int minto=min(first.size(),last.size());
        for(int i=0;i<minto;i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans=ans+first[i];
        }
        return ans;
    }
