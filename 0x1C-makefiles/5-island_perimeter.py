#!/usr/bin/python3
""" Island Perimeter """


def island_perimeter(grid):
    """ Island Perimeter """
    peri = 0
    grid_list = []
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            grid_list.append(grid[i][j])
    for i in range(len(grid_list)):
        if i < len(grid_list) - 1 and i > 0:
            if grid_list[i] == 0 and grid_list[i + 1] == 1 or grid_list[i] == 0 and l[i - 1] == 1:
                peri += 1
    if peri % 2 == 0:
        peri *= 2
    else:
        peri = (peri * 2) - 1
    return peri
