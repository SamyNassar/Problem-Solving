no_of_operations, no_of_packs = map(int, input().split())
distressed_kids = 0
for i in range(no_of_operations):
    temp = input().split()
    operation, packs_quantity = temp[0], int(temp[1])
    if(operation == '+'):
        no_of_packs += packs_quantity
    else:
        if(packs_quantity > no_of_packs):
            distressed_kids += 1
        else:
            no_of_packs -= packs_quantity
print(no_of_packs, distressed_kids)