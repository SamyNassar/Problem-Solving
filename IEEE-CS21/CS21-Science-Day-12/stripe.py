
# Time complexity is : O(n)     Where n is : num_of_squares.

def get_all_ways_to_cut_stripe(num_of_squares, squares):
    num_of_ways = 0
    left_summation_squares = [0] * num_of_squares
    right_summation_squares = [0] * num_of_squares

    for left_index in range(num_of_squares):
        right_index = -(left_index+1)
        
        if left_index == 0:
            left_summation_squares[left_index] = squares[left_index]
            right_summation_squares[right_index] = squares[right_index]
            continue
        
        left_summation = squares[left_index] + left_summation_squares[left_index - 1]
        right_summation = squares[right_index] + right_summation_squares[right_index + 1]

        left_summation_squares[left_index] = left_summation
        right_summation_squares[right_index] = right_summation


    for i in range(num_of_squares - 1):
        current_left_summation = left_summation_squares[i]
        current_right_summation = right_summation_squares[i + 1]

        if current_left_summation == current_right_summation:
            num_of_ways += 1

    return num_of_ways
    


if __name__ == "__main__":
    
    num_of_squares = int(input())
    squares = input().strip().split()

    for i in range(num_of_squares):
        squares[i] = int(squares[i])

    res = get_all_ways_to_cut_stripe(num_of_squares, squares)

    print(res)