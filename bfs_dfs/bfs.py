from collections import defaultdict
from queue import Queue


def bfs(start, matrix):
    visited = [False]*(max(matrix)+1)
    que = Queue(n)

    que.put(start)
    visited[start] = True

    while not que.empty():
        start = que.get()
        print(start, end=" ")

        for node in matrix[start]:
            if visited[node] == False:
                que.put(node)
                visited[node] = True

if __name__ == "__main__":
    n = int(input())
    matrix = defaultdict(list)

    for _ in range(1,n+1):
        u, v = map(int, input().split())
        matrix[u].append(v)
        matrix[v].append(u)

    bfs(1, matrix)


