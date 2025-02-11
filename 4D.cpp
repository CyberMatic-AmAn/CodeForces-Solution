#include<bits/stdc++.h>
using namespace std;

struct Envelope {
    int width, height, index;
};

int main() {
    int n, w, h;
    cin >> n >> w >> h;
    
    vector<Envelope> envelopes;
    
    for (int i = 0; i < n; i++) {
        int wi, hi;
        cin >> wi >> hi;
        if (wi > w && hi > h) {
            envelopes.push_back({wi, hi, i + 1}); 
        }
    }
    if (envelopes.empty()) {
        cout << "0" << endl;
        return 0;
    }

    sort(envelopes.begin(), envelopes.end(), [](const Envelope &a, const Envelope &b) {
        return (a.width < b.width) || (a.width == b.width && a.height < b.height);
    });

    int m = envelopes.size();
    vector<int> dp(m, 1), parent(m, -1);
    int max_length = 1, last_index = 0;

    // Find LIS based on height
    for (int i = 1; i < m; i++) {
        for (int j = 0; j < i; j++) {
            if (envelopes[j].width < envelopes[i].width && envelopes[j].height < envelopes[i].height) {
                if (dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1;
                    parent[i] = j;
                }
            }
        }
        if (dp[i] > max_length) {
            max_length = dp[i];
            last_index = i;
        }
    }

  
    vector<int> result;
    for (int i = last_index; i != -1; i = parent[i]) {
        result.push_back(envelopes[i].index);
    }

    cout << max_length << endl;
    reverse(result.begin(), result.end());
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
