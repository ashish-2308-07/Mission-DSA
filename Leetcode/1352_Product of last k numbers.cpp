class ProductOfNumbers {
public:
    vector<int> prefix;
    ProductOfNumbers(){
        
    }
    
    void add(int num) {
        if (num == 0){
            prefix.clear();
        } else {
            if (prefix.empty())
            prefix.push_back(num);
            else 
            prefix.push_back(prefix.back() *num);
        }
    }
int getProduct(int k){
    if (k> prefix.size()) return 0;
    if (k==prefix.size()) return prefix.back();
    return prefix.back() / prefix[prefix.size() -k -1];
    }
};
