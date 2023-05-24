#!/usr/bin/python3

def island_perimeter(grid):
  """
  This function returns the perimeter of the island described in grid.

  Args:
    grid: A list of lists of integers, where 0 represents a water zone and 1 represents a land zone.

  Returns:
    The perimeter of the island.
  """

  # Initialize the perimeter to 0.
  perimeter = 0

  # Iterate over the grid.
  for i in range(len(grid)):
    for j in range(len(grid[0])):
      # If the current cell is land, add 4 to the perimeter.
      if grid[i][j] == 1:
        perimeter += 4

      # If the current cell is not land, subtract 1 from the perimeter if it is adjacent to land.
      elif i > 0 and grid[i - 1][j] == 1:
        perimeter -= 1
      elif j > 0 and grid[i][j - 1] == 1:
        perimeter -= 1

  # Return the perimeter.
  return perimeter
