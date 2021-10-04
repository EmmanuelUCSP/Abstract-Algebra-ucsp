Descripcion del funcionanmiento

En la linea 6 se implemento el algoritmo de Euclides simple.


En la linea 16 se creo la funcion "logical" la cual contiene el funcionamiento del algoritmo
	de euclides extendendido

	Recibimos los números a evaluar en el algoritmo de euclide y ademas tomando como referencia variables x y.
	Preguntamos si el "a mod b" es igual a 0, si esto es cierto significa que estamos en el caso
	mas simple y que ahora les damos el valor a "x=0" "y=1" para empezar con algoritmo extendido.

	Creamos x' y' para prodecer con el calculo y hallar los verdaderos valor de x y
	se crea una variable "gcd" la cual almacenara la llamada recursiva a logical pero esta vez con los parametros de (b mod a, a, x', y')

	igualamos x = y' - (b/a) * x'             (b/a) es lo mismo que la funcion piso de [a/b]
	igualamos y = x'

	finalmente retornamos la variable gcd que guardo el calculo recursivo.



En la linea 30 se crea la funcion euclidesExtended() que recibe solo 2 variables
	
	Esta funcion crea las variables x y
	Pasa los parametros de las dos variables a,b ademas x,y  a la funcion logical
	Finalmente muestra los resultados al aplicar el algoritmo de euclides.


La funcion main contiene un programa simple que pide dos números al usuario y luego
ejecuta el algoritmos de euclides extendido a estos 2 números.

