# We have given three square areas. Check if we can create a right triangle if we put them together. One side of a square should be one side of a triangle. To solve the problem 
#we use the Pythagoras' theorem which is a relation among the three sides of a right triangle.


import math

def pythagoras():

 area_1 = 9
 area_2 = 16
 area_3 = 25 
 #square roots of these numbers is pythagorean triple  
   

 side_a = math.sqrt(area_1)
 side_b = math.sqrt(area_2)
 side_c = math.sqrt(area_3)

 if((side_a * side_a + side_b * side_b) == (side_c * side_c) or (side_a * side_a + side_c * side_c) == (side_b * side_b) or (side_b * side_b + side_c * side_c) == (side_a * side_a)): 
    print("yes")

 else:
    print("no")

pythagoras()
