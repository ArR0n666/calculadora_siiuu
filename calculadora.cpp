#include <cstdio>

int main() {
    // Declaración de variables
    float evaluacion1 = 0, evaluacion2 = 0, evaluacion3 = 0, evaluacion4 = 0;
    float promedio;
    int numevaluaciones = 0;

    // Pedir al usuario el número de evaluaciones
    printf("Ingrese el numero de evaluaciones (1 a 4): ");
    scanf("%d", &numevaluaciones);

    // Validar el número de evaluaciones
    while (numevaluaciones < 1 || numevaluaciones > 4) {
        printf("Numero de evaluaciones no valido.\n");
        printf("Introduce un numero valido.\n");
        scanf("%d", &numevaluaciones);
    }

    // Función para leer la evaluación y validar el rango
    auto leer_evaluacion = [](float& evaluacion, int numero) {
        do {
            printf("Ingrese la nota de la evaluacion %d (entre 1 y 10): ", numero);
            scanf("%f", &evaluacion);
            if (evaluacion < 1 || evaluacion > 10) {
                printf("Calificacion no valida. Intente de nuevo.\n");
            }
        } while (evaluacion < 1 || evaluacion > 10);
    };

    // Leer y validar las evaluaciones
    leer_evaluacion(evaluacion1, 1);

    if (numevaluaciones >= 2) {
        leer_evaluacion(evaluacion2, 2);
    }
    if (numevaluaciones >= 3) {
        leer_evaluacion(evaluacion3, 3);
    }
    if (numevaluaciones == 4) {
        leer_evaluacion(evaluacion4, 4);
    }

    // Calcular el promedio
    if (numevaluaciones == 1) {
        promedio = evaluacion1;
    } else if (numevaluaciones == 2) {
        promedio = (evaluacion1 + evaluacion2) / 2;
    } else if (numevaluaciones == 3) {
        promedio = (evaluacion1 + evaluacion2 + evaluacion3) / 3;
    } else {
        promedio = (evaluacion1 + evaluacion2 + evaluacion3 + evaluacion4) / 4;
    }

    // Mostrar el promedio
    printf("El promedio de las evaluaciones es: %.2f\n", promedio);

    
    // validar si ep estudiante paso o no 
    if (promedio >=6){
    	printf("has pasado .\n");
  	}else{
  		printf("lo sinto no has pasado.\n");
	  }
	  
	  return 0;
    
}
