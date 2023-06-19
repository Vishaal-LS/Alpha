

input_string = "Sail*Boats*are*awesome"
separator = '*'

sentence = []

# Start of loop
length = len(input_string)

word = ""
index = 0 # Starting value

while index < length:

    if input_string[index] == separator:

        sentence.append(word)
        word = ""

    else:
        word += input_string[index]

        if index == length - 1:
            sentence.append(word)
            word = ""

    
    index += 1
    


import os
os.system("cls")
print()

print()

print(input_string.split(separator))