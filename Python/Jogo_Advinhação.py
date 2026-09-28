import random
import os

print("Jogo de Advinhação:")
aleatorio = random.randint(0,100)
rodadas = 0

while True:
    try:
        num = int(input("\nDigite um número (0-100): "))

        rodadas += 1

        os.system('cls' if os.name == 'nt' else 'clear')

        if num > aleatorio:
            print(f"O número {num} é maior...")
        elif num < aleatorio:
            print(f"O número {num} é menor...")
        else:
            print(f"Parabéns, você acertou em {rodadas} rodadas!")
            break

    except ValueError:
        print("Entrada inválida, digite inteiros...")

    
