MAX_BOUNDRY = 200002

num_of_recipes, admision, num_of_question = map(int, input().split())

interval = [0] * MAX_BOUNDRY
optimal = [0] * MAX_BOUNDRY

recipes = []
questions = []

for i in range(num_of_recipes):
    recipes.append(list(map(int, input().split())))

for i in range(num_of_question):
    questions.append(list(map(int, input().split())))

for i in range(num_of_recipes):
    interval[recipes[i][0]] += 1
    interval[recipes[i][1]+1] -= 1


for i in range(MAX_BOUNDRY):
    if i == 0:
        optimal[i] = interval[i]
        continue

    optimal[i] = interval[i] + optimal[i-1]


for i in range(MAX_BOUNDRY):
    if optimal[i] >= admision:
        optimal[i] = 1
    else:
        optimal[i] = 0

for i in range(1, MAX_BOUNDRY):
    optimal[i] += optimal[i-1]

for question in questions:
    res = optimal[question[1]] - optimal[question[0] - 1]
    print(res)

