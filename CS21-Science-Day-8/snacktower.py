
# Time complexity is : O(n)


def placeSnacks(n, snacks):
    availableSnacks = [None] * n

    for snack in snacks:
        availableSnacks[int(snack)-1] = snack

        while availableSnacks[n-1] and n != 0:
            print("{n}".format(n=n), end=" ")
            n -= 1
        print("")


if __name__ == "__main__":

    n = int(input().strip())
    snacks = input().strip().split()

    placeSnacks(n, snacks)