# https://de.wikibooks.org/wiki/Algorithmensammlung:_Graphentheorie:_Dijkstra-Algorithmus

def dijkstra(knoten, kanten, start, ziel):
    # knoten ist eine Liste von Knoten
    # kanten ist eine Liste von 3-Tupeln:
    #   (knoten1, knoten2, kosten)
    # start ist der Knoten, in dem die Suche startet
    # ziel ist der Knoten, zu dem ein Weg gesucht werden soll
    # Gibt ein Tupel zurück mit dem Weg und den Kosten 
    #
    knotenEigenschaften  = [ [i, float('inf'), None, False] for i in knoten if i != start ]
    knotenEigenschaften += [ [start, 0, None, False] ]
    for i in range(len(knotenEigenschaften)):
        knotenEigenschaften[i] += [ i ]
    
    while True:
    	unbesuchteKnotenIterator = filter(lambda x: not x[3], knotenEigenschaften)
    	unbesuchteKnoten         = list(unbesuchteKnotenIterator)
    	if not unbesuchteKnoten: break

    	sortierteListe = sorted(unbesuchteKnoten, key=lambda i: i[1])
    	aktiverKnoten  = sortierteListe[0]
    	knotenEigenschaften[aktiverKnoten[4]][3] = True
    	if aktiverKnoten[0] == ziel:
    		break
    	aktiveKanten = list(filter(lambda x: x[0] == aktiverKnoten[0], kanten))
    	for kante in aktiveKanten:
    		andereKnotenListe = list(filter(lambda x: x[0] == kante[1], knotenEigenschaften))
    		andererKnotenId   = andereKnotenListe[0][4]
    		gewichtSumme      = aktiverKnoten[1] + kante[2]
    		if gewichtSumme < knotenEigenschaften[andererKnotenId][1]:
    			knotenEigenschaften[andererKnotenId][1] = gewichtSumme
    			knotenEigenschaften[andererKnotenId][2] = aktiverKnoten[4]

    
    if aktiverKnoten[0] == ziel:
    	weg  = []
    	weg += [ aktiverKnoten[0] ]
    	
    	kosten = aktiverKnoten[1]
    	while aktiverKnoten[0] != start:
    		aktiverKnoten = knotenEigenschaften[aktiverKnoten[2]]
    		weg += [ aktiverKnoten[0] ]

    	weg.reverse()
    	return (weg, kosten)
    else:
    	raise "Kein Weg gefunden"
        
##############################################################################
        
knoten=['v1','v2','v3','v4','v5','v6']
wege=[('v1', 'v2', 3),  ('v1', 'v3', 5),  ('v3', 'v2', 5), ('v2', 'v4', 6),
('v3', 'v4', 3), ('v3', 'v5', 8), ('v4', 'v5', 3),  ('v4', 'v6', 10),
('v5', 'v6', 2)]

ergebnis = dijkstra(knoten, wege, 'v1', 'v6')
print("Kürzester Weg:\t" + str(ergebnis[0]) + "\nKosten: \t" + str(ergebnis[1]) )