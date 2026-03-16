class Fancy {
public:
    const long long MOD = 1000000007;
    vector<long long> arr;
    long long mul = 1;
    long long add = 0;

    long long modPow(long long a, long long b) {
        long long res = 1;
        while (b) {
            if (b & 1) res = res * a % MOD;
            a = a * a % MOD;
            b >>= 1;
        }
        return res;
    }

    Fancy() {}

    void append(int val) {
        long long invMul = modPow(mul, MOD - 2);
        long long normalized = ((val - add + MOD) % MOD) * invMul % MOD;
        arr.push_back(normalized);
    }

    void addAll(int inc) {
        add = (add + inc) % MOD;
    }

    void multAll(int m) {
        mul = mul * m % MOD;
        add = add * m % MOD;
    }

    int getIndex(int idx) {
        if (idx >= arr.size()) return -1;
        return (arr[idx] * mul % MOD + add) % MOD;
    }
};