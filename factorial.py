# AUTOR: GENARO HERNANDEZ VALDEZ
# FECHA: 26 DE JULIO DE 2021
# ESTE PROGRAMA CALCULA EL FACTORIAL DE UN NÚMERO ENTERO
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

def getfactorial():
    x = int(input('Escribe un Número Entero No Negativo: '))
    f = factorial(x)

    if f is False:
        print('Número no válido')
    else:
        print('El factorial de', x, 'es', f)

if __name__ == '__main__':
    getfactorial() 


#comentario de prueba para pull request