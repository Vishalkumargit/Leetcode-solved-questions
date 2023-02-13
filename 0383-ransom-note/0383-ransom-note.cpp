class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
   
        
    bool flag=true;
    map<char,int> rmap,mmap;
    for(auto i:ransomNote)rmap[i]++;
    for(auto j:magazine)mmap[j]++;
    
    for(auto i:rmap){
    if(rmap[i.first]>mmap[i.first])
        flag=false;
        }
        return flag;
    }
};