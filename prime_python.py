import time

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

start = time.time()
primes = [n for n in range(1, 1000001) if is_prime(n)]
end = time.time()

print(f"Found {len(primes)} primes.")
print(f"Time taken: {end - start:.2f} seconds")
