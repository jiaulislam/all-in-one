import sys

if __name__ == "__main__":
    nma = sys.stdin.readline()
    n, m= map(int, nma.split())
    sys.stdout.write(str(n*m//2))
