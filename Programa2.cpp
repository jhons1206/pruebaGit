def sumar(a, b):
    # Realiza la suma de dos números, retornando el total.
    # Útil para calcular totales en contextos financieros o contables.
    return a + b

valores = [(15, 35), (45, 55), (75, 25)]
for x, y in valores:
    resultado = sumar(x, y)
    print(f"El total de sumar {x} y {y} es {resultado}")
