#ifndef GRAPH_H
#define GRAPH_H

/*******************/
/*     INCLUDES    */
/*******************/

#include <math.h>
#include <stdbool.h>
#include <stdint.h>

/**********************/
/* DEFINES AND TYPES  */
/**********************/

typedef float value_type_t;
#define NO_VALUE (value_type_t)(INFINITY)

typedef struct graph
{

} graph_t;

/**********************/
/*     FUNCTIONS      */
/**********************/

graph_t *createGraph(const uint32_t num_verticies, const uint32_t num_edges);

graph_t *freeGraph(graph_t *graph);

void printGraph(const graph_t *const graph);

#endif // GRAPH_H
