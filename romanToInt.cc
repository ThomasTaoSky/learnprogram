class Solution {
public:
	int romanToInt(string s) 
	{
		int answer = 0;
		for (int i = 0; i < s.size(); i++)
		{
			answer = answer * 10 + s[i] - '0';
		}
		return answer;
	}
};
