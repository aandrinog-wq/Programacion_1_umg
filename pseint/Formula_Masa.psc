Algoritmo Formula_Masa
	Definir c1 como real 
	Definir c2 como real 
	Definir presion Como Real
	Definir volumen Como Real
	Definir temperatura como real
	Definir masa como real
	
	//Constante 
	c1<-0.37
	c2<-460
	
	//Entrada de datos por parte del ususario
	Escribir 'Ingrese la presion: '
	Leer presion
	Escribir 'Ingrese el volumen: '
	Leer volumen
	Escribir 'Ingrese la temperatura: '
	Leer temperatura
	
	//Proceso
	masa<-(presion*volumen) / (c1 + temperatura + c2)
	
	// Salida de datos del ususario
	Escribir 'La masa resultante es: ',masa
FinAlgoritmo

