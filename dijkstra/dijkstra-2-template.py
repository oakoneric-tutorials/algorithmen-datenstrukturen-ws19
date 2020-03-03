# https://dev.to/mxl/dijkstras-algorithm-in-python-algorithms-for-beginners-dkc

from collections import deque, namedtuple

# we'll use infinity as a default distance to nodes.
inf = float('inf')
Edge = namedtuple('Edge', 'start, end, cost')


def make_edge(start, end, cost=1):
  return 


class Graph:
    def __init__(self, edges):
        # let's check that the data is right
        wrong_edges = [i for i in edges if len(i) not in [2, 3]]
        if wrong_edges:
            raise ValueError('Wrong edges data: {}'.format(wrong_edges))

        self.edges = [make_edge(*edge) for edge in edges]

    @property
    def vertices(self):
         # this piece of magic turns ([1,2], [3,4]) into [1, 2, 3, 4]
         # the set above makes it's elements unique.
        return 

    def get_node_pairs(self, n1, n2, both_ends=True):
        if both_ends: # ungerichtet
            node_pairs = 
        else: # gerichtet
            node_pairs = 
        return node_pairs

    def remove_edge(self, n1, n2, both_ends=True):
        node_pairs = self.get_node_pairs(n1, n2, both_ends)
        edges = self.edges[:]
        for ____ in ____:
           

    def add_edge(self, n1, n2, cost=1, both_ends=True):
        node_pairs = self.get_node_pairs(n1, n2, both_ends)
        for ____ in _____:
            

    @property
    def neighbours(self):
        neighbours = 

        return neighbours

    def dijkstra(self, source, dest):
        assert source in self.vertices, 'Such source node doesn\'t exist'
        
        vertices = self.vertices.copy()

        while _____:
            
            

        path           = 
        current_vertex = 
        while _____:
            
        if path:
            
        print("Kosten: \t" + str(____))
        return path


graph = Graph([
    ("v1", "v2", 3),  ("v1", "v3", 5),  ("v3", "v2", 5), ("v2", "v4", 6),
    ("v3", "v4", 3), ("v3", "v5", 8), ("v4", "v5", 3),  ("v4", "v6", 10),
    ("v5", "v6", 2)])

print("kürzester Weg: \t" + str(graph.dijkstra("v1", "v6")))