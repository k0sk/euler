# Problem 13: Large sum
f = open("./p013.txt", "r")

sum = 0
f.each { |line|
  sum  += line.to_i
}

while sum > 10 ** 10
  sum /= 10
end

p sum