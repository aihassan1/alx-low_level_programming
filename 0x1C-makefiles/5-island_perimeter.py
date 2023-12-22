#!/usr/bin/python3

def island_perimeter(grid):
    counter = 0
    for small_list in grid:
        for item in small_list:
            if item == 1:
                counter+=1

    counter+=1
    parameter = counter * 2
    return parameter