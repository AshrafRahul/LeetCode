class Solution {

private:
    bool isVowel(char c){
        c = tolower(c);
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }

public:
    string reverseVowels(string s) {
        int i=0;
        int j=s.length()-1;

        while(i<j){
            while(i<j && !isVowel(s[i])){
                i++;
            }
            while(i<j && !isVowel(s[j])){
                j--;
            }
            swap(s[i++], s[j--]);
        }
        return s;
    }
};