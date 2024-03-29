class Solution {
public:
    int romanToInt(string s) {
//         unordered_map<char,int> mp;
//         mp['I']=1;
//         mp['V']=5;
//         mp['X']=10;
//         mp['L']=50;
//         mp['C']=100;
//         mp['D']=500;
//         mp['M']=1000;
        
//         if(s.length()==1) return mp[s[0]];
        
//         int sum=0,i=0;
//         bool first=false,second=false;
//         for(i=0;i<s.length()-1;i++){
//             if(mp[s[i]]<mp[s[i+1]]){
//                 sum+=mp[s[i+1]]-mp[s[i]];
//                 i++;
//                 first=true;
//                 second=false;
//             }else{
//                 sum+=mp[s[i]];
//                 first=false;
//                 second=true;
//             }
            
//         }
//         if(second) sum+=mp[s[s.length()-1]];
//         if(first and i!=s.length()) sum+=mp[s[s.length()-1]];
//         return sum;
        
        
        unordered_map<char, int> T = { { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };
                                   
           int sum = T[s.back()];
           for (int i = s.length() - 2; i >= 0; --i) 
           {
               if (T[s[i]] < T[s[i + 1]])
               {
                   sum -= T[s[i]];
               }
               else
               {
                   sum += T[s[i]];
               }
           }

           return sum;
    }
};