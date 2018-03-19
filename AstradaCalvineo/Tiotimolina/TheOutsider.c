/* -------------------------------------------------------------------------------- */
/* ---------------------- PROYECTO DE MATEMATICA DISCRETA 2018 -------------------- */
/* -------------------------------------------------------------------------------- */
/* INTEGRANTES: Astrada Lucas Ezequiel - astradalucasezequiel@gmail.com ------------*/
/*              Jenaro Calviño - jen.calvineo@gmail.com --------------------------- */
/* -------------------------------------------------------------------------------- */
/* ----------- https://github.com/Lucas06/Matematica-Discreta-II-2018 ------------- */

/* -------------------------------------------------------------------------------- */
/* Funciones de Construcción/Destrucción del grafo */

Grafo ConstruccionDelGrafo();
void DestruccionDelGrafo(Grafo G);
/* -------------------------------------------------------------------------------- */


/* -------------------------------------------------------------------------------- */
/* Funciones para extraer información de datos del grafo */

u32 NumeroDeVertices(Grafo G) {
	return G->n_vertices;
}
u32 NumeroDeLados(Grafo G) {
	return G->m_aristas;
}
u32 NumeroDeColores(Grafo G) {
	return G->color;
}
/* -------------------------------------------------------------------------------- */


/* -------------------------------------------------------------------------------- */
/* Funciones para extraer información de los vértices */

u32 NombreDelVertice(Grafo G, u32 i);
u32 ColorDelVertice(Grafo G, u32 i);
u32 GradoDelVertice(Grafo G, u32 i);
u32 ColorJotaesimoVecino(Grafo G, u32 i,u32 j);
u32 NombreJotaesimoVecino(Grafo G, u32 i,u32 j);
/* -------------------------------------------------------------------------------- */


/* -------------------------------------------------------------------------------- */
/* Funciones de coloreo */

u32 NotSoGreedy(Grafo G,u32 semilla);
int Bipartito(Grafo G);
/* -------------------------------------------------------------------------------- */


/* -------------------------------------------------------------------------------- */
/* Funciones de ordenación */

void OrdenNatural(Grafo G);
void OrdenWelshPowell(Grafo G);
void AleatorizarVertices(Grafo G,u32 semilla);
void ReordenManteniendoBloqueColores(Grafo G,u32 x);
/* -------------------------------------------------------------------------------- */


