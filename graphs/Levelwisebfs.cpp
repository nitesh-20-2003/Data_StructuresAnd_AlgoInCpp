 while (!q.empty()) {
            int level_size = q.size();
            dist++;
            for (int k = 0; k < level_size; ++k) {
                auto [r, c] = q.front();
                q.pop();

                for (int i = 0; i < 4; ++i) {
                    int nr = r + row_diff[i];
                    int nc = c + col_diff[i];

                    if (nr >= 0 && nr < n && nc >= 0 && nc < n && dist_to_thief[nr][nc] == -1) {
                        dist_to_thief[nr][nc] = dist;
                        q.push({nr, nc});
                    }
                }
            }
        }