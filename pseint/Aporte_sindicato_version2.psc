Algoritmo Aporte_sindicato
	// variables
	Definir Pago, Edad_Usuario, Descontado_Por_Edad Como Real
	Definir Nombre_Usuario Como Cadena
	// Asignacion
	Pago <- 0
	// Ingreso de Datos
	Escribir 'Ingrese su Nombre: '
	Leer Nombre_Usuario
	Escribir 'Ingrese su Edad: '
	Leer Edad_Usuario
	Escribir 'Ingrese su salario anual: '
	Leer Pago
	// Condiciones
	Si Pago<10000 Entonces
		Descontado_Por_Edad <- Pago*0.005
	SiNo
		Si Pago>=10000 Y Pago<=19999 Entonces
			Descontado_Por_Edad <- Pago*0.01
		SiNo
			Si Pago>=20000 Y Pago<=29999 Entonces
				Descontado_Por_Edad <- Pago*0.02
			SiNo
				Descontado_Por_Edad <- Pago*0.025
			FinSi
		FinSi
	FinSi
	Si Edad_Usuario<=30 Entonces
		Descontado_Por_Edad <- Descontado_Por_Edad+(Descontado_Por_Edad*0.20)
	FinSi
	// Resultados
	Escribir 'Su Nombre es: ', Nombre_Usuario
	Escribir 'Su Edad es: ', Edad_Usuario
	Escribir 'Su Salario anual es de: ', Pago
	Escribir 'El aporte del sindicato es de: ', Descontado_Por_Edad
FinAlgoritmo
