import sys

if __name__ == "__main__":
    coordinates = []
    for _ in range(int(input())):
        nmk = sys.stdin.readline()
        coordinates.append(list(map(int, nmk.split())))
    
    for prods in zip(*coordinates):
        if sum(prods) != 0:
            sys.stdout.write("NO")
            break
    else:
        sys.stdout.write("YES")