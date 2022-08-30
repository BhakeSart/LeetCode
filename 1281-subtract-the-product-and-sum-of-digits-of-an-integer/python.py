n = 234
sum = 0
product = 1
while(n != 0):
    digit = n % 10
    product = product*digit
    sum = sum+digit
    n = n//10
print(product-sum)
