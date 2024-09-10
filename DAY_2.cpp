//missing number for contiguous array 


int missingNumber(vector<int>&a, int N) {
    int expected_sum = ( N * (N+1)) / 2;
    int actual_sum = 0;
    for(int i = 0 ;i < N-1 ; i++) {
        actual_sum += a[i];
    }
    int missingNum = expected_sum - actual_sum;
    return missingNum;
}
