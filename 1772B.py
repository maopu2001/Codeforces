t = int(input())
for _ in range(t):
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    if (a[0] > b[1]):
        a[0], b[1] = b[1], a[0]
    if (a[1] > b[0]):
        a[1], b[0] = b[0], a[1]

    m = min(min(a), min(b))
    M = max(max(a), max(b))

    if ((a[0] == m and b[1] == M) or (a[1] == m and b[0] == M)):
        print("YES")
    else:
        print("NO")
