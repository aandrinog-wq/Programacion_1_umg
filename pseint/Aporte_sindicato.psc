Algoritmo Aporte_sindicato
	// variables
	Definir monto, edad, descuento Como Real
	Definir nombre Como Cadena
	// Asignacion
	monto <- 0
	// Ingreso de Datos
	Escribir 'Ingrese su Nombre: '
	Leer nombre
	Escribir 'Ingrese su Edad: '
	Leer edad
	Escribir 'Ingrese su salario anual: '
	Leer monto
	// Condiciones
	Si monto<10000 Entonces
		descuento <- monto*0.005
	SiNo
		Si monto>=10000 Y monto<=19999 Entonces
			descuento <- monto*0.01
		SiNo
			Si monto>=20000 Y monto<=29999 Entonces
				descuento <- monto*0.02
			SiNo
				descuento <- monto*0.025
			FinSi
		FinSi
	FinSi
	Si edad<=30 Entonces
		descuento <- descuento+(descuento*0.20)
	FinSi
	// Resultados
	Escribir 'Su Nombre es: ', nombre
	Escribir 'Su Edad es: ', edad
	Escribir 'Su Salario anual es de: ', monto
	Escribir 'El aporte del sindicato es de: ', descuento
FinAlgoritmo
