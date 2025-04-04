class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
       int n = A.size();
       if (n == 1) return A[0];

       int st = 0, end = n - 1;
       while (st < end) {
            int mid = st + (end - st) / 2;

        
            if (mid % 2 == 0) {
                if (A[mid] == A[mid + 1]) {
                    st = mid + 2;
                } else {
                    end = mid;
            }
            } else {
                if (A[mid] == A[mid - 1]) {
                    st = mid + 1;
                } else {
                    end = mid;
            }
        }
    }
    return A[st];

    }
    
};