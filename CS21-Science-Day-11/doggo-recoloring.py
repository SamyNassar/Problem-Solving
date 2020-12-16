
# Time complexity is : O(n)


def standard(num_of_puppies, colors):

    if num_of_puppies == 1:
        return True

    puppies = [0] * 26      # 26 : is the English letters.

    for i in colors:
        puppies[ord(i) - ord('a')] += 1

    for i in puppies:
        if i >= 2:
            return True

    return False


if __name__ == "__main__":

    num_of_puppies = int(input().strip())
    colors = input().strip().lower()

    if standard(num_of_puppies, colors):
        print("YES")
    else:
        print("NO")
