#!/usr/bin/python3
"""Defines an island perimeter measuring function."""
def island_perimeter(grid):
    """Return the perimiter of the island

    Args:
        grid (list): A list of list of integers
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for a in range(height):
        for b in range(width):
            if grid[a][j] == 1:
                size += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    edges += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    edges += 1
    return size * 4 - edges * 2
