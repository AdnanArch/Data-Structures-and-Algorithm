class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
      
      vector<vector<int>>res;
      sort(arr.begin(),arr.end());
      for(int i=0;i<arr.size()-2;i++)
      {
        if(i!=0 && arr[i]==arr[i-1])
          continue;
        else
        {
           int sum = -arr[i];
           int j = i+1;
           int k = arr.size()-1;
           while(j<k)
           {
             if(arr[j]+arr[k]==sum)
             {
               res.push_back({arr[i],arr[j],arr[k]});
               while(j<k && arr[j]==arr[j+1])
                  j++;
               while(j<k && arr[k]==arr[k-1])
                  k--;
               j++;
               k--;
    
             }
             else if(arr[j]+arr[k]>sum)
                 k--;
             else
               j++;
           }
        }
      }
      return res;
    }
};
