
# Time complexity is : O(n)

def isPossessed(i, names):
    return "YES" if names[i] in names[:i] else "NO"



if __name__ == "__main__":
    
    n = int(input().strip())

    names = []
    for i in range(n):
        names.append(input().strip())

    for i in range(n):
        res = isPossessed(i, names)
        print(res)