import sys

if __name__ == "__main__":
    nm = sys.stdin.readline()
    n, m = map(int, nm.split())
    matrix = [False]*n
    print(matrix)

    for _ in range(1, m+1):
        a,b = map(int, input().split())
        matrix[a][b] = True
        matrix[b][a] = True
    
    query = int(input())

    for _ in range(query):
        a,b = map(int, input().split())
        if matrix[a][b] == True:
            print("YES")
        else:
            print("NO")
