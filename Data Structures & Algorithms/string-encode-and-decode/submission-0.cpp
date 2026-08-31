class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(string word: strs){
            encoded += to_string(word.size())+"#"+word;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string>result;
        int i=0;
        while(i<s.size()){
            int len=0;
            while(s[i]!='#'){
                len= len*10 +(s[i]-'0');
                i++;
            }
            i++;
            string word="";
            for(int j=0; j<len;j++){
                word+=s[i];
                i++;
            }
            result.push_back(word);
        }
        return result;
    }
};
