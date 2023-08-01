class Solution {
	public:
		vector<vector<string>> groupAnagrams(vector<string> &strs) {
			int n = strs.size();
			unordered_map<string, vector<string>>mp;
			//遍历strs
			for (int i = 0; i < n; i++) {
				//构建unordered中的键‘string’
				string str = strs[i];
				sort(str.begin(), str.end());
				//把对应的strs[i]放进 值vector<string>中
				mp[str].push_back(strs[i]);
			}
			vector<vector<string>>res;
			for (auto it = mp.begin(); it != mp.end(); it++) {
				res.push_back(it->second);
			}
			return res;
		}
};