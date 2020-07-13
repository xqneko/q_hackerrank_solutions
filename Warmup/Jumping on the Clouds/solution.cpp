// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c) {
    c.push_back(1);
    int result = 0;
    int num_zeros = 0;
    for(int i=0;i<c.size();i++){
        if(c[i]==0){
            num_zeros++;
        }
        if(c[i]==1){
            result += num_zeros/2+1;
            num_zeros=0;
        }
    }
    return result-1;
}