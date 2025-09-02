#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, j = 0;
        cin >> n >> k;
        vector<int> v(n), freq;
        map<int, int> mp;
 
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }
 
        for (auto it : mp) {
            freq.push_back(it.second);
        }
 
        sort(freq.begin(), freq.end());
 
        for (int i = 0; i < freq.size(); i++) {
            if (freq[i] > k) break;
            j++;
            k -= freq[i];
        }
 
        int temp = freq.size() - j;
        cout << max(1, temp) << endl;
    }
    return 0;
}