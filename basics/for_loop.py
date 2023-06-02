import os

os.system("cls")

val = range(11, 17, 1)
for num in val:
    print("The current number is: ", num)
    if num == 11:
        print("and the previous number was: None\n")
    else:
        print("and the previous number was: ", num - 1, "\n")
