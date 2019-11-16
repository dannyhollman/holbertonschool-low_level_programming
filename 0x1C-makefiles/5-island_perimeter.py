#!/usr/bin/python3
""" finds perimeter of island from grid """


def island_perimeter(grid):
    """ finds island perimeter """
    perim = 0
    for row in range(len(grid)):
        for cell in range(len(grid[row])):
            if grid[row][cell] == 1:
                # check cell above
                if row == 0:
                    perim += 1
                else:
                    if grid[row - 1][cell] == 0:
                        perim += 1
                # check cell before
                if cell == 0:
                    perim += 1
                else:
                    if grid[row][cell - 1] == 0:
                        perim += 1
                # check cell below
                if row == len(grid) - 1:
                    perim += 1
                else:
                    if grid[row + 1][cell] == 0:
                        perim += 1
                # check cell after
                if cell == len(grid[row]) - 1:
                    perim += 1
                else:
                    if grid[row][cell + 1] == 0:
                        perim += 1
    return perim
