class BrowserHistory {
public:
    vector<string> str;
    int pos;
    BrowserHistory(string homepage) {
        str.push_back(homepage);
        pos=0;
    }
    
    void visit(string url) {
        str.resize(pos + 1);
        str.push_back(url);
        pos++;
    }
    
    string back(int steps) {
        int prev= max(0,pos-steps);
        pos=prev;
       return str[pos];
        
    }
    
    string forward(int steps) {
        int next = min((int)str.size()-1,pos+steps);
        pos=next;
        return str[pos];
        
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */