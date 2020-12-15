"""
PROBLEM LINK : https://codeforces.com/problemset/problem/520/A
"""
# Time complexity is : O(n)


def isPangram(numberOfletters, word):

    ENGLISH_LETTERS = 26

    if numberOfletters < ENGLISH_LETTERS:
        return False


    charApperance = [0] * ENGLISH_LETTERS

    for letter in word:
        if charApperance[ord(letter) - ord('a')] == 0:
            charApperance[ord(letter) - ord('a')] = 1

    if 0 in charApperance:
        return False
    else:
        return True


if __name__ == "__main__":
    numberOfletters = int(input().strip())
    word = input().strip().lower()

    result = isPangram(numberOfletters, word)

    if result:
        print("YES")
    else:
        print("NO")