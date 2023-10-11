int countSubarraysWithXOR(vector<int> &A, int B) {
    int xor_sum = 0;
    int count = 0;
    unordered_map<int, int> xorCount;

    for (int i = 0; i < A.size(); i++) {
        xor_sum ^= A[i];

        if (xor_sum == B) {
            count++;
        }

        if (xorCount.find(xor_sum ^ B) != xorCount.end()) {
            count += xorCount[xor_sum ^ B];
        }

        xorCount[xor_sum]++;
    }

    return count;
}
