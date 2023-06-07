from collections import deque

def bfs(n, ax, ay, bx, by, cx, cy, tx, ty):
  """
  Breadth-first search on a chessboard.

  Args:
    n: The size of the chessboard.
    ax: The x-coordinate of the king's starting position.
    ay: The y-coordinate of the king's starting position.
    bx: The x-coordinate of the queen's starting position.
    by: The y-coordinate of the queen's starting position.
    cx: The x-coordinate of the target position.
    cy: The y-coordinate of the target position.

  Returns:
    A string indicating whether the king can reach the target position.
  """

  # Initialize the queue and visited set.
  q = deque([(ax, ay)])
  visited = set([(ax, ay)])

  # Loop until the queue is empty.
  while q:
    x, y = q.popleft()

    # If the current position is the target position, return YES.
    if x == tx and y == ty:
      return "YES"

    # Iterate over the neighbors of the current position.
    for dx, dy in [(-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 1), (1, -1), (1, 0), (1, 1)]:
      nx = x + dx
      ny = y + dy

      # If the neighbor is out of bounds or visited, continue.
      if nx < 1 or nx > n or ny < 1 or ny > n or (nx, ny) in visited:
        continue

      # If the neighbor is not attacked by the queen, add it to the queue and visited set.
      if abs(nx - bx) > 1 or abs(ny - by) > 1 or abs(nx - cx) > 1 or abs(ny - cy) > 1:
        q.append((nx, ny))
        visited.add((nx, ny))

  # If the queue is empty, return NO.
  return "NO"

if __name__ == "__main__":
  n = int(input())
  ax, ay = map(int, input().split())
  bx, by = map(int, input().split())
  cx, cy = map(int, input().split())
  tx, ty = map(int, input().split())

  print(bfs(n, ax, ay, bx, by, cx, cy, tx, ty))
