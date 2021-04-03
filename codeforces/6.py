import sys

if __name__ == "__main__":
    nma = sys.stdin.readline()
    n, m = map(int, nma.split())
    
    mid = n//2
    if n%2 != 0:
        mid+=1
    if m <= mid:
        sys.stdout.write(str((2*m)-1))
    else:
        sys.stdout.write(str((m-mid)*2))