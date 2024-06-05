#!/usr/bin/python3
"""Defines function island_perimeter(grid) that calculates the perimeter of an island"""

def island_perimeter(grid):
    """Calculate the perimeter of the island described in grid

    Args:
        grid (list of list of int): A 2D list representing the grid,
                                    where 0 represents water and 1 represents land.

    Returns:
        int: The perimeter of the island defined in grid.
    """

    width = len(grid)
    height = len(grid[0])
    perimeter = 0

    for i in range(width):
        for j in range(height):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == width - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == height - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
