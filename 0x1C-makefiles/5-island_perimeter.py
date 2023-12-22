#!/usr/bin/python3
""" this is module comment """
def island_perimeter(grid):
    """this is a def for the function """
    counter = 0
    for small_list in grid:
        for item in small_list:
            if item == 1:
                counter+=1

    counter+=1
    parameter = counter * 2
    return parameter