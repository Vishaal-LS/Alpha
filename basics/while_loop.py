import os

# cls to clear terminal screen
os.system("cls")

# Printing current number and it's previous using while loop
num = 11
step = 1
while num <= 16:
    print("The current number is: ", num)
    if num == 11:
        print("and the previous number was: None\n")
    else:
        print("and the previous number was: ", num-1, "\n" )
    num = num + step
