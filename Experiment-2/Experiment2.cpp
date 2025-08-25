class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1;

        long long exp = n;  
        if (exp < 0) {
            return 1.0 / powHelper(x, -exp);
        }
        return powHelper(x, exp);
    }

private:
    double powHelper(double x, long long n) {
        if (n == 0) return 1;

        double half = powHelper(x, n / 2);
        if (n % 2 == 0) {
            return half * half;
        } else {
            return x * half * half;
        }
    }
};
