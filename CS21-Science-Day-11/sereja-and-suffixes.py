
# Time complexity is : O(n)


def numOfDistinctNumber(n, m, source_nums, biggest_source_num, test_nums):

    apperance_nums = [0] * biggest_source_num
    counter = [0] * n


    for i in range(-1, -n-1, -1):
        current_num = source_nums[i]
        
        if i == -1:
            apperance_nums[current_num-1] = 1
            counter[i] += 1
            continue
        
        if apperance_nums[current_num-1] == 0:
            apperance_nums[current_num-1] = 1
            counter[i] = counter[i+1] + 1
        else:
            counter[i] = counter[i+1]
    
    for num in test_nums:
        print(counter[num-1])



if __name__ == "__main__":
    
    boundry = input().strip().split()
    n = int(boundry[0])
    m = int(boundry[1])

    source_nums = input().strip().split()
    test_nums = []
    biggest_source_num = 0

    for i in range(len(source_nums)):
        current_num = int(source_nums[i])
        source_nums[i] = current_num
        if current_num > biggest_source_num:
            biggest_source_num = current_num

    for i in range(m):
        test_nums.append(int(input().strip()))

    numOfDistinctNumber(n, m, source_nums, biggest_source_num, test_nums)






