import random

print("🎯 Number Guessing Game 🎯")
number = random.randint(1, 100)
attempts = 0

while True:
    guess = input("Enter your guess (1-100): ")
    if not guess.isdigit():
        print("Please enter a valid number!")
        continue
    
    guess = int(guess)
    attempts += 1

    if guess < number:
        print("Too low! 📉")
    elif guess > number:
        print("Too high! 📈")
    else:
        print(f"✅ Correct! The number was {number}. Attempts: {attempts}")
        break
