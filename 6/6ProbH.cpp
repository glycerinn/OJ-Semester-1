#include <stdio.h>

int dx[8] = { 2, 2, -2, -2, 1, -1, 1, -1 };
int dy[8] = { 1, -1, 1, -1, 2, 2, -2, -2 };

int visited[8][8];

int bfs(int sx, int sy, int ex, int ey) {
    int qx[100], qy[100], qs[100];
    int front = 0, rear = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            visited[i][j] = 0;
        }
    }

    qx[rear] = sx;
    qy[rear] = sy;
    qs[rear] = 0;
    rear++;

    visited[sx][sy] = 1;

    while (front < rear) {
        int x = qx[front];
        int y = qy[front];
        int step = qs[front];
        front++;

        if (x == ex && y == ey)
            return step;

        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < 8 && ny >= 0 && ny < 8 && !visited[nx][ny]) {
                visited[nx][ny] = 1;
                qx[rear] = nx;
                qy[rear] = ny;
                qs[rear] = step + 1;
                rear++;
            }
        }
    }

    return -1;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++) {
        char start[3], end[3];
        scanf("%s %s", start, end);

        int x1 = start[0] - 'A';
        int y1 = start[1] - '1';
        int x2 = end[0] - 'A';
        int y2 = end[1] - '1';

        int result = bfs(x1, y1, x2, y2);

        printf("Case #%d: %d\n", tc, result);
    }

    return 0;
}

