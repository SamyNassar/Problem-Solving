n, m = map(int, input().split())
x, y = map(int, input().split())
k = int(input())
vectors = []
for i in range(k):
    dx, dy = map(int, input().split())
    vectors.append([dx, dy])

no_of_steps = 0

for vector in vectors:
    temp = []
    
    if(vector[0] != 0):
        if(vector[0] > 0):
            temp.append((n-x) // vector[0])
        else:
            temp.append((1-x) // vector[0])
        
    if(vector[1] != 0):
        if(vector[1] > 0):
            temp.append((m-y) // vector[1])
        else:
            temp.append((1-y) // vector[1])
    
    current_steps = min(temp)
    no_of_steps += current_steps
    x += current_steps*vector[0]
    y += current_steps*vector[1]


print(no_of_steps)
    


