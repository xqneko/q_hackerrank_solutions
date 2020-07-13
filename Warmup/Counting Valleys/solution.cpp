// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int result = 0;
    int last_height = 0;
    int curr_height = 0;
    for (auto& c:s){
        if(c == 'U'){
            curr_height++;
        }else{
            curr_height--;
        }
        if(curr_height==0 && last_height<curr_height){
            result++;
        }
        last_height=curr_height;
    }
    return result;

}