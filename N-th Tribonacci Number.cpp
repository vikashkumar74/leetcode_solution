class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;

    vector<int> vt(n + 1);
    vt[0] = 0;
    vt[1] = 1;
    vt[2] = 1;

    for (int i = 3; i <= n; ++i) {
        vt[i] = vt[i - 1] + vt[i - 2] + vt[i - 3];
    }

    return vt[n];
    }
};
