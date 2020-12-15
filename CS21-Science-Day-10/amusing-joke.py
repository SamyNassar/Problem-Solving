"""
PROBLEM LINK : https://codeforces.com/problemset/problem/141/A
"""
# Time complexity is : O(n)

def check_letters(guest, host, letters):

    if len(guest) + len(host) != len(letters):
        return False


    ENGLISH_LETTERS = 26
    alpha = [0] * ENGLISH_LETTERS

    for letter in letters:
        alpha[ord(letter) - ord('A')] += 1

    for letter in guest:
        alpha[ord(letter) - ord('A')] -= 1
    
    for letter in host:
        alpha[ord(letter) - ord('A')] -= 1

    for i in alpha:
        if i != 0:
            return False

    return True


if __name__ == "__main__":
    guest = input().strip()
    host = input().strip()
    letters = input().strip()

    result = check_letters(guest, host, letters)

    if result:
        print("YES")
    else:
        print("NO")