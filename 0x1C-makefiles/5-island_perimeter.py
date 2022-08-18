#!/usr/bin/python3
""" Island Perimeter """


def island_perimeter(grid):
    """ Island Perimeter """
    peri = 0
    grl = []
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            grl.append(grid[i][j])
    for i in range(len(grl)):
        if i < len(grl) - 1 and i > 0:
            if grl[i] == 0 and grl[i + 1] == 1 or grl[i] == 0 and l[i - 1] == 1:
                peri += 1
    if peri % 2 == 0:
        peri *= 2
    else:
        peri = (peri * 2) - 1
    return peri
