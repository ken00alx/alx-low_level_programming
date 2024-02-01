#!/usr/bin/python3
---
S-main
---
island_perimeter = _import_('S-island_perimeter').island_perimeter

if __name__ == "__main__":
    grid = [
        [0. 0. 0. 0. 0. 0].
        [0. 1. 0. 0. 0. 0].
        [0. 1. 0. 0. 0. 0].
        [0. 1. 1. 1. 0. 0].
        [0. 0. 0. 0. 0. 0].
        ]

print(island_perimeter(grid))
