Algoritmo Billetes_y_Monedas
	Definir cant200, cant100, cant50, cant20, cant10, cant5, cant1 Como Entero
	Definir cantc50, cantc25, cantc10, cantc05, cantc01 Como Entero
	Definir monto Como Real
	Escribir 'Ingrese el monto en Quetazales: '
	Leer monto
	monto <- monto*100
	monto <- Trunc(monto)
	// Billetes
	cant200 <- Trunc(monto/20000)
	monto <- monto-(cant200*20000)
	cant100 <- Trunc(monto/10000)
	monto <- monto-(cant100*10000)
	cant50 <- Trunc(monto/5000)
	monto <- monto-(cant50*5000)
	cant20 <- Trunc(monto/2000)
	monto <- monto-(cant20*2000)
	cant10 <- Trunc(monto/1000)
	monto <- monto-(cant10*1000)
	cant5 <- Trunc(monto/500)
	monto <- monto-(cant5*500)
	cant1 <- Trunc(monto/100)
	monto <- monto-(cant1*100)
	// Monedas
	cantc50 <- Trunc(monto/50)
	monto <- monto-(cantc50*50)
	cantc25 <- Trunc(monto/25)
	monto <- monto-(cantc25*25)
	cantc10 <- Trunc(monto/10)
	monto <- monto-(cantc10*10)
	cantc05 <- Trunc(monto/5)
	monto <- monto-(cantc05*5)
	cantc01 <- Trunc(monto/1)
	monto <- monto-(cantc01*1)
	Escribir 'Billetes de 200: ', cant200
	Escribir 'Billetes de 100: ', cant100
	Escribir 'Billetes de 50: ', cant50
	Escribir 'Billetes de 20: ', cant20
	Escribir 'Billetes de 10: ', cant10
	Escribir 'Billetes de 5: ', cant5
	Escribir 'Monedas de 1: ', cant1
	Escribir 'Monedas de 50 centavos: ', cantc50
	Escribir 'Monedas de 25 centavos: ', cantc25
	Escribir 'Monedas de 10 centavos: ', cantc10
	Escribir 'Monedas de 5 centavos: ', cantc05
	Escribir 'Monedas de 1 centavos: ', cantc01
FinAlgoritmo
