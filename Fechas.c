#include  <stdio.h>

#define  DIA  1
#define  MES  2
#define  ANNIO  3

struct struct_fecha
{
    int dia;
    int mes;
    int annio;
};

typedef  struct struct_fecha Fecha;

void  capturaFecha(Fecha *fecha);
Fecha sumarFecha(Fecha fecha, int tipo, int cant);
Fecha restarFecha(Fecha fecha, int tipo, int cantRest);
int  compararFechas(Fecha f1, Fecha f2);
void  imprimirFecha(Fecha fecha);

int  main ()
{
    int tipo, iguales;
    int cant, cantRest;
    Fecha nuevaFecha;
    Fecha nuevafecha;
    Fecha f1;
    Fecha f2;
    Fecha fecha;


    capturaFecha(& fecha);
    nuevaFecha = sumarFecha(fecha, tipo, cant);
    nuevafecha = restarFecha(fecha, tipo, cantRest);
    iguales = compararFechas(f1, f2);
    imprimirFecha(fecha);

    return 0;
}

void  capturaFecha(Fecha *fecha)
{
    printf( "Dia: " );
    scanf( "%d" , & fecha-> dia );
    printf( "Mes: " );
    scanf( "%d " , & fecha-> mes );
    printf( "Año: " );
    scanf( "%d" , fecha-> annio );

}

int compararFechas(Fecha f1, Fecha f2)
{
    int iguales = 0;
    if(Fecha.f1 == Fecha.f2)
    {
        iguales = 1;
    }
    else
        if(f1 > f2)
    {
        iguales = -1;
    }
    return iguales;
}

Fecha sumarFecha (Fecha fecha, int tipo, int cant)
    Fecha nuevaFecha;
    if(tipo == ANNIO)
    {
        nuevaFecha.dia = fecha.dia ;
        nuevaFecha.mes = fecha.mes ;
        nuevaFecha.annio = fecha.annio + cant;
    }
    else
        if (tipo == MES)
    {
        nuevaFecha.dia = fecha.dia ;
        nuevaFecha.mes = fecha.mes + cant;
        while(nuevaFecha. mes > 12)
        {
            cant = cant - 12;
            nuevaFecha.annio = fecha.annio + 1;

        }
        nuevaFecha.annio = fecha.annio ;

    }
    else
        if(tipo == DIA)
    {
        nuevaFecha.dia = fecha.dia + cant;
        while(nuevaFecha.dia > 30)
        {
            cantidad = cantidad - 30;
            nuevaFecha.mes = fecha.mes + 1;
            while(nuevaFecha.mes > 12)
            {
                nuevaFecha.mes = fecha.mes - 12;
                nuevaFecha.annio = fecha.annio + 1;
            }
        }
        nuevaFecha.annio = fecha.annio ;

    }
    return nuevaFecha;
}

Fecha restarFecha(Fecha fecha, int tipo, int cantRest)
{
    Fecha nuevafecha;
    if(tipo == ANNIO)
    {
        nuevafecha.dia = fecha.dia ;
        nuevafecha.mes = fecha.mes ;
        nuevafecha.annio = fecha.annio - cantRest;
    }
    else
        if(tipo == MES)
    {
        nuevafecha.dia = fecha.dia ;
        nuevafecha.mes = fecha.mes - cantRest;
        while(nuevafecha. mes < 0 )
        {
            cantRest = cantRest + 12 ;
            nuevafecha.annio = fecha.annio - 1 ;

        }
        nuevafecha.annio = fecha.annio ;

    }
    else
        if(tipo == DIA)
    {
        nuevafecha.dia = fecha.dia -cantRest;
        while(nuevafecha.dia < 0)
        {
            cantRest= cantRest + 30 ;
            nuevafecha.mes = fecha.mes - 1;
            while(nuevafecha. mes < 0)
            {
                nuevafecha.mes = fecha.mes + 12;
                nuevafecha.annio = fecha.annio - 1;
            }

        }
        nuevafecha.annio = fecha.annio;
    }

    return nuevafecha;

}

void  imprimirFecha(Fecha fecha)
{
    int i;
    printf ( " dia mes annio   \ n " );

        printf ( "%d \t " , fecha.dia , "/" );
        printf ( "%d \t " , fecha.mes , "/" );
        printf ( "%d \t " , fecha.annio , "/" );

}
