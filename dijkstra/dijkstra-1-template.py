# https://de.wikibooks.org/wiki/Algorithmensammlung:_Graphentheorie:_Dijkstra-Algorithmus

def dijkstra(knoten, kanten, start, ziel):
    # knoten ist eine Liste von Knoten
    # kanten ist eine Liste von 3-Tupeln:
    #   (knoten1, knoten2, kosten)
    # start ist der Knoten, in dem die Suche startet
    # ziel ist der Knoten, zu dem ein Weg gesucht werden soll
    # Gibt ein Tupel zurück mit dem Weg und den Kosten 
    #
    
        
##############################################################################
        
knoten=['v1','v2','v3','v4','v5','v6']
wege=[('v1', 'v2', 3),  ('v1', 'v3', 5),  ('v3', 'v2', 5), ('v2', 'v4', 6),
('v3', 'v4', 3), ('v3', 'v5', 8), ('v4', 'v5', 3),  ('v4', 'v6', 10),
('v5', 'v6', 2)]

ergebnis = dijkstra(knoten, wege, 'v1', 'v6')
print("Kürzester Weg:\t" + str(ergebnis[0]) + "\nKosten: \t" + str(ergebnis[1]) )