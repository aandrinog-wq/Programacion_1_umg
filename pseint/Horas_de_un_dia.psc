Algoritmo Horas_de_un_dia
	// Variables
	Definir hora Como Real
	Definir madru1, madru2, madru3, madru4, madru5, madru6, MANA, MANA2, MANA3, MANA4, MANA5, MANA6, medio1, madio2, tarde1, tarde2, tarde3, tarde4, tarde5, tarde6, noche1, noche2, noche3, noche4 Como Entero
	// Asignacion
	madru1 <- 0
	madru2 <- 1
	madru3 <- 2
	madru4 <- 3
	madru5 <- 4
	madru6 <- 5
	MANA1 <- 6
	MANA2 <- 7
	MANA3 <- 8
	MANA4 <- 9
	MANA5 <- 10
	MANA6 <- 11
	medio1 <- 12
	medio2 <- 13
	tarde1 <- 14
	tarde2 <- 15
	tarde3 <- 16
	tarde4 <- 17
	tarde5 <- 18
	tarde6 <- 19
	noche1 <- 20
	noche2 <- 21
	noche3 <- 22
	noche4 <- 23
	// Datos
	Escribir 'Ingrese la hora que desee: '
	Leer hora
	// Condiciones
	Si hora=0 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen a la madrugada'
	FinSi
	Si hora=1 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen a la madrugada'
	FinSi
	Si hora=2 Entonces
		Escribir 'Las ', hora, ' horas pertenecen a la madrugada'
	FinSi
	Si hora=3 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen a la madrugada'
	FinSi
	Si hora=4 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen a la madrugada'
	FinSi
	Si hora=5 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen a la madrugada'
	FinSi
	Si hora=6 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen a la mañana'
	FinSi
	Si hora=7 Entonces
		Escribir 'Las ', hora, ' horas pertenecen a la mañana'
	FinSi
	Si hora=8 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen a la mañana'
	FinSi
	Si hora=9 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen a la mañana'
	FinSi
	Si hora=10 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen a la mañana'
	FinSi
	Si hora=11 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen a la mañana'
	FinSi
	Si hora=12 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen al medio dia'
	FinSi
	Si hora=13 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen al medio dia'
	FinSi
	Si hora=14 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen a la tarde'
	FinSi
	Si hora=15 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen a la tarde'
	FinSi
	Si hora=16 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen a la tarde'
	FinSi
	Si hora=17 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen a la tarde'
	FinSi
	Si hora=18 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen a la tarde'
	FinSi
	Si hora=19 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen a la tarde'
	FinSi
	Si hora=20 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen a la noche'
	FinSi
	Si hora=21 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen a la noche'
	FinSi
	Si hora=22 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen a la noche'
	FinSi
	Si hora=23 Entonces
		Escribir 'Las ', hora, ' Horas pertenecen a la noche'
	FinSi
	Si hora<0 O hora>23 Entonces
		// Resultado
		Escribir 'Tiene que ser una hora entre las 0 y las 23 no cualquier hora'
	FinSi
FinAlgoritmo
