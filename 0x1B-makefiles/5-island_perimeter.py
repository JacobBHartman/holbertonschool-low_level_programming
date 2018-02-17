#!/usr/bin/python3

def island_perimeter(grid):
    perimeter = 0
    height = len(grid)
    width = len(grid[0])
    for y in range(len(grid)):
        for x in range(len(grid[0])):
            if grid[y][x] == 1:
                if x != 0:
                    perimeter += 1 - grid[y][x-1]
                else:
                    perimeter += 1

                if y != 0:
                    perimeter += 1 - grid[y-1][x]
                else:
                    perimeter += 1

                if x != width - 1:
                    perimeter += 1 - grid[y][x+1]
                else:
                    perimeter += 1

                if y != height - 1:
                    perimeter += 1 - grid[y+1][x]
                else:
                    perimeter += 1

    return perimeter
