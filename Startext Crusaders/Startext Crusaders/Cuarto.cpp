#include "Cuarto.h"

cuarto::cuarto()
{
}

cuarto::cuarto(int X, int Y) : cuartoX(X) , cuartoY(Y)
{
	tipo = (contenidoHabitacion)(rand() % finDeTipos);
	switch (tipo)
	{
	case llave:
		descripcion = "Ohh shiny";
		break;
	case objeto: 
		descripcion = "Ves una wea bonito";
		break;
	case enemigo:
		descripcion = "DO DO DO DO DO DO DO Menacing";
		break;
	case vacia:
		descripcion = "Pues esta bonita... y ya";
		break;
	case stand:
		descripcion = "ESTO ES OBRA DE UN STNAD ENEMIGO";
		break;
	default:
		break;
	}
}

cuarto::~cuarto()
{
}
