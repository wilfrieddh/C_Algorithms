#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Graph.h"

graph_t *createGraph(uint32_t num_verticies, uint32_t num_edges)
{
}

graph_t *freeGraph(graph_t *graph)
{
}

node_t *createNode(uint32_t node_idx,
                   value_type_t weight,
                   node_t *previous_node)
{
}

node_t *freeNode(node_t *node)
{
}

void addEdges(graph_t *graph, edge_t edges[])
{
}

void removeEdges(graph_t *graph)
{
}

void printGraph(graph_t *graph)
{
}
