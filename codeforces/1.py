import math
import sys

def get_require_tiles(n:int, m:int, a:int):
    return (math.ceil(n/a)) * (math.ceil(m/a))


if __name__ == "__main__":
    nma = sys.stdin.readline()
    n, m, a = map(int, nma.split())
    sys.stdout.write(str(get_require_tiles(n, m, a)))
