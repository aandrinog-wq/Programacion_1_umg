Algoritmo Largo_ancho
	// Variables
	Definir ancho, largo, precio_m2, precio_terreno, perimetro, alambre Como Entero
	Definir area Como Real
	// Asignacion
	ancho <- 0
	largo <- 0
	precio_m2 <- 0
	// Ingreso de datos
	Escribir 'Ingrese los metros del ancho: '
	Leer ancho
	Escribir 'Ingrese los metros de largo: '
	Leer largo
	Escribir 'Ingrese el precio por m^2: '
	Leer precio_m2
	// Calculos
	area <- ancho*largo
	precio_terreno <- area*precio_m2
	perimetro <- 2*(ancho+largo)
	alambre <- perimetro*3
	// Resultados
	Escribir 'El Area es: ', area
	Escribir 'El Precio del terreno es de: ', precio_terreno
	Escribir 'El Perimetro es: ', perimetro
	Escribir 'El Alambre necesario es de: ', alambre
FinAlgoritmo
