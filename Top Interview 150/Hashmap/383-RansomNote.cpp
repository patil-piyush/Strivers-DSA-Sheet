class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int rn = ransomNote.size();
        int mn = magazine.size();
        int freq[26];
        for(int i=0; i<mn; i++) freq[magazine[i] - 'a']++;

        for(int i=0; i<rn; i++){
            if(magazine.contains(ransomNote[i]) && freq[ransomNote[i] - 'a'] > 0){
                freq[ransomNote[i]-'a']--;
            }
            else return false;
        } 
        return true;
    }
};