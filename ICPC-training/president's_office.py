n, m, c = input().split()

row = int(n)
column = int(m)

office_room_matrix = []
president_office_index = []
deputies = set()

for i in range(row):
    temp_row = list(input())
    for j in range(column):
        if temp_row[j] == c:
            president_office_index.append([i,j])
    office_room_matrix.append(temp_row)

for x, y in president_office_index:
    if x-1 >= 0 and office_room_matrix[x-1][y] != '.' and office_room_matrix[x-1][y] != c:
        deputies.add(office_room_matrix[x-1][y])

    if x+1 < row and office_room_matrix[x+1][y] != '.' and office_room_matrix[x+1][y] != c:
        deputies.add(office_room_matrix[x+1][y])

    if y-1 >= 0 and office_room_matrix[x][y-1] != '.' and office_room_matrix[x][y-1] != c:
        deputies.add(office_room_matrix[x][y-1])

    if y+1 < column and office_room_matrix[x][y+1] != '.' and office_room_matrix[x][y+1] != c:
        deputies.add(office_room_matrix[x][y+1])

    
print(len(deputies))

