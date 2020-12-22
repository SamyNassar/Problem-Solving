

def check_opend_doors(num_of_guests, num_of_guards, guests_entrance):

    NUM_OF_ALL_ENTRANCE = 26
    last_guest_arival = [0] * NUM_OF_ALL_ENTRANCE
    for i in range(-1, -num_of_guests-1, -1):

        current_entrance = ord(guests_entrance[i]) - ord('A')
        if not last_guest_arival[current_entrance]:
            last_guest_arival[current_entrance] = num_of_guests + i

    opend_entrance = [0] * NUM_OF_ALL_ENTRANCE  
    for i in range(num_of_guests):

        current_entrance = guests_entrance[i]
        current_opend_entrance_index = ord(current_entrance) - ord('A')

        if i == 0 or opend_entrance[current_opend_entrance_index] == 0:
            num_of_guards -= 1
            opend_entrance[current_opend_entrance_index] = 1
        
        if num_of_guards < 0:
            return True

        if i == last_guest_arival[current_opend_entrance_index]:
            num_of_guards += 1
            opend_entrance[current_opend_entrance_index] = 0  

    return False






if __name__ == "__main__":
    
    guests_and_guards = input().strip().split()

    num_of_guests = int(guests_and_guards[0])
    num_of_guards = int(guests_and_guards[1])

    guests_entrance = input().strip()

    if check_opend_doors(num_of_guests, num_of_guards, guests_entrance):
        print("YES")
    else:
        print("NO")


    