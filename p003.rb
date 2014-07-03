# Problem 3: Largest prime number
require 'prime'

n = 600851475143
ans = 0

# 1から10000までの素数を発生させる
Prime.each(10000) { |prime|
  # primeで割り切れればansへ代入していく
  ans = prime if n % prime == 0
}

p ans