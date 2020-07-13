// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d) {
    vector<int> b(a);
    for(int i=0;i<d;i++){
        int t=b[0];
        b.erase(b.begin());
        b.push_back(t);
    }
    return b;
}