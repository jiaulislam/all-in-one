import sys

if __name__ == "__main__":
    nma = sys.stdin.readline()
    n, m, a = map(int, nma.split())

    # Arithmetic progression
    # Ref: https://en.wikipedia.org/wiki/Arithmetic_progression
    total = (a * (n + (n*a)))//2
    
    if total > m:
        sys.stdout.write(str(total-m))
    else:
        sys.stdout.write(str(0))
