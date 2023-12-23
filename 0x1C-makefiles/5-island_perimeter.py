#!/usr/bin/python3
""" this is module comment """


def island_perimeter(grid):
    """this is a def for the function"""
    counter = 0
    grid_length = len(grid) - 1  # Corrected variable name
    grid_width = len(grid[0]) - 1

    for index, sublist in enumerate(grid):
        for l_index, element in enumerate(sublist):
            if element == 1:
                # top ele
                if index == 0 or grid[index - 1][l_index] != 1:
                    counter += 1

                # bottom ele
                if index == grid_length or grid[index + 1][l_index] != 1:
                    counter += 1

                # left ele
                if l_index == 0 or grid[index][l_index - 1] != 1:
                    counter += 1

                # right ele
                if l_index == grid_width or grid[index][l_index + 1] != 1:
                    counter += 1

    return counter
