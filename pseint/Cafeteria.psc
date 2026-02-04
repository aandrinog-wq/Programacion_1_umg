Algoritmo Cafeteria
	Definir monto Como Real
	Definir menu, huevo, tocino, cafe, postre Como Entero
	// Asignacion de valores
	huevo <- 5
	tocino <- 9
	cafe <- 8
	postre <- 10
	monto <- 0
	// Menu de la cafeteria
	Repetir
		Escribir 'Menu de cafeteria'
		Escribir '1. Huevos = Q5'
		Escribir '2. Cafe = Q8'
		Escribir '3. Postres = Q10'
		Escribir '4. Tocino = 	Q9'
		Escribir '5. TOTAL'
		Escribir 'Elija un numero de opcion: '
		Leer menu
		// Condicciones
		Si menu=1 Entonces
			Escribir 'Eligio Huevos'
			monto <- monto+huevo
		FinSi
		Si menu=2 Entonces
			Escribir 'Eligio un Cafe'
			monto <- monto+cafe
		FinSi
		Si menu=3 Entonces
			Escribir 'Eligio un Postre'
			monto <- monto+postre
		FinSi
		Si menu=4 Entonces
			Escribir 'Eligio Tocino'
			monto <- monto+tocino
		FinSi
	Hasta Que menu=5
	Si menu=5 Entonces
		Escribir 'Gracias por venir su total es de: ', monto
	FinSi
FinAlgoritmo
