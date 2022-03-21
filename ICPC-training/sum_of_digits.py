n = int(input())
transformations_conter = 0

while(n > 9):
    n = sum([int(x) for x in str(n)])
    transformations_conter += 1

print(transformations_conter)