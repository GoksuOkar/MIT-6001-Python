import math

def polysum(n, s):
    """
   This function takes n, number of sides
   and s, length of each side and returns
   the sum of the area and square of the perimeter.

    """
    area = (0.25*n*(s**2))/math.tan(math.pi/n)
    perimeter = n*s
    Sum = area + (perimeter**2)
    return round(Sum, 4)
    
