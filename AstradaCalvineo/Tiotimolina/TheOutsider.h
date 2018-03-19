/* -------------------------------------------------------------------------------- */
/* ---------------------- PROYECTO DE MATEMATICA DISCRETA 2018 -------------------- */
/* -------------------------------------------------------------------------------- */
/* INTEGRANTES: Astrada Lucas Ezequiel - astradalucasezequiel@gmail.com ------------*/
/*              Jenaro Calviño - jen.calvineo@gmail.com --------------------------- */
/* -------------------------------------------------------------------------------- */
/* ----------- https://github.com/Lucas06/Matematica-Discreta-II-2018 ------------- */

/* -------------------------------------------------------------------------------- */
/* Includes */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

/* -------------------------------------------------------------------------------- */
/* Estructuras necesarias */

typedef unsigned int u32;
typedef struct _GrafoSt_t *Grafo;
typedef struct _vertice_t *vertice;

struct _Grafo_t {
	u32 n_vertices;
	u32 m_aristas;
	u32 color;
	vertice *vertice_grafo;
};

struct _vertice_t {
	u32 nombre_real;
	u32 etiqueta;
	u32 grado;
	vertice vecinos; 
}

/* typedef struct _vecinos_t {

} valencia; */

typedef struct lado_t {
   u32 vertice_u;
   u32 vertice_v;
} lado;


/* -------------------------------------------------------------------------------- */
/* Funciones de Construcción/Destrucción del grafo */

Grafo ConstruccionDelGrafo(); /* Alloca memoria para un Nuevo Grado leido por entrada estándar */
void DestruccionDelGrafo(Grafo G); /* Destruye G y libera la memoria alocada */
/* -------------------------------------------------------------------------------- */


/* -------------------------------------------------------------------------------- */
/* Funciones para extraer información de datos del grafo */

u32 NumeroDeVertices(Grafo G); /* Retorna el número de Vértices del grafo G */
u32 NumeroDeLados(Grafo G); /* Retorna el número de lados del grafo G */
u32 NumeroDeColores(Grafo G); /* Retorna el número de colores del grafo G */
/* -------------------------------------------------------------------------------- */


/* -------------------------------------------------------------------------------- */
/* Funciones para extraer información de los vértices */

u32 NombreDelVertice(Grafo G, u32 i); /* Devuelve el nombre real del vértice número i en el orden guardado en ese momento en G */ 
u32 ColorDelVertice(Grafo G, u32 i); /* Devuelve el color con el que está coloreado el vértice número i en el orden guardado en ese momento en G */
u32 GradoDelVertice(Grafo G, u32 i); /* Devuelve el grado del vértice número i en el orden guardado en ese momento en G */
u32 ColorJotaesimoVecino(Grafo G, u32 i,u32 j); /* evuelve el color del v ́ecino numero j del vértice número i en el orden guardado en ese momento en G */ 
u32 NombreJotaesimoVecino(Grafo G, u32 i,u32 j); /*Devuelve el nombre del v ́ecino numero j del vértice nu ́mero i en el orden guardado en ese momento en G */
/* -------------------------------------------------------------------------------- */


/* -------------------------------------------------------------------------------- */
/* Funciones de coloreo */

u32 NotSoGreedy(Grafo G,u32 semilla); /* Corre la variación de greedy que se indica mas abajo en G con el orden interno que debe estar guardado de alguna forma dentro de G. Devuelve el numero de colores que se obtiene. */
int Bipartito(Grafo G); /* Si k es el número de componentes conexas de G, devuelve k si G es bipartito, y −k si noß */
/* -------------------------------------------------------------------------------- */


/* -------------------------------------------------------------------------------- */
/* Funciones de ordenación */

void OrdenNatural(Grafo G); /* Ordena los vértices en orden creciente de sus “nombres” reales */ 
void OrdenWelshPowell(Grafo G); /* Ordena los vértices de G de acuerdo con el orden Welsh-Powell */ 
void AleatorizarVertices(Grafo G,u32 semilla); /* Esta función ordena pseudoaleatoriamente los vértices de G, usando alguna función pseudoaleatoria que dependa determinísticamente de semilla. */
void ReordenManteniendoBloqueColores(Grafo G,u32 x); /* */ 
/* -------------------------------------------------------------------------------- */


