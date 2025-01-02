def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return a * b // gcd(a, b)

def lcm_list(numbers):
    if len(numbers) == 0:
        return None
    result = numbers[0]
    for num in numbers[1:]:
        result = lcm(result, num)
    return result

test_cases = input();
for _ in range(int(test_cases)):
  multiplier_length = input();
  multipliers = input().split(" ");
  multipliers = [int(num) for num in multipliers];
  mult = lcm_list(multipliers);
  inv = [int(mult/num) for num in multipliers];
  tot = sum(inv);
  if (inv[0] * multipliers[0] <= tot):
    print(-1);
  else:
    print(*inv, sep=" ")