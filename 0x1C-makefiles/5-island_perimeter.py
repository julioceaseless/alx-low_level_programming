#!/usr/bin/python3
"""
determines the perimeter of an island described in grid
"""


def island_perimeter(grid):
    """find perimeter"""
    per = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            # print("[{}][{}] = {}".format(row, col, [row][col]))
            if grid[row][col]:
                # check if island
                if row == 0 or row == 4 or col == 0 or col == 5:
                    return f"this is not an island"

                # find island boundaries
                if grid[row - 1][col] == 0:
                    per += 1
                if grid[row + 1][col] == 0:
                    per += 1
                if grid[row][col + 1] == 0:
                    per += 1
                if grid[row][col - 1] == 0:
                    per += 1
    return per
