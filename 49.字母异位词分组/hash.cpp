class Solution {
	public:
		vector<vector<string>> groupAnagrams(vector<string> &strs) {
			int n = strs.size();
			unordered_map<string, vector<string>>mp;
			//����strs
			for (int i = 0; i < n; i++) {
				//����unordered�еļ���string��
				string str = strs[i];
				sort(str.begin(), str.end());
				//�Ѷ�Ӧ��strs[i]�Ž� ֵvector<string>��
				mp[str].push_back(strs[i]);
			}
			vector<vector<string>>res;
			for (auto it = mp.begin(); it != mp.end(); it++) {
				res.push_back(it->second);
			}
			return res;
		}
};