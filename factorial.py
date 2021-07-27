def factorial(x):
    f=1
    if x < 0 :
        return False
    elif x == 0:
        return f
    else:
        for i in range(1, x+1):
            f = f*i
        return f            

def app():
    x = int(input('Escribe un Número: '))
    result = factorial(x)

    if result is False:
        print('Número no válido')
    else:
        print('El factorial de', x, 'es', result)

if __name__ == '__main__':
    app() 
