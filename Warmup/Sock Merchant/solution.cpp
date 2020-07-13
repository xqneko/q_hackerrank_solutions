// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) {
    int result = 0;
    unordered_map<int,int> a;
    for(auto& i:ar){
        a[i] = 0;
    }
    for(auto& i:ar){
        a[i]++;
    }
    for(auto& [key, value]:a){
        result += (int)value/2;
    }
    return result;
}