#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

vector<int> collidingAsteroids(vector<int>& asteroids) {
    vector<int> ans;
    stack<int> st;

    int n = asteroids.size();

    for (int i = 0; i < n; i++) {
        int a = asteroids[i];

        if (a > 0) {
            st.push(a);
        } else {
            while (!st.empty() && st.top() > 0 && st.top() < abs(a)) {
                st.pop();
            }

            if (st.empty() || st.top() < 0 || st.top() < abs(a)) {
                st.push(a);
            } else if (st.top() == abs(a)) {
                st.pop();
            }
        }
    }

    while (!st.empty()) {
        ans.insert(ans.begin(), st.top());
        st.pop();
    }

    return ans;
}
