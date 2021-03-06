class Solution {
public:
    int calPoints(vector<string>& ops) {
//         stack<string> st;
        
//         int n = ops.size();
//         for(int i=0;i<n;i++){
//             if(ops[i]=="+"){
//                 int second=stoi(st.top());st.pop();
//                 int first=stoi(st.top());st.pop();
//                 int third=first+second;
//                 st.push(to_string(first));
//                 st.push(to_string(second));
//                 st.push(to_string(third));
//             }else if(ops[i]=="C"){
//                 st.pop();
//             }else if(ops[i]=="D"){
//                 int first = stoi(st.top());st.pop();
//                 int second = first*2;
                
//                 st.push(to_string(first));
//                 st.push(to_string(second));
//             }else{
//                 st.push(ops[i]);
//             }
//         }
//         int sum = 0;
//         while(!st.empty()){
//             sum+=stoi(st.top());
//             st.pop();
//         }
        
//         return sum;
        
        
        // Much clean code
        vector<int> record;
        for (string ch : ops) {
            if (ch == "C")
                record.pop_back();
            else if (ch == "D")
                record.push_back(record.back() * 2);
            else if (ch == "+")
                record.push_back(record.back() + record[record.size() - 2]);
            else
                record.push_back(stoi(ch));
        }
        
        return accumulate(record.begin(), record.end(), 0);
    }
};