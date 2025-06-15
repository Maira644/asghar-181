class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3) return false;

    for(int i=0; i<arr.size()-1; i++){
        if(arr[i] == arr[i+1]){
            return false;
        }
    }

    int st = 1, end = arr.size()-2;
    int peak = -1;
    while(st <= end){
        int mid = st + (end - st) / 2;

        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
            peak = mid;
            break;
        }else if(arr[mid-1] < arr[mid]){
            st = mid+1;
        }else{
            end = mid-1;
        }
    }
    if(peak == -1) return false;

    for(int i=0; i<peak; i++){
        if(arr[i] >= arr[i+1]) return false;
    }
    for(int i=peak; i<arr.size()-1; i++){
        if(arr[i] <= arr[i+1]) return false;
    }
    return true;
        
    }
};