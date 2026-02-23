#include <iostream>
using namespace std;
int main () {
int respuesta;
int correctas = 0;
cout <<"-----Examen del calentamiento global-----" << endl;

cout <<"1. Cual es la causa del calentamiento global actual?" <<  endl;
cout <<"1) Los ciclos  naturales de la orbita terrestre\n2) La quema de combustibles fosiles\n3) La actividad volcanica" << endl;
cout <<"Tu respuesta es: " << endl;
cin >> respuesta;
if (respuesta == 2) correctas++;
cout <<"2. Que son los gases de efecto invernadero?" << endl;
cout <<"1) Gases que enfrian la atmosfera\n2) Gases naturales que no influyen en el clima\n3) Gases que retienen el calor solar en la atmosfera" << endl;
cout <<"Tu respuesta es: " << endl;
cin >> respuesta;
if (respuesta == 3) correctas++;
cout <<"3. Cual de los siguientes es un efecto directo del aumento de la temperatura global?" << endl;
cout <<"1) El aumento del nivel del mar por el derretimiento de los glaciares\n2) La disminucion de la actividad de huracanes\3) El enfriamiento del oceano pacifica" << endl;
cout <<"Tu respuesta es: " << endl;
cin >> respuesta;
if (respuesta == 1) correctas++;
cout <<"4. Que accion contribuye mas a la reduccion del calentamiento global? " << endl;
cout <<"1) Aumentar el uso de vehiculos particulares\n2) Fomentar la deforestacion para agricultura\n3) Utilizar fuentes de energia renovables" << endl;
cout <<"Tu respuesta es: " << endl;
cin >> respuesta;
if (respuesta == 3) correctas++;
cout <<"5. Que sucede con los oceanos debido al cambio climatico? " << endl;
cout <<"1) Se vuelven menos acidos\n2) Aumenta su temperatura y acidez dañando la vida marina\n3) Disminuye el nivel del mar" << endl;
cout <<"Tu respuesta es: " << endl;
cin >> respuesta;
if (respuesta == 2) correctas++;

cout <<"-----Resultados-----" << endl;
if (correctas == 5){
    cout <<"Excelente" << endl;
}
else if (correctas == 4){
    cout <<"Muy bien" << endl;
}

else {
    cout <<"Es tiempo de estudiar mas" << endl;
}
return 0;
}
