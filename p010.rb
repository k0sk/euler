require 'prime'

ans = 0;

Prime.each(2000000) { |prime|
  ans += prime
}

p ans
