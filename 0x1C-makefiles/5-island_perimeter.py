#!/usr/bin/python3
""" finds perimeter of island from grid """

def island_perimeter(grid):
    """ finds island perimeter """
    perim = 0
    for row in range(1, len(grid) - 1):
        for cell in range(1, len(grid[row]) - 1):
            if grid[row][cell] == 1:
                # check cell above
                if grid[row - 1][cell] == 0:
                    perim += 1
                # check cell before
                if grid[row][cell - 1] == 0:
                    perim += 1
                # check cell below
                if grid[row + 1][cell] == 0:
                    perim += 1
                # check cell after
                if grid[row][cell + 1] == 0:
                    perim += 1
                    break
    return perim
