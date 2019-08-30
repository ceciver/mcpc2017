#include <iostream>
#include <map>
#include <math.h>
int main() {
    int T;
    std::cin>>T;
    while (T--) {
        std::string s1, s2;
        std::cin>>s1>>s2;
        std::map<char, int> hashTable;
        for(char c : s2)
            hashTable[c]++;
        int left=0,right=0,min= INT_MAX, count = 0;
        for (right = 0; right < s1.length(); right++) {
            if (--hashTable[s1[right]] >= 0) {
                count++;
            }
            while (count == s2.length()) {
                if (min > right - left + 1) {
                    min = right - left + 1;
                }
                if (++hashTable[s1[left]] > 0) {
                    --count;
                }
                ++left;
            }
        }
        std::cout<<(min != INT_MAX ? min : -1);
    }
    
    
    

    
    return 0;
}
//QED!
