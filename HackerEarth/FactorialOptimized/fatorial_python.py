def calculate_factorial_prime_decompose(number):
    prime = [True]*(number + 1)
    result = 1
    for i in range (2, number+1):
        if prime[i]:
            j = i+i
            while j <= number:
                prime[j] = False
                j += i
            sum = 0
            t = i
            while t <= number:
                sum += int(number/t)
                t *= i
            result *= i**sum
    return result
num = 10
print(calculate_factorial_prime_decompose(num))
