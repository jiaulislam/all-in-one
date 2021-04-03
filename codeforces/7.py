import sys
import math
def solve(n:int):
    if n%2==0:
        return n//2
    else:
        mid = math.ceil(n/2)
        even_sum = mid * (mid + 1)
        odd_sum = ((mid * (1+n)//2))
        return odd_sum-even_sum

if __name__ == "__main__":
    n = int(sys.stdin.readline())
    sys.stdout.write(str(solve(n)))
    
