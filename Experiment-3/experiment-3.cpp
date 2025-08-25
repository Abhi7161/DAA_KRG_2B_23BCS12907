class Solution {
public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        unordered_map<int,int> freq;
        for (int num : arr) {
            freq[num]++;
        }
        vector<vector<int>> result;
        for (auto entry : freq) {
            vector<int> temp;
            temp.push_back(entry.first);
            temp.push_back(entry.second);
            result.push_back(temp);
        }

        return result;
    }
};
