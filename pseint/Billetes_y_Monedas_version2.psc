Algoritmo Billetes_y_Monedas
	Definir bil200, bil100, bil50, bil20, bil10, bil5, mon1 Como Entero
	Definir mon50c, mon25c, mon10c, mon05c, mon01c Como Entero
	Definir cantidad Como Real
	Escribir 'Ingrese el monto en Quetazales: '
	Leer cantidad
	cantidad <- cantidad*100
	cantidad <- Trunc(cantidad)
	// Billetes
	bil200 <- Trunc(cantidad/20000)
	cantidad <- cantidad-(bil200*20000)
	bil100 <- Trunc(cantidad/10000)
	cantidad <- cantidad-(bil100*10000)
	bil50 <- Trunc(cantidad/5000)
	cantidad <- cantidad-(bil50*5000)
	bil20 <- Trunc(cantidad/2000)
	cantidad <- cantidad-(bil20*2000)
	bil10 <- Trunc(cantidad/1000)
	cantidad <- cantidad-(bil10*1000)
	bil5 <- Trunc(cantidad/500)
	cantidad <- cantidad-(bil5*500)
	mon1 <- Trunc(cantidad/100)
	cantidad <- cantidad-(mon1*100)
	// Monedas
	mon50c <- Trunc(cantidad/50)
	cantidad <- cantidad-(mon50c*50)
	mon25c <- Trunc(cantidad/25)
	cantidad <- cantidad-(mon25c*25)
	mon10c <- Trunc(cantidad/10)
	cantidad <- cantidad-(mon10c*10)
	mon05c <- Trunc(cantidad/5)
	cantidad <- cantidad-(mon05c*5)
	mon01c <- Trunc(cantidad/1)
	cantidad <- cantidad-(mon01c*1)
	Escribir 'Billetes de 200: ', bil200
	Escribir 'Billetes de 100: ', bil100
	Escribir 'Billetes de 50: ', bil50
	Escribir 'Billetes de 20: ', bil20
	Escribir 'Billetes de 10: ', bil10
	Escribir 'Billetes de 5: ', bil5
	Escribir 'Monedas de 1: ', mon1
	Escribir 'Monedas de 50 centavos: ', mon50c
	Escribir 'Monedas de 25 centavos: ', mon25c
	Escribir 'Monedas de 10 centavos: ', mon10c
	Escribir 'Monedas de 5 centavos: ', mon05c
	Escribir 'Monedas de 1 centavos: ', mon01c
FinAlgoritmo
