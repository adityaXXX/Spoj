t = int(input())

memo = [0, 1, 3]

def result(n):
    if n >= len(memo):
        memo.append(result(n-1) - result(n-2))
    return memo[n]

while(t):
    n = int(input())
    ans = result(n)
    for i in range(n):
        ans += memo[i]
    print(ans)
    t -= 1
