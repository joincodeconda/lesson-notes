# CIRCLE OR SQUARE???

# Given the radius of a circle and the area of a square, return True if the
# circumference of the circle is greater than the square's perimeter and False
# if the square's perimeter is greater than the circumference of the circle.

# 1. Understand the problem

# PI * 2 * radius = circum. of circle
# 4 * SQUARE_ROOT(area) = perim. of square

# 2. Example inputs and output

# INPUTS: 2, 9
# OUTPUT: True

# INPUTS: 16, 625
# OUTPUT: True

# INPUTS: 5, 100
# OUTPUT: False

# 3. Write instructions to solve the problem

# Calculate the circum. of circle using radius. Calculate the circum. of square
# using area. Compare the two, and return True if circum. of circle is larger,
# false otherwise.

# 4. Write pseudocode

# circle circumference = math.PI * 2 * radius
# square circumference = math.SQUARE_ROOT(area) * 4
# if circle circumference > square circumference:
#    return True
# else:
#    return False

# 5. Convert to actual code

import math

def circle_or_square(circle_radius, square_area):
    circle_circum = math.pi * 2 * circle_radius
    square_circum = math.sqrt(square_area) * 4
    if circle_circum > square_circum:
        return True
    else:
        return False

print(circle_or_square(2, 9))
print(circle_or_square(16, 625))
print(circle_or_square(5, 100))