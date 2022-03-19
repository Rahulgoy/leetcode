class FreqStack {
    public:
        unordered_map<int,int> frequency;
        unordered_map<int,stack<int>> maxFreqMap;
        int maxFreq=0;
        FreqStack() {

        }

        void push(int val) {
            int freq = frequency[val]+1;
            frequency[val]++;
            maxFreq = max(freq,maxFreq);
            
            maxFreqMap[freq].push(val);
        }

        int pop() {
            int elem = maxFreqMap[maxFreq].top();
            maxFreqMap[maxFreq].pop();
            frequency[elem]--;
            
            if(maxFreqMap[maxFreq].size()==0){
                maxFreq--;
            }
            
            
            return elem;
        }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */