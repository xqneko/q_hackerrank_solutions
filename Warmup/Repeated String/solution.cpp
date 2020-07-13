// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    unordered_map<char,int> a;
    long l=0;
    long result = 0;
    for(auto& c:s){
        a[c]=0;
    }
    for(auto& c:s){
        a[c]++;
    }
    l=n%s.size();
    for(int i=0;i<l;i++){
        if(s[i]=='a'){
            result++;
        }
    }
    return result+a['a']*(n/s.size());
}