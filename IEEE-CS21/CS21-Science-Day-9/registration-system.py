
# Time complexity is : O(n)

if __name__ == "__main__":
    
    n = int(input())

    d = {}
    for i in range(0, n):
        s = input()
        
        if s in d:
            print(s+str(d[s]))
            d[s] += 1
        else:
            print("OK")
            d[s] = 1