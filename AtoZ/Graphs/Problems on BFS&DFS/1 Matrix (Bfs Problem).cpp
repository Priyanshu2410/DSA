vector < vector < int > > nearest(vector < vector < int >> & mat, int n, int m) {
    // Write your code here.
    vector<vector<int>> vis(n, vector<int>(m, 0));
  vector<vector<int>> ans = mat;
  queue<pair<pair<int, int>, int>> q;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (mat[i][j] == 1) {
        q.push({{i, j}, 0});
        vis[i][j] = 1;
      }
    }
  }
  int delta[] = {-1, 0, 1, 0, -1};
  while (!q.empty()) {
    int r = q.front().first.first;
    int c = q.front().first.second;
    int step = q.front().second;
    ans[r][c] = step;
    q.pop();

    for (int i = 0; i < 4; i++) {
      int nr = r + delta[i];
      int nc = c + delta[i + 1];

      if (nr >= 0 && nc >= 0 && nr < n && nc < m && vis[nr][nc] == 0) {
        q.push({{nr, nc}, step + 1});
        vis[nr][nc] = 1;
      }
    }
  }
  return ans;
}