Algoritmo Largo_ancho
	// Variables
	Definir Metro_Ancho, Metro_Largo, Precio_Por_El_m2, Precio_Por_El_Terreno, TAMANO_PERIMETRO, Alambre_Ocupamos Como Entero
	Definir TAMANO_DEL_AREA Como Real
	// Asignacion
	Metro_Ancho <- 0
	Metro_Largo <- 0
	Precio_Por_El_m2 <- 0
	// Ingreso de datos
	Escribir 'Ingrese los metros del ancho: '
	Leer Metro_Ancho
	Escribir 'Ingrese los metros de largo: '
	Leer Metro_Largo
	Escribir 'Ingrese el precio por m^2: '
	Leer Precio_Por_El_m2
	// Calculos
	TAMANO_DEL_AREA <- Metro_Ancho*Metro_Largo
	Precio_Por_El_Terreno <- TAMANO_DEL_AREA*Precio_Por_El_m2
	TAMANO_PERIMETRO <- 2*(Metro_Ancho+Metro_Largo)
	Alambre_Ocupamos <- TAMANO_PERIMETRO*3
	// Resultados
	Escribir 'El Area es: ', Metro_Ancho
	Escribir 'El Precio del terreno es de: ', Precio_Por_El_Terreno
	Escribir 'El Perimetro es: ', TAMANO_PERIMETRO
	Escribir 'El Alambre necesario es de: ', Alambre_Ocupamos
FinAlgoritmo
