# input: 4,5
import os
import math

os.system("cls")


coordinate_1 = input("Enter First Coordinates : ")
coordinate_2 = input("Enter Second Coordinates : ")

point_A = coordinate_1.split(",")
point_B = coordinate_2.split(",")

x1 = float(point_A[0])
y1 = float(point_A[1])
x2 = float(point_B[0])
y2 = float(point_B[1])

distance = math.sqrt(((x2-x1)**2) + ((y2-y1)**2))
print("The distance between two points is : ", distance, " units")