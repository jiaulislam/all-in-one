import sys

if __name__ == "__main__":
    abc = []
    for _ in range(3):
        abc.append(int(input()))

    abc.sort()
    if ((abc[2]*abc[1]) + abc[0]) > ((abc[0]+abc[1])*abc[2]):
        sys.stdout.write(str((abc[-1]*abc[-2]) + abc[0]))
    else:
        sys.stdout.write(str((abc[0]+abc[1])*abc[2]))
    