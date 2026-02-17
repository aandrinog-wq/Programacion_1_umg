Algoritmo Calculadora
	Definir numero1, numero2, suma, resta, multiplicacion, division, modulo Como Entero
	Definir signo Como Real
	numero1 <- 0
	numero2 <- 0
	Escribir 'Escriba el primer numero a operar'
	Leer numero1
	Escribir 'Escriba el segundo numero a operar'
	Leer numero2
	Escribir 'MEscriba el numero para la operacion que quiera realizar'
	Escribir '1. +'
	Escribir '2. -'
	Escribir '3. *'
	Escribir '4. /'
	Escribir '5. %'
	Leer signo
	Si signo=1 Entonces
		suma <- numero1+numero2
		Escribir 'El resultado de la Suma es de: ', suma
	FinSi
	Si signo=2 Entonces
		resta <- numero1-numero2
		Escribir 'El resultado de la Resta es de: ', resta
	FinSi
	Si signo=3 Entonces
		multiplicacion <- numero1*numero2
		Escribir 'El resultado de la Multiplicacion es de: ', multiplicacion
	FinSi
	Si signo=4 Entonces
		division <- numero1/numero2
		Escribir 'El resultado de la Division es: ', division
	FinSi
	Si signo=5 Entonces
		modulo <- numero1 MOD numero2
		Escribir 'El resultado del Modulo es: ', modulo
	FinSi
FinAlgoritmo
