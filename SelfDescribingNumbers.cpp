#include <iostream>
#include <unordered_map>
int main() {
    int T;
    std::cin>>T;
    while (T--) {
        std::string s;
        std::cin>>s;
        std::unordered_map<char, int> hashTable;
        for (char c : s) {
            hashTable[int(c - '0')]++;
        }
        bool selfD = 1;
        for (int i=0; i<s.length(); i++) {
            if (!(hashTable[i] == (int)(s[i] - '0'))) {
                selfD = 0;
                break;
            }
        }
        std::cout<<(selfD ? "self-describing\n" : "not self-describing\n");
        
    }
    
    
    
    
    
    return 0;
}
//QED!
